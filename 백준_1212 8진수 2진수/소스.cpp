#include <iostream>
#include <string>
using namespace std;

string Binary[8] = { "000", "001", "010", "011", "100", "101", "110", "111"};
int main()
{
	string octal;
	int i, j, k, len;

	cin >> octal;

	if (stoi(octal) == 0)
		cout << 0;
	else
	{
		i = 0;
		while (octal[0] != '0') 
		{ 
			if (octal[i + 1] == NULL)
			{
				octal[i] = NULL;
				i = 0;
			}	
			octal[i] = octal[i + 1]; 
			i++; 
		}
		
		len = octal.length();
		for (i = 0; i < len; i++)
		{
			string bin;
			for (j = 0; j < 8; j++)
			{
				if (octal[i] == j + '0')
				{
					bin = Binary[j];
					break;
				}
			}
			for (j = 0; j < 3; j++)
			{
				if (bin[0] == '0' && i == 0)
				{
					k = 0;
					while (bin[k + 1] != NULL) { bin[k] = bin[k + 1]; k++; }
					bin[k] = NULL;
				}
			}
			cout << bin;
		}
	}
}
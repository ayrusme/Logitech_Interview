#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

void main()
{   //Declaring a character array with a maximum size of 30 characters
	char s[30], cip[30];

	//Visual Studio wouldn't let me use gets, so utilising the more safe gets_s
	gets_s(s);

	//Calculating the length of string so that loop doesn't go infinite
	int len = strlen(s);

	/*The difference between a lower case alphabet and the next alphabet in uppercase is always 31.
	Using this, we can set the cipher to the respective alphabet. For consecutive alphabets, the cipher 
	incremented accordingly*/

	for (int i = 0; i < len; i++)
	{
		if (s[i] != 'z')
		{

			if (s[i] != ' ')
			{
				cip[i] = s[i] - 31;
			}
			if (cip[i] == cip[i - 1])
			{
				cip[i] = cip[i] + 1;
			}
		}
		else
		{
			cip[i] = 'A';
			if (cip[i] == cip[i - 1])
			{
				cip[i] = cip[i] + 1;
			}
		}
	}

	//Printing the result.
	cout << "\n";
	puts(cip);

	_getch();

}
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

void main()
{   //Declaring a character array with a maximum size of 30 characters
	char s[30];

	//Visual Studio wouldn't let me use gets, so utilising the more safe gets_s
	gets_s(s);

	//Calculating the length of string so that loop doesn't go infinite
	int len = strlen(s);

	//Adding each character by one, it'll increment the character's ASCII value. The initial condition will keep it from 
	//going out of bounds.
	for (int i = 0; i < len; i++)
	{
		if (s[i] == 'z')
		{
			s[i] = 'a';
		}
		else if (s[i] != ' ')
		{
			s[i] = (s[i] + 1);
		}
	}

	//Printing the result.
	cout << "\n";
	puts(s);

	_getch();

}
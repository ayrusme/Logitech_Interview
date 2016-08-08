#include<iostream>
#include<conio.h>
using namespace std;

//Declaring few important variables with global scope
int i, j, matrixElementCount, a = 0, b = 0;
int mat[5][5];

void print(int, int, int);

void main()
{
	//printing the matrix in the anticlockwise direction 
	int n;
	//Getting the size of the square matrix
	cin >> n;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{	
			//Getting the matrix from the user
			cin >> mat[i][j];
		}
	}
	matrixElementCount = n*n;

	//Calling the print function 
	print(a, b, n);

	_getch();
}

void print(int a, int b, int n)
{
	//Loops execute only if there exists a matrix greater than 1x1 
	if (n > 1)
	{
		//Printing the top-most row
		for (i = a, j = (n - 1); j >= a; j--)
		{
			cout << mat[i][j]<<" ";
			matrixElementCount--;
		}

		if (matrixElementCount == 0)
			return;

		//Printing the left-most column
		for (i = (a + 1), j = b; i < n; i++)
		{
			cout << mat[i][j] << " ";
			matrixElementCount--;
		}

		if (matrixElementCount == 0)
			return;

		//Printing the bottom-most row
		for (i = (n - 1), j = (a + 1); j < n; j++)
		{
			cout << mat[i][j] << " ";
			matrixElementCount--;
		}

		if (matrixElementCount == 0)
			return;

		//Printing the Right-Most Column
		for (i = (n - 2), j = (n - 1); i > 0; i--)
		{
			cout << mat[i][j] << " ";
			matrixElementCount--;
		}

		if (matrixElementCount == 0)
			return;

	}
	//Else condition, in case the matrix has only one element
	else
		cout << mat[a][b];

	//The explanation to this recursion is that all square matrices greater than 2*2 have a (n-2)*(n-2) matrix inside them.
	//So this snippet calls the inner matrix to the printed in case of matrix size being greater than or equal to 3*3.

	if (n >= 3)
	{
		print(a + 1, b + 1, n - 1);
	}

	
}


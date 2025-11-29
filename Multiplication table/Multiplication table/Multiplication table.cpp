

#include <iostream>
#include<cstdio>
#include<iomanip>
using namespace std;

void PrintTitle()
{
	printf("\t\t\t\tMultiplication Table from 1 To 10\n\n");
	printf("\t 1	2	3	4	5	6	7	8	9	10\n");
	printf("-----------------------------------------------------------------------------------\n");
}

void PrintTable()
{
	PrintTitle();
	for (int i = 1; i <= 10; i++)
	{
		cout << left << setw(7) << i << "| ";
		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "	";
		}
		cout << endl;
	}
}

int main()
{
	
	PrintTable();

	return 0;
}


#include <iostream>
//#include <stdio.h>
//#include <fstream>
using namespace std;
void Input(int a[5][5]) {
	int iil; // объявила переменные на каждой новой строке, iil - переменная счетчик
	int jjl; // переменная-счетчик
	for (iil = 0; iil < 5; iil++) // поменяла переменные
	{
		for (jjl = 0; jjl < 5; jjl++)
		{
			//cin >> a[i][j];
			a[iil][jjl] = rand() % 20;
		}
		cout << endl;
	}
}

void Output(int a[5][5]) {
	int i; // объявила переменные на каждой новой строке
	int j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cout << a[i][j];
			cout << '\t';
		}
		cout << endl;
	}
	cout << endl;
	//return arr;
}
void Search(int a[5][5]) 
{
	setlocale(LC_ALL, "Russian");
	int i, j, e=0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <5; j++)
		{
			if (a[i][j] == a[j][i])
			{
				e += 1;
			}
			if (e == 5)
			{
				cout << i << " ñòðîêà ðàâíà " << i << " ñòîëáöó " << endl;
			}
		}
		//cout << endl;
		e = 0;
	}
	cout << endl;
	//return arr;
}
void Sum (int a[5][5])
{
	int i, j, sum = 0, sum1 = 0, k = 0, e = 0, sum2 = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (a[i][j] < 0)
			{
				//idx = i;
				break;
			}
		}
		if (j == 5)//idx == -1)
		{
			cout << "Îòðèöàòåëüíûõ ýëåìåíòîâ â " << i << " ñòðîêå íåò" << endl;
		}
		else
		{
			for (j = 0; j < 5; j++)
			{
				sum += a[i][j];
				sum1 += a[i][j];
			}
			cout << "Ñóììà ýëåìåíòîâ â " << i << " ñòðîêå =" << sum;
			cout << endl;
		}
		cout << endl;

		//idx = -1;
		sum = 0;
	}

	cout << "Îáùàÿ ñóììà ýëåìåíòîâ  " << sum1;
	cout << endl;
}


void main()
{
	setlocale(LC_ALL, "Russian");
	int arr[5][5];
	Input(arr);
	//cout << "Èñõîäíûé ìàññèâ : " << endl;
	//Output(arr);
	//Search(arr);
	//Sum(arr);
	
	FILE* fout;
	fopen_s(&fout, "cpp.txt", "wt");
	fprintf(fout, "%d", arr[0][0]);//ïå÷àòü â ôàéë
	fclose(fout);
	
	FILE* fin;
	fopen_s(&fin, "cpp.txt", "rt");
	fscanf(fin, "%d", &arr[0][0]);//÷òåíèå èç ôàéëà
	
		




}

#include <iostream>
//#include <stdio.h>
//#include <fstream>
using namespace std;

void Input(int a[5][5]) {

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			//cin >> a[i][j];
			a[i][j] = rand() % 20;
		}
		cout << endl;
	}
	
	//return arr;
}

void Output(int a[5][5]) {

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
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
				cout << i << " ������ ����� " << i << " ������� " << endl;
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
			cout << "������������� ��������� � " << i << " ������ ���" << endl;
		}
		else
		{
			for (j = 0; j < 5; j++)
			{
				sum += a[i][j];
				sum1 += a[i][j];
			}
			cout << "����� ��������� � " << i << " ������ =" << sum;
			cout << endl;
		}
		cout << endl;

		//idx = -1;
		sum = 0;
	}

	cout << "����� ����� ���������  " << sum1;
	cout << endl;
}


void main()
{
	setlocale(LC_ALL, "Russian");
	int arr[5][5];
	Input(arr);
	//cout << "�������� ������ : " << endl;
	//Output(arr);
	//Search(arr);
	//Sum(arr);
	


	FILE* fout;
	fopen_s(&fout, "cpp.txt", "wt");
	fprintf(fout, "%d", arr[0][0]);//������ � ����
	fclose(fout);
	
	FILE* fin;
	fopen_s(&fin, "cpp.txt", "rt");
	fscanf(fin, "%d", &arr[0][0]);//������ �� �����
	
		




}

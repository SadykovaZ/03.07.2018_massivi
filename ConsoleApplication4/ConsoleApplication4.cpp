#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<limits>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	const int n = 6;
	int a[n] = { 2,7,0,18,3 };
	for (int i = 1; i <= n; i++)
	{
		a[2] = (a[1] + a[3])/2;
		
	}
	cout << a[2];










	/*const  int n = 10;
	bool f = true;
	int a[n] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < n / 2; i++)
	{
		swap(a[i], a[n -1- i]);
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
*/





	/*const  int n = 10;
	bool f = true;
	int a[n] = { 1,2,3,4,5,5,4,3,2,1 };
	for (int i = 0; i < n/2; i++)
	{
		if (a[i] != a[n - 1 - i])
		{
			f = false;
			break;
		}
	}
	if (f)
		cout << "Symmenric";
	else
		cout << "Non";
*/
/*const int n = 10;
		int max_v = INT_MIN;
		int min_v = INT_MAX;
		int a[n] = { 1,7,-5,12,8,23,6,9,3,21 };


		for (int i = 0; i < n; i++)
		{

			if (a[i] > max_v)
				max_v = a[i];
			if (a[i] < min_v)
				min_v = a[i];
		}
		cout << max_v<<" ";
		cout << min_v;
		cout << endl;*/

		system("pause");
	return 0;
}

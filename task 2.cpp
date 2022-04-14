/*Наименьший в массиве*/
#include <iostream>
using namespace std;
int main() 
{
	int n, min=0;
	int a[n];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		min=a[0];
	} 

	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	cout << min;
	return 0;
}


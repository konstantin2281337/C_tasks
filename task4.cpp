#include <iostream>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	int const n = 10;
	int a[n];
	int count = 0;
	double summa = 0;
	
	cout << "Введите десять чисел:" << "\n";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		summa += a[i];
		count++;
	}
	summa = summa / count;
	cout << "Среднее арифметическое = " << summa;
}


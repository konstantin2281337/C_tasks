#include <iostream>
#include <clocale>

using namespace std;

int kvadrat(int a, int b)
{
	int z=0;
	z=a+b;
	z*=z;
	return z;
}

int main()
{
	setlocale(LC_CTYPE, "rus");
	int a, b;
	cin >> a >> b;
	cout << kvadrat(a, b);
}

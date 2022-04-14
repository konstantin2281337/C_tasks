/*Камень, ножницы, бумага*/
#include <cstdlib>
#include <iostream>
#include <clocale>

using namespace std;

int a() 
{
	return (rand() % 3 + 1);
}

int main() 
{
	setlocale(LC_CTYPE, "rus");
	int human, bot;
	string human_win, bot_win;
	cout << "Выберите: " << "\n" << "Камень(1). Ножницы(2). Бумага(3)." << "\n";
	cin >> human;
	bot = a();

	human_win = "Ты выиграл!";
	bot_win = "Ты проиграл!";
	cout << "Твой ход: " << human << "\n";
	cout << "Ход бота: " << bot << "\n";
	
	if (human < 1 || human > 3)
		{
			cout << "Ошибка! Введите корректное число" << "\n";
		}
	else if (human == bot) 
		{
			cout << "Ничья!";
		}
	else if (human == 1 and bot == 2) 
		{
			cout << human_win;
		}
	else if (human == 1 and bot == 3) 
		{
			cout << bot_win;
		}
	else if (human == 2 and bot == 1) 
		{
			cout << bot_win;
		}
	else if (human == 2 and bot == 3) 
		{
			cout << human_win;
		}
	else if (human == 3 and bot == 1) 
		{
			cout << human_win;
		}
	else if (human == 3 and bot == 2) 
		{
			cout << bot_win;
		}
	return 0;
}

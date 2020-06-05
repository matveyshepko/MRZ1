// Лабораторная работа №1 по дисциплине МРЗвИС
// Выполнена студентами группы 821701
// БГУИР Казаченко Евгения Александровича и Дикусаром В.В
// Реализация класса Interface

#include "Interface.h"

void Interface::printMenu()
{
}

void Interface::printPairs(int numPairs,int checkPairs,vector <Algor> vec)
{
	while (checkPairs != numPairs) {
		int first, second;
		cout << "\n" << checkPairs + 1 << " пара: " << "\n";
		while (true) {
			cout << "Введите первое число: "; cin >> first;
			if (first >= 0 && first < 15) break;			//лимит вводимых чисел изменить как хочешь
			else cout << "Некоректный ввод!" << endl;
		}
		while (true) {
			cout << "Введите второе число: "; cin >> second;
			if (second >= 0 && second < 15) break;			//лимит вводимых чисел изменить как хочешь
			else cout << "Некоректный ввод!" << endl;
		}
		Algor pair(first, second);
		vec.push_back(pair);
		checkPairs++;
	}
}

// Лабораторная работа №1 по дисциплине МРЗвИС
// Выполнена студентами группы 821701
// БГУИР К Казаченко Евгений Александрович и Дикусар Владимир Юрьевич 
// Объявление функции,переменных в библиотеке algorithm.h

//Библиотеки
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class Algor {
private:
	
	class container {
	public : bool arr[12];
	}; 
	vector<container> vect;

	int firstNum; //первое число
	int secondNum; //второе число
	int result; //результат
	bool firstNumber[6]; //6-разрядное число
	bool secondNumber[6]; //6-разрядное число

public:
	void setVectValue();
	void additional(bool[12], int); 
	void rightShift(bool[12]); //сдвиг вправо 
	void showVector(int index); //промежуточный результат вектора
	void push(bool[12]); 
	void showNum(); //выводит пары 
	void viewShowTable(int num); 
	void showTable(int); //вывести один ряд таблицы
	void setResult();
	void calculationResult(int numOfpair);  //результат вычислении в двоичной системе(всех пар)


	Algor(int firstNum, int secondNum) { //перевод в двоичную систему
		this->firstNum = firstNum;
		this->secondNum = secondNum;
		for (int i = 5; i >= 0; i--) { 
			firstNumber[i] = firstNum % 2;
			firstNum /= 2;
			secondNumber[i] = secondNum % 2; 
			secondNum /= 2;
		}
		setVectValue();
		setResult();
	};

};


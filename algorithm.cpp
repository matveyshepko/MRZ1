// Лабораторная работа №1 по дисциплине МРЗвИС
// Выполнена студентами группы 821701
// БГУИР  Казаченко Евгений Александрович и Дикусар Владимир Юрьевич 
// Реализация библиотеки algorithm.h

#include "algorithm.h"
using namespace std;



void Algor::additional(bool value[12], int index) {
	int temp1[12], temp2[12];
	bool tempo[12];
	for (int i = 0; i < 12; i++) {
		temp1[i] = vect[index].arr[i];
		temp2[i] = value[i];
	}
	for (int i = 11; i >= 0; i--) {
		temp1[i] += temp2[i];
		if (temp1[i] == 2) {
			temp1[i - 1] += 1;
			temp1[i] = 0;
		}
		if (temp1[i] == 3) {
			temp1[i - 1] += 1;
			temp1[i] = 1;
		}
	}
	for (int i = 0; i < 12; i++) { tempo[i] = temp1[i]; }
	push(tempo);
}

void Algor::setVectValue() {
	bool temp[12]; 
	for (int i = 0; i < 12; i++) temp[i] = 0; 
	for (int i = 5; i >= 0; i--) { 
		if (secondNumber[5]) temp[i + 6] = firstNumber[i]; 
		else temp[i + 6] = 0; 
	}
	push(temp);					//0
 	push(temp);					//1
	push(temp);					//2
	for (int i = 0; i < 12; i++) temp[i] = 0;
	for (int i = 5; i >= 0; i--) {
		if (secondNumber[4]) temp[i + 6] = firstNumber[i];
		else temp[i + 6] = 0;
	}
	push(temp);					//3
	rightShift(temp);
	push(temp);					//4
	additional(temp, 2);		//5
	for (int i = 0; i < 12; i++) temp[i] = 0;
	for (int i = 5; i >= 0; i--) {
		if (secondNumber[3]) temp[i + 6] = firstNumber[i];
		else temp[i + 6] = 0;
	}
	push(temp);					//6
	rightShift(temp);
	rightShift(temp);
	push(temp);					//7
	additional(temp, 5);		//8
	for (int i = 0; i < 12; i++) temp[i] = 0;
	for (int i = 5; i >= 0; i--) {
		if (secondNumber[2]) temp[i + 6] = firstNumber[i];
		else temp[i + 6] = 0;
	}
	push(temp);					//9
	rightShift(temp);
	rightShift(temp);
	rightShift(temp);
	push(temp);					//10
	additional(temp, 8);		//11
	for (int i = 0; i < 12; i++) temp[i] = 0;
	for (int i = 5; i >= 0; i--) {
		if (secondNumber[1]) temp[i + 6] = firstNumber[i];
		else temp[i + 6] = 0;
	}
	push(temp);					//12
	rightShift(temp);
	rightShift(temp);
	rightShift(temp);
	rightShift(temp);
	push(temp);					//13
	additional(temp, 11);		//14
	for (int i = 0; i < 12; i++) temp[i] = 0;
	for (int i = 5; i >= 0; i--) {
		if (secondNumber[0]) temp[i + 6] = firstNumber[i];
		else temp[i + 6] = 0;
	}
	push(temp);					//15
	rightShift(temp);
	rightShift(temp);
	rightShift(temp);
	rightShift(temp);
	rightShift(temp);
	push(temp);					//16
	additional(temp, 14);		//17
}


void Algor::showVector(int index) { //выводит промежуточный результат в такте
	for (int i = 0; i < 12; i++) {
		cout << vect[index].arr[i];
		if (i == 3 || i==7) cout << "-";
	}
}


void Algor::push(bool ar[12]) { //запихиваем в контейер
	container cont;
	for (int i = 0; i < 12; i++) {
		cont.arr[i] = ar[i];
	}
	vect.push_back(cont);
}


void Algor::rightShift(bool mas[12]) {//сдвиг вправо
	for (int i = 0; i < 11; i++) {
		bool temp = mas[i];
		mas[i] = mas[i + 1];
		mas[i + 1] = temp;
	}
}

void Algor::showNum() { //выводит первый и второй число(множители)
	cout << "\n\nПервый множитель: " << firstNum << " = ";
	for (int i = 0; i < 6; i++) {
		cout << firstNumber[i];
	}
	cout << endl;
	cout << "Второй множитель: "  << secondNum << " = ";
	for (int i = 0; i < 6; i++) {
		cout << secondNumber[i];
	}
	cout << endl;
}

void Algor::viewShowTable(int num) { //вывести один ряд таблицы
	for (int i = 0; i < num; i++) {
		cout << "  такт   " << i+1 << " |       ------------          |         ------------          |          ------------          |" << endl;
	}
	cout << "----------------------------------------------------------------------------------------------------------------" << endl;
}


void Algor::showTable(int counter) { //вывести один ряд таблицы
	switch (counter) {
	default: cout << "  ------------          |         ------------          |          ------------          |" << endl;
		break;
	}
}

void Algor::setResult() {
	for (int i = 11, j = 0; i >= 0; i--, j++) {
		result += vect[17].arr[i] * pow(2, j);
	}
}

void Algor::calculationResult(int numPair) {  //результат вычислении в двоичной системе(всех пар)
	cout << numPair + 1 << " пара: "  << firstNum << " * " << secondNum << " = "  << result << " = ";
	for (int i = 0; i < 12; i++) {
		cout << vect[17].arr[i];
		if (i == 3 || i==7 ) cout << "-";
	}
	cout << endl;
}

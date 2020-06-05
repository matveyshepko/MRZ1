// Лабораторная работа №1 по дисциплине МРЗвИС
// Вариант 9
// Главная функция

//Библиотеки
#include "algorithm.h"
#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;


void review(vector <Algor> vec) {
	cout << "\n\n\tРезультаты вычислений:" << endl;
	for (int i = 0; i < vec.size(); i++) {
		vec[i].calculationResult(i);
	}
}
int getNum(int first, int second) {
	if (first >= 0 && first <= 63 && second >= 0 && second <= 63) return first & second;
	if (first < 0 || first > 63) { cout << "Множитель \"" << first << "\" не 6-разрядное" << endl; exit(0);}
	if (second < 0 || second > 63) { cout << "Множитель \"" << second << "\" не 6-разрядное" << endl; exit(0);  }
}
void getBinarySystem(vector <Algor> vec) {
	system("cls");
	cout << "Результат перевода с десятичной в двоичную систему" << endl;
	for (int i = 0; i < vec.size(); i++) {
		cout << "\t\t" << i + 1 << " пара: ";
		vec[i].showNum();
		cout << "*****************************************" << endl;
	}
}

void viewInterface(int numPairs,vector<Algor> vec) {
	int tact = 0;
	if (numPairs <= 3) {
		cout << "\n\n\n";
		cout << "----------------------------------------------------------------------------------------------------------------" << endl;
		cout << " № Такта    |             1 этап              |             2 этап            |          3 этап         |" << endl;
		cout << "----------------------------------------------------------------------------------------------------------------" << endl;
	}
	else {
		tact = (numPairs - 1) * 2 + 6;
		cout << endl << "Кол-во пар: " << numPairs << "\tКол-во тактов: " << tact;
		cout << "\n\n\tРезультаты вычислений:" << endl;
		for (int i = 0; i < vec.size(); i++) {
			vec[i].calculationResult(i);
		}
		exit(0);
	}
}

int main() {
	setlocale(LC_ALL, "Rus");
	int numPairs, first, second, checkPairs = 0;
	vector <Algor> vec;
	cout << "Количество пар чисел: "; cin >> numPairs;
	while (checkPairs != numPairs) { 
	
		cout << "\n" << checkPairs + 1 << " пара: " << "\n";
		cout << "Введите первый множитель: "; cin >> first;
		cout << "Введите второй множитель: "; cin >> second;
		getNum(first, second);
		Algor pair(first, second);
		vec.push_back(pair);
		checkPairs++;
	}
	getBinarySystem(vec);
		int choose; int enter;
		int counter = 1, tact = 0;
		cout << "Что вы хотите сделать?\n1-Посмотреть работу по тактам\n2-Посмотреть итоговый результат\n3-Выйти из программы" << endl; choose = _getch();
		if (choose == '1') {
			while (true) {
				viewInterface(numPairs,vec);
				if (numPairs == 1) {
					if (tact == 0) vec[0].viewShowTable(8);

					else if (tact > 0) {
						
						/*cout << "  такт 1  |        "; if (tact - 1 >= 0 && tact == numPairs) {
							vec[tact - 1].showVector(0); cout << "        |          ------------          |          ------------          | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 2  |        "; if (tact - 2 >= 0 && tact - 1 == numPairs) {
								vec[tact - 2].showVector(3); cout << "        |        "; vec[tact - 2].showVector(1); cout << "        |          ------------          | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 3  |        "; if (tact - 3 >= 0 && tact - 2 == numPairs) {
							vec[tact - 3].showVector(6); cout << "        |        "; vec[tact - 3].showVector(4); cout << "        |        "; vec[tact - 3].showVector(2); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);


						cout << "  такт 4  |        "; if (tact - 4 >= 0 && tact - 3 == numPairs) {
							vec[tact - 4].showVector(9); cout << "        |        "; vec[tact - 4].showVector(7); cout << "        |        "; vec[tact - 4].showVector(5); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 5  |        "; if (tact - 5 >= 0 && tact - 4 == numPairs) {
							vec[tact - 5].showVector(12);  cout << "        |        ";  vec[tact - 5].showVector(10); cout << "        |        "; vec[tact - 5].showVector(8); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 6  |        "; if (tact - 6 >= 0 && tact - 5 == numPairs) {
							vec[tact - 6].showVector(15);  cout << "        |        ";  vec[tact - 6].showVector(13); cout << "        |        "; vec[tact - 6].showVector(11); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 7  |        "; if (tact - 7 >= 0 && tact - 6 == numPairs) {
							cout << "  ------------          |        ";  vec[tact - 7].showVector(16); cout << "        |        "; vec[tact - 7].showVector(14); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 8  |        "; if (tact - 8 >= 0 && tact - 7 == numPairs) {
							cout << "  ------------          |          ------------          |        "; vec[tact - 8].showVector(17); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);*/


						cout << "  такт 1  |        "; if (tact - 1 >= 0 && tact == numPairs) {
							vec[tact - 1].showVector(2); cout << "        |          ------------          |          ------------          | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 2  |        "; if (tact - 2 >= 0 && tact - 1 == numPairs) {
							vec[tact - 2].showVector(5); cout << "        |           ------------         |          ------------          | "; cout << endl;
						}
						else vec[0].showTable(0);


						cout << "  такт 3  |        "; if (tact - 3 >= 0 && tact - 2 == numPairs) {
							 cout << "   ------------     |        "; vec[tact - 3].showVector(8); cout << "        |        ";  cout << "   ------------     |        "; cout << endl;
						}
						else vec[0].showTable(0);


						cout << "  такт 4  |        "; if (tact - 4 >= 0 && tact - 3 == numPairs) {
							cout << "   ------------     |        "; vec[tact - 4].showVector(11); cout << "        |        "; cout << "   ------------     |        "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 5  |        "; if (tact - 5 >= 0 && tact - 4 == numPairs) {
							cout << "  ------------          |          ------------          |        "; vec[tact - 5].showVector(14); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 6  |        "; if (tact - 6 >= 0 && tact - 5 == numPairs) {
							cout << "  ------------          |          ------------          |        "; vec[tact - 6].showVector(17); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);


						cout << "----------------------------------------------------------------------------------------------------------------" << endl;
					}
				}

				if (numPairs == 2) {
					if (tact == 0) vec[0].viewShowTable(8);
					else if (tact > 0) {
						/*cout << "  такт 1  |        "; if (tact - 1 >= 0 && tact + 1 == numPairs) {
							vec[tact - 1].showVector(0); cout << "        |          ------------          |          ------------          | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 2  |        "; if (tact - 2 >= 0 && tact == numPairs) {
							vec[tact - 2].showVector(3); cout << "        |        "; vec[tact - 2].showVector(1); cout << "        |          ------------          | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 3  |        "; if (tact - 3 >= 0 && tact - 1 == numPairs) {
							vec[tact - 3].showVector(6); cout << "        |        "; vec[tact - 3].showVector(4); cout << "        |        "; vec[tact - 3].showVector(2); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 4  |        "; if (tact - 4 >= 0 && tact - 2 == numPairs) {
							vec[tact - 4].showVector(9); cout << "        |        "; vec[tact - 4].showVector(7); cout << "        |        "; vec[tact - 4].showVector(5); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 5  |        "; if (tact - 5 >= 0 && tact - 3 == numPairs) {
							vec[tact - 5].showVector(12); cout << "        |        "; vec[tact - 5].showVector(10); cout << "        |        "; vec[tact - 5].showVector(8); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 6  |        "; if (tact - 6 >= 0 && tact - 4 == numPairs) {
							vec[tact - 6].showVector(15); cout << "        |        "; vec[tact - 6].showVector(13); cout << "        |        "; vec[tact - 6].showVector(11); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 7  |        "; if (tact - 7 >= 0 && tact - 5 == numPairs) {
							vec[tact - 6].showVector(0); cout << "        |        "; vec[tact - 7].showVector(16); cout << "        |        "; vec[tact - 7].showVector(14); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 8  |        "; if (tact - 8 >= 0 && tact - 6 == numPairs) {
							vec[tact - 7].showVector(3); cout << "        |        "; vec[tact - 7].showVector(1); cout << "        |        "; vec[tact - 8].showVector(17); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 9  |        "; if (tact - 9 >= 0 && tact - 7 == numPairs) {
							vec[tact - 8].showVector(6); cout << "        |        "; vec[tact - 8].showVector(4); cout << "        |        "; vec[tact - 8].showVector(2); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 10  |        "; if (tact - 10 >= 0 && tact - 8 == numPairs) {
							vec[tact - 9].showVector(9); cout << "        |        "; vec[tact - 9].showVector(7); cout << "        |        "; vec[tact - 9].showVector(5); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 11  |        "; if (tact - 11 >= 0 && tact - 9 == numPairs) {
							vec[tact - 10].showVector(12); cout << "        |        "; vec[tact - 10].showVector(10); cout << "        |        "; vec[tact - 10].showVector(8); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 12  |        "; if (tact - 12 >= 0 && tact - 10 == numPairs) {
							vec[tact - 11].showVector(15); cout << "        |        "; vec[tact - 11].showVector(13); cout << "        |        "; vec[tact - 11].showVector(11); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);


						cout << "  такт 13  |        "; if (tact - 13 >= 0 && tact - 11 == numPairs) {
							cout << "  ------------          |        ";  vec[tact - 12].showVector(16); cout << "        |        "; vec[tact - 12].showVector(14); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 14 |        "; if (tact - 14 >= 0 && tact - 12 == numPairs) {
							cout << "  ------------          |          ------------          |        "; vec[tact - 13].showVector(17); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);*/

						cout << "  такт 1  |        "; if (tact - 1 >= 0 && tact + 1 == numPairs) {
							vec[tact - 1].showVector(2); cout << "        |          ------------          |          ------------          | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 2  |        "; if (tact - 2 >= 0 && tact == numPairs) {
							vec[tact - 2].showVector(5);  cout << "        |          ------------          |          ------------          | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 3  |        "; if (tact - 3 >= 0 && tact - 1 == numPairs) {
							vec[tact - 2].showVector(2); cout << "        |        "; vec[tact - 3].showVector(8); cout << "        |        ";  cout << "   ------------     |        "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 4  |        "; if (tact - 4 >= 0 && tact - 2 == numPairs) {
							vec[tact - 3].showVector(5); cout << "        |        "; vec[tact - 4].showVector(11); cout << "        |        "; cout << "   ------------     |        "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 5  |        "; if (tact - 5 >= 0 && tact - 3 == numPairs) {
							cout << "   ------------     |        "; vec[tact - 4].showVector(8); cout << "        |        "; vec[tact - 5].showVector(14); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 6  |        "; if (tact - 6 >= 0 && tact - 4 == numPairs) {
							cout << "   ------------     |        "; vec[tact - 5].showVector(11); cout << "        |        "; vec[tact - 6].showVector(17); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 7  |        "; if (tact - 7 >= 0 && tact - 5 == numPairs) {
							cout << "  ------------          |          ------------          |        "; vec[tact - 6].showVector(14); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 8  |        "; if (tact - 8 >= 0 && tact - 6 == numPairs) {
							cout << "  ------------          |          ------------          |        "; vec[tact - 7].showVector(17); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);


						cout << "----------------------------------------------------------------------------------------------------------------" << endl;
					}
				}

				if (numPairs == 3) {
					if (tact == 0) vec[0].viewShowTable(10);
					else if (tact > 0) {
						/*cout << "  такт 1  |        "; if (tact - 1 >= 0 && tact + 2 == numPairs) {
							vec[tact - 1].showVector(0); cout << "        |          ------------          |          ------------          | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 2  |        "; if (tact - 2 >= 0 && tact + 1 == numPairs) {
							vec[tact - 2].showVector(3); cout << "        |        "; vec[tact - 2].showVector(1); cout << "        |          ------------          | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 3  |        "; if (tact - 3 >= 0 && tact == numPairs) {
							vec[tact - 3].showVector(6); cout << "        |        "; vec[tact - 3].showVector(4); cout << "        |        "; vec[tact - 3].showVector(2); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 4  |        "; if (tact - 4 >= 0 && tact - 1 == numPairs) {
							vec[tact - 4].showVector(9); cout << "        |        "; vec[tact - 4].showVector(7); cout << "        |        "; vec[tact - 4].showVector(5); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 5  |        "; if (tact - 5 >= 0 && tact - 2 == numPairs) {
							vec[tact - 5].showVector(12); cout << "        |        "; vec[tact - 5].showVector(10); cout << "        |        "; vec[tact - 5].showVector(8); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 6  |        "; if (tact - 6 >= 0 && tact - 3 == numPairs) {
							vec[tact - 6].showVector(15); cout << "        |        "; vec[tact - 6].showVector(13); cout << "        |        "; vec[tact - 6].showVector(11); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 7  |        "; if (tact - 7 >= 0 && tact - 4 == numPairs) {
							vec[tact - 6].showVector(0); cout << "        |        "; vec[tact - 7].showVector(16); cout << "        |        "; vec[tact - 7].showVector(14); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 8  |        "; if (tact - 8 >= 0 && tact - 5 == numPairs) {
							vec[tact - 7].showVector(3); cout << "        |        "; vec[tact - 7].showVector(1); cout << "        |        "; vec[tact - 8].showVector(17); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 9  |        "; if (tact - 9 >= 0 && tact - 6 == numPairs) {
							vec[tact - 8].showVector(6); cout << "        |        "; vec[tact - 8].showVector(4); cout << "        |        "; vec[tact - 8].showVector(2); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 10  |        "; if (tact - 10 >= 0 && tact - 7 == numPairs) {
							vec[tact - 9].showVector(9); cout << "        |        "; vec[tact - 9].showVector(7); cout << "        |        "; vec[tact - 9].showVector(5); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 11  |        "; if (tact - 11 >= 0 && tact - 8 == numPairs) {
							vec[tact - 10].showVector(12); cout << "        |        "; vec[tact - 10].showVector(10); cout << "        |        "; vec[tact - 10].showVector(8); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 12  |        "; if (tact - 12 >= 0 && tact - 9 == numPairs) {
							vec[tact - 11].showVector(15); cout << "        |        "; vec[tact - 11].showVector(13); cout << "        |        "; vec[tact - 11].showVector(11); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 13  |        "; if (tact - 13 >= 0 && tact - 10 == numPairs) {
							vec[tact - 11].showVector(0); cout << "        |        "; vec[tact - 12].showVector(16); cout << "        |        "; vec[tact - 12].showVector(14); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 14  |        "; if (tact - 14 >= 0 && tact - 11 == numPairs) {
							vec[tact - 12].showVector(3); cout << "        |        "; vec[tact - 12].showVector(1); cout << "        |        "; vec[tact - 13].showVector(17); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 15  |        "; if (tact - 15 >= 0 && tact - 12 == numPairs) {
							vec[tact - 13].showVector(6); cout << "        |        "; vec[tact - 13].showVector(4); cout << "        |        "; vec[tact - 13].showVector(2); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 16  |        "; if (tact - 16 >= 0 && tact - 13 == numPairs) {
							vec[tact - 14].showVector(9); cout << "        |        "; vec[tact - 14].showVector(7); cout << "        |        "; vec[tact - 14].showVector(5); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 17  |        "; if (tact - 17 >= 0 && tact - 14 == numPairs) {
							vec[tact - 15].showVector(12); cout << "        |        "; vec[tact - 15].showVector(10); cout << "        |        "; vec[tact - 15].showVector(8); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 18  |        "; if (tact - 18 >= 0 && tact - 15 == numPairs) {
							vec[tact - 16].showVector(15); cout << "        |        "; vec[tact - 16].showVector(13); cout << "        |        "; vec[tact - 16].showVector(11); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 19  |        "; if (tact - 19 >= 0 && tact - 16 == numPairs) {
							cout << "  ------------          |        ";  vec[tact - 17].showVector(16); cout << "        |        "; vec[tact - 17].showVector(14); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 20 |        "; if (tact - 20 >= 0 && tact - 17 == numPairs) {
							cout << "  ------------          |          ------------          |        "; vec[tact - 18].showVector(17); cout << "        | "; cout << endl;
						}
						vec[0].showTable(0);
						*/

						cout << "  такт 1  |        "; if (tact - 1 >= 0 && tact + 2 == numPairs) {
							vec[tact - 1].showVector(2); cout << "        |          ------------          |          ------------          | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 2  |        "; if (tact - 2 >= 0 && tact + 1 == numPairs) {
							vec[tact - 2].showVector(5); cout << "        |          ------------          |          ------------          | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 3  |        "; if (tact - 3 >= 0 && tact == numPairs) {
							vec[tact - 2].showVector(2); cout << "        |        "; vec[tact - 3].showVector(8); cout << "        |        ";  cout << "   ------------     |        "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 4  |        "; if (tact - 4 >= 0 && tact - 1 == numPairs) {
							vec[tact - 3].showVector(5); cout << "        |        "; vec[tact - 4].showVector(11); cout << "        |        ";  cout << "   ------------     |        "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 5  |        "; if (tact - 5 >= 0 && tact - 2 == numPairs) {
							vec[tact - 3].showVector(2); cout << "        |        "; vec[tact - 4].showVector(8); cout << "        |        ";  vec[tact - 5].showVector(14); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 6  |        "; if (tact - 6 >= 0 && tact - 3 == numPairs) {
							vec[tact - 4].showVector(5); cout << "        |        "; vec[tact - 5].showVector(11);  cout << "        |        ";  vec[tact - 6].showVector(17); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 7  |        "; if (tact - 7 >= 0 && tact - 4 == numPairs) {
							cout << "   ------------     |        "; vec[tact - 5].showVector(8); cout << "        |        "; vec[tact - 6].showVector(14); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 8  |        "; if (tact - 8 >= 0 && tact - 5 == numPairs) {
							cout << "   ------------     |        "; vec[tact - 6].showVector(11); cout << "        |        "; vec[tact - 7].showVector(17); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 9  |        "; if (tact - 9 >= 0 && tact - 6 == numPairs) {
							cout << "  ------------          |          ------------          |        "; vec[tact - 7].showVector(14); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "  такт 10  |        "; if (tact - 10 >= 0 && tact - 7 == numPairs) {
							cout << "  ------------          |          ------------          |        "; vec[tact - 8].showVector(17); cout << "        | "; cout << endl;
						}
						else vec[0].showTable(0);

						cout << "----------------------------------------------------------------------------------------------------------------" << endl;
					}
				}

				if (tact == (numPairs - 1) * 2 + 6) {
					cout << "Кол-во пар: " << numPairs << "\tКол-во тактов: " << tact;
					break;
				}
				tact++;
				cout << "\nСледующий такт - 1\nВсе такты - 2\n" << endl;
				while (true) {
					enter = _getch();
					if (enter == '1') break;
					if (enter == '2') {
						tact = (numPairs * 6 + 2);
						break;
					}
				}
			}
			review(vec);
		}
		if (choose == '2') { //итоговый результат
			review(vec);
		}
		if (choose == '3') { //выход из программы
			exit(0);
		}
}

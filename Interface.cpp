// ������������ ������ �1 �� ���������� ������
// ��������� ���������� ������ 821701
// ����� ��������� ������� �������������� � ��������� �.�
// ���������� ������ Interface

#include "Interface.h"

void Interface::printMenu()
{
}

void Interface::printPairs(int numPairs,int checkPairs,vector <Algor> vec)
{
	while (checkPairs != numPairs) {
		int first, second;
		cout << "\n" << checkPairs + 1 << " ����: " << "\n";
		while (true) {
			cout << "������� ������ �����: "; cin >> first;
			if (first >= 0 && first < 15) break;			//����� �������� ����� �������� ��� ������
			else cout << "����������� ����!" << endl;
		}
		while (true) {
			cout << "������� ������ �����: "; cin >> second;
			if (second >= 0 && second < 15) break;			//����� �������� ����� �������� ��� ������
			else cout << "����������� ����!" << endl;
		}
		Algor pair(first, second);
		vec.push_back(pair);
		checkPairs++;
	}
}

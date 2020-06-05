// ������������ ������ �1 �� ���������� ������
// ��������� ���������� ������ 821701
// ����� � ��������� ������� ������������� � ������� �������� ������� 
// ���������� �������,���������� � ���������� algorithm.h

//����������
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

	int firstNum; //������ �����
	int secondNum; //������ �����
	int result; //���������
	bool firstNumber[6]; //6-��������� �����
	bool secondNumber[6]; //6-��������� �����

public:
	void setVectValue();
	void additional(bool[12], int); 
	void rightShift(bool[12]); //����� ������ 
	void showVector(int index); //������������� ��������� �������
	void push(bool[12]); 
	void showNum(); //������� ���� 
	void viewShowTable(int num); 
	void showTable(int); //������� ���� ��� �������
	void setResult();
	void calculationResult(int numOfpair);  //��������� ���������� � �������� �������(���� ���)


	Algor(int firstNum, int secondNum) { //������� � �������� �������
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


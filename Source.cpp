#include <iostream>
#include <locale>
#include <bitset>
using namespace std;
int main()
{
	//�������: ���� �������� ����� ��������������� �����.
	//������������� ������� ���� ����� ����� �������, ����� ��� �������� ������������� ����� �����������.
	setlocale(LC_ALL, "");
	unsigned short int number;
	unsigned short temp;
	unsigned short mask = 0xFF;
	cout << "������� ������������� ����� ����� : \n";
	cin >> number;
	cout << number << endl; 
	temp = (mask & number);
	mask = 0x100;
	for (int i = 0; i < 8; i++)
	{

		number = (number & ~mask | (temp << 2 * i + 1) & mask);
		mask = mask << 1;
	}
	cout << number;
}
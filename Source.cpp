// P13121 Karina Baslyk
#include <iostream>
using namespace std;
int main() {
	/*Case1.���� ����� ����� � ��������� 1�7.������� ������ � �������� ���
	������, ��������������� ������� �����(1 � ������������, 2 � �������� � �.�.).
	*/
	/*
	int day;
	cin >> day;
	switch (day){
	case 1: cout << "�����������" << endl; break;
	case 2: cout << "�������" << endl; break;
	case 3: cout << "�����" << endl; break;
	case 4: cout << "�������" << endl; break;
	case 5: cout << "�������" << endl; break;
	case 6: cout << "�������" << endl; break;
	case 7: cout << "�����������" << endl; break;
	default: cout << "������" << endl;}
	*/
	/*
	int month;
	cin >> month;
	switch (month) {
	case 1:
	case 2:
	case 12: cout << "����\n"; break;
	case 3:
	case 4:
	case 5:cout << "�����\n"; break;
	case 6:
	case 7:
	case 8:cout << "����\n"; break;
	case 9:
	case 10:
	case 11:cout << "�����\n"; break;
	default:cout << "������\n" << endl;
	}
	*/
	/*
	int month;
	cin >> month;
	switch (month) {
	case 2:cout << 28 << endl; break;
	case 4:
	case 6:
	case 9:
	case 11:
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:cout << 31 << endl; break;
    */
	/*
	int a,b, c;
	double d;
	cin >> a >> b >> c;
	switch (a) {
	case 1:d = c + b; break;
	case 2:d = c - b; break;
	case 3:d = c * b; break;
	case 4:d =(double)c/b; break;
	}
	cout << d;
	*/
	/*Case6.������� ����� ������������� ��������� ������� : 1 � ��������,
	*2 � ��������, 3 � ����, 4 � ���������, 5 � ���������.��� �����
	*	������� �����(����� ����� � ��������� 1�5) � ����� ������� � ����
	*��������(������������ �����).����� ����� ������� � ������.
	*/
	/*
	int a;
	double  b,c;
	cin >> a >> b;
	switch (a) {
	case 1: c=b/10; cout << c<< "��������" ; break;
	case 2:	c=b*1000;  cout <<c<< "��������" ; break;
	case 3:	c= b; cout <<c << "����" ; break;
	case 4:	c=b /1000;  cout << c<< "��������" ; break;
	case 5:	c= b /100 ; cout << c<< "���������" ; break;
	default: cout <<"������" << endl;
	}
	cout << c;
	*/
	/*Case7. ������� ����� ������������� ��������� �������: 1 � ���������,
2 � ����������, 3 � �����, 4 � �����, 5 � �������. ��� ����� ������� ����� (����� ����� � ��������� 1�5) � ����� ���� � ���� ��������
(������������ �����). ����� ����� ���� � �����������.*/
	/*
	int a;
	double b, c;
	cin >> a >> b;
	switch (a) {
	case 1:	 c=b  ; cout <<c <<"���������"; break;
	case 2:	 c=b*1000000 ; cout << <<"����������"; break;
	case 3:	 c=b*1000  ; cout << <<"�����"; break;
	case 4:	 c=b/`1000  ; cout << <<"�����"; break;
	case 5:	 c=b/100 ; cout << <<"�������"; break;
	default: cout <<"������" << endl;
	}
	cout << c;
	*/
	/*Case10. ����� ����� ������������ � ������� ������������ (�ѻ � �����,
�ǻ � �����, �޻ � ��, �» � ������) � ��������� ��� �������� �������: 0 � ���������� ��������, 1 � ������� ������, ?1 � �������
�������. ��� ������ C � �������� ����������� ������ � ����� ����� N
� ��������� ��� �������. ������� ����������� ������ ����� ���������� ���������� �������.*/
char c;
int n;
switch (c) {
case '�':
	switch (n) {
	case -1: cout << '��' << endl; break;
	case 0: cout << '�' << endl; break;
	case 1:cout << '�' << endl; break;
	}
case '�':
	switch (n) {
	case -1: cout << '�' << endl; break;
	case 0: cout << '�' << endl; break;
	case 1:cout << '�' << endl; break;
	}
case '�':
	switch (n) {
	case -1: cout << '�' << endl; break;
	case 0: cout << '�' << endl; break;
	case 1:cout << '�' << endl; break;
	}
case '�':
	switch (n) {
	case -1: cout << '�' << endl; break;
	case 0: cout << '�' << endl; break;
	case 1:cout << '�' << endl; break;
	}
}
cout << c;
return 0;
}
// P13121 Karina Baslyk
#include <iostream>
using namespace std;
int main() {
	/*Case1.ƒано целое число в диапазоне 1Ц7.¬ывести строку Ч название дн€
	недели, соответствующее данному числу(1 Ч Ђпонедельникї, 2 Ч Ђвторникї и т.д.).
	*/
	/*
	int day;
	cin >> day;
	switch (day){
	case 1: cout << "понедельник" << endl; break;
	case 2: cout << "вторник" << endl; break;
	case 3: cout << "среда" << endl; break;
	case 4: cout << "четверг" << endl; break;
	case 5: cout << "п€тница" << endl; break;
	case 6: cout << "суббота" << endl; break;
	case 7: cout << "воскресенье" << endl; break;
	default: cout << "ошибка" << endl;}
	*/
	/*
	int month;
	cin >> month;
	switch (month) {
	case 1:
	case 2:
	case 12: cout << "зима\n"; break;
	case 3:
	case 4:
	case 5:cout << "весна\n"; break;
	case 6:
	case 7:
	case 8:cout << "лето\n"; break;
	case 9:
	case 10:
	case 11:cout << "осень\n"; break;
	default:cout << "ошибка\n" << endl;
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
	/*Case6.≈диницы длины пронумерованы следующим образом : 1 Ч дециметр,
	*2 Ч километр, 3 Ч метр, 4 Ч миллиметр, 5 Ч сантиметр.ƒан номер
	*	единицы длины(целое число в диапазоне 1Ц5) и длина отрезка в этих
	*единицах(вещественное число).Ќайти длину отрезка в метрах.
	*/
	/*
	int a;
	double  b,c;
	cin >> a >> b;
	switch (a) {
	case 1: c=b/10; cout << c<< "дециметр" ; break;
	case 2:	c=b*1000;  cout <<c<< "километр" ; break;
	case 3:	c= b; cout <<c << "метр" ; break;
	case 4:	c=b /1000;  cout << c<< "милиметр" ; break;
	case 5:	c= b /100 ; cout << c<< "сантиметр" ; break;
	default: cout <<"ошибка" << endl;
	}
	cout << c;
	*/
	/*Case7. ≈диницы массы пронумерованы следующим образом: 1 Ч килограмм,
2 Ч миллиграмм, 3 Ч грамм, 4 Ч тонна, 5 Ч центнер. ƒан номер единицы массы (целое число в диапазоне 1Ц5) и масса тела в этих единицах
(вещественное число). Ќайти массу тела в килограммах.*/
	/*
	int a;
	double b, c;
	cin >> a >> b;
	switch (a) {
	case 1:	 c=b  ; cout <<c <<"килограмм"; break;
	case 2:	 c=b*1000000 ; cout << <<"миллиграмм"; break;
	case 3:	 c=b*1000  ; cout << <<"грамм"; break;
	case 4:	 c=b/`1000  ; cout << <<"тонна"; break;
	case 5:	 c=b/100 ; cout << <<"центнер"; break;
	default: cout <<"ошибка" << endl;
	}
	cout << c;
	*/
	/*Case10. –обот может перемещатьс€ в четырех направлени€х (Ђ—ї Ч север,
Ђ«ї Ч запад, Ђёї Ч юг, Ђ¬ї Ч восток) и принимать три цифровые команды: 0 Ч продолжать движение, 1 Ч поворот налево, ?1 Ч поворот
направо. ƒан символ C Ч исходное направление робота и целое число N
Ч посланна€ ему команда. ¬ывести направление робота после выполнени€ полученной команды.*/
char c;
int n;
switch (c) {
case 'з':
	switch (n) {
	case -1: cout << 'юг' << endl; break;
	case 0: cout << 'з' << endl; break;
	case 1:cout << 'в' << endl; break;
	}
case 'ю':
	switch (n) {
	case -1: cout << 'в' << endl; break;
	case 0: cout << 'ю' << endl; break;
	case 1:cout << 'з' << endl; break;
	}
case 'с':
	switch (n) {
	case -1: cout << 'з' << endl; break;
	case 0: cout << 'с' << endl; break;
	case 1:cout << 'в' << endl; break;
	}
case 'в':
	switch (n) {
	case -1: cout << 'с' << endl; break;
	case 0: cout << 'в' << endl; break;
	case 1:cout << 'ю' << endl; break;
	}
}
cout << c;
return 0;
}
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

class Date
{
public:
	Date(){
		_year = 1900;
		_month = 1;
		_day = 1;
	}
	Date(int year, int month, int day){
		_year = year;
		_month = month;
		_day = day;
	}
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

	//为了从外部访问私有类 又不破坏私有类的安全性 在类里面构造函数访问私有类
	void SetDate(int year, int month, int day){
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year;
	int _month;
	int _day;


	//class Time
	//{
	//	hours
	//	min
	//	.....
	//}
	//Time _t;
	//默认生成的构造函数。
	//1.基本类型（也叫内置类型：int/char...）
	//2.自定义类型:class
};

int main(){
	Date d1;
	Date d2;

	//d1.SetDate(2019,3,18);
	//d2.SetDate(2019,3,19);

	d1.Print();
	d2.Print();
	system("pause");
	return 0;
}
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

	//Ϊ�˴��ⲿ����˽���� �ֲ��ƻ�˽����İ�ȫ�� �������湹�캯������˽����
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
	//Ĭ�����ɵĹ��캯����
	//1.�������ͣ�Ҳ���������ͣ�int/char...��
	//2.�Զ�������:class
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
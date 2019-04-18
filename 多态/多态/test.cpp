#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

class Person{
public:
	virtual void BuyTicket(){
		cout << "成人票 全价购买" << endl;
	}
};

class Student : public Person{
	virtual void BuyTicket(){
		cout << "学生票 半价购买" << endl;
	}
};

void Func(Person& p){
	p.BuyTicket();
}

int main(){
	Person p;
	Student s;

	Func(p);
	Func(s);

	system("pause");
	return 0;
}
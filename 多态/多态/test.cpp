#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

class Person{
public:
	virtual void BuyTicket(){
		cout << "����Ʊ ȫ�۹���" << endl;
	}
};

class Student : public Person{
	virtual void BuyTicket(){
		cout << "ѧ��Ʊ ��۹���" << endl;
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
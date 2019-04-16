#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

class Person {
public:    
	void Print()    
	{ 
		cout << "name:" << _name << endl;
		cout << "age:" << _age << endl; 
	} 
protected:    
	string _name = "peter"; // 姓名    
	int _age = 18;  // 年龄 
};


class Student : public Person
{
public:
	void fun1(){
		//在子类中可以访问
		_id = 123;
		//age不能访问
		//_age = 18;
	}
protected:
	int _stunum;
};

//protected:在类外无法访问，在子类内部可以访问
//private: 在类外和子类都无法访问


int main(){
	Stedent s;
	s._name = "hello";

	return 0;
}
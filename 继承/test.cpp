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
	string _name = "peter"; // ����    
	int _age = 18;  // ���� 
};


class Student : public Person
{
public:
	void fun1(){
		//�������п��Է���
		_id = 123;
		//age���ܷ���
		//_age = 18;
	}
protected:
	int _stunum;
};

//protected:�������޷����ʣ��������ڲ����Է���
//private: ����������඼�޷�����


int main(){
	Stedent s;
	s._name = "hello";

	return 0;
}
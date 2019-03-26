#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void test_string2()
{
	//把这个字符串转成整型
	string num("1234");

	//string::iterator是一个类型 it是一个迭代器类型的对象 begin是指向第一个位置的迭代器（看文档）
	string::iterator it = num.begin();
	//end是一个指向最后一个数据的下一个的迭代器（看文档）
	while (it != num.end())
	{
		cout << *it << " ";
		++it;
	}

	vector<int>::iterator vit = v.begin();
	while (vit != v.end)
	{
		cout << *vit << " ";
		++vit;
	}
	cout << endl;
}
void test_string1()
{
	//string的几种构造方式
	string s;
	string s1("hello");
	string s2(s1);
	string s3 = "world";

	s1 = s3;

	//此处的cout已经被重载成可以直接输出string类型
	cout << s << endl;
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
}
int main()
{
	system("pause");
	return 0;
}
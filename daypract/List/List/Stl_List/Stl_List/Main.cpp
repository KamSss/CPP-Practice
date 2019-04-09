#define _CRT_SECURE_NO_WARNINGS

#include "List.h"

void TestList()
{
	List<int> lst;
	lst.PushBack(1);
	lst.PushBack(2);
	lst.PushBack(3);
	lst.PushBack(4);

	auto lit = lst.begin();
	//当地址都等于头的时候 循环结束
	//!=和*还有++都是调用的我们重载后的
	while (lit != lst.end()){
		cout << *lit << " ";
		++lit;
	}
}

int main()
{
	TestList();

	system("pause");
	return 0;
}
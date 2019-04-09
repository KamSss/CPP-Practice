#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
//typedef int VDataType;

using namespace std;

//目标：使用模板，实现一个可以存储不同类型的 vector顺序表
template<class T>
class Vector
{
public:
	Vector()
		:_a(nullptr)
		, _capacity(0)
		, _size(0)
	{}

	~Vector()
	{
		if (_a)
		{
			//如果a为空 释放空间
			delete[] _a;
			_size = _capacity = 0;
		}
	}

	void PushBack(const T& value)
	{
		if (_size == _capacity)
		{
			//扩容不一定是二倍 但是二倍是1.减少开辟的次数 2.不会一次开辟太多 
			size_t newcapacity = _capacity == 0 ? 3 : _capacity;
			T* tmp = new T[newcapacity];
			if (_a)
			{
				memcpy(tmp, _a, sizeof(T)*_size);
				delete[] _a;
			}

			//_a为空的时候不需要拷
			_a = tmp;

			_capacity = newcapacity;
		}

		_a[_size] = value;
		_size++;
	}

	//如何打印Vector呢 可以写一个print打印函数 但是用起来不美观
	//我们把[]方括号重载 使用起来就像是一个数组[]的形式打印 也贴近于顺序表的数组本质含义
	T operator[](size_t pos)
	{
		return _a[pos];
	}

	size_t Size()
	{
		return _size;
	}
private:
	T* _a;
	size_t _size;
	size_t _capacity;
};

int main()
{
	//Vector v1;
	//Vector v2;

	Vector<int> v1;
	v1.PushBack(1);
	v1.PushBack(2);
	v1.PushBack(3);
	v1.PushBack(4);

	for (size_t i = 0; i < v1.Size(); ++i)
	{
		cout << v1[i] << " ";
		//实质是转换成cout << v1.operator[](i) << " ";
	}
	cout << endl;
	Vector<double> v2;

	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS

#include "my_queue"

template<class T ,class Container = deque<T>>
class Queue{
public:
	void Push(const T& x);
	void Pop();
	T& Front(){
		return _con.front();
	}
	size_t Size(){
		return _con.size();
	}
	bool Enpty(){
		_con.empty();
	}
	T& Back(){
		return _con.back();
	}
private:
	Container _con;
};

int main()
{
	Queue<int> q;
	q.Push(1);
	q.Push(2);
	q.Push(3);
	q.Push(4);
	q.Push(5);

	while (!q, Empty()){

	}
}
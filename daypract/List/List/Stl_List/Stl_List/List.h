#program once

#include <iostream>
using namespace std;

template <class T>
struct ListNode
{
	//List的构造函数
	ListNode(const T& val = T())
	: _next(nullptr)
	, _prev(nullptr)
	, _date(val)
	{}

	ListNode<T>* _next;
	ListNode<T>* _prev;
	T _date;
};

//迭代器
template <class T>
struct ListIterator
{
	typedef ListNode<T>* pNode;
	pNode _node;
	ListIterator(pNode node)
		:_node(node)
	{}

	//++iterator
	ListIterator<T>& operator++()
	{
		_node = _node->_next;
		return *this;
	}

	//iterator++
	//移动到下一个节点位置
	self operator(int){
		self tmp(*this);
		_node = _node->_next;
		return tmp;
	}

	self& operator++(){
		_node = _node->_next;
		return *this;
	}

	self operator--(int)
	{
		self tmp(*this);
		_node = _node->_prev;
		return tmp;
	}
	//*iterator 解引用
	T* operator*()
	{
		//返回的是这个结点的val(date)
		return _node->_date;
	}

	//iterator != l.end()
	//比较两个迭代器封装的节点是否一样
	bool operator!=(const self& it)
	{
		return _node != it._node;
	}
};

class List
{
public:
	typedef ListNode<T> Node;
	typedef Node* pNode;

	//构造函数
	List(const T& val = T())
		:_head(new Node(val))
	{
		_head->_next = _head;
		_head->_prev = _head;
	}

	//尾插
	void PushBack(const T& val)
	{
		pNode curNode = new Node(val);
		pNode prev = _head->_prev;
		prev->_next = curNode;
		curNode->_prev = prev;
		curNode->_next = _head;
		_head->next = curNode;
	}

	iterator begin()
	{
		return iterator(_head->_next);
	}

	iterator end()
	{
		return iterator(_head);
	}
};
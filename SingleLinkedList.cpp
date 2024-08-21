#include <iostream>
#include <string>

using namespace std;

template<typename T>
class List
{
	template<typename T>
	class Node
	{
	public:
		Node* pNext;
		T data;
		Node(T data=T(), Node* pNext=nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};
	Node<T>* head;
	int Size;
public:
	List();
	~List();
	int GetSize() { return Size; }
	void push_back(T data);
	T& operator[](const int index);
	void pop_front();
	void claer();
	void push_front(T data);
	void pop_back();
	void insert(T data, int index);
	void remoteAt(int index);

};

template<typename T>
List<T>::List()
{
	Size = 0;
	head = nullptr;
}
template<typename T>
List<T>::~List()
{
	claer();
}

template<typename T>
void List<T>::push_back(T data)
{
	if (head==nullptr)
	{
		head = new Node<T>(data);
	}
	else
	{
		Node<T>* current = this->head;
		while (current->pNext!=nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node<T>(data);
	}
	Size++;
}

template<typename T>
T& List<T>::operator[](const int index)
{
	int counter = 0;
	Node<T>* current = this->head;
	while (current!=nullptr)
	{
		if (counter==index)
		{
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}

template<typename T>
void List<T>::pop_front()
{
	Node<T>* temp = head;
	head = head->pNext;
	delete temp;
	Size--;
}

template<typename T>
void List<T>::claer()
{
	while (Size)
	{
		pop_front();
	}
}

template<typename T>
void List<T>::push_front(T data)
{
	head = new Node<T>(data, head);
	Size++;
}

template<typename T>
void List<T>::pop_back()
{
	remoteAt(Size - 1);
}

template<typename T>
void List<T>::insert(T data, int index)
{
	if (index==0)
	{
		push_front(data);
	}
	else
	{
		Node<T>* previous = this->head;
		for (int i = 0; i < index-1; i++)
		{
			previous = previous->pNext;
		}
		Node<T>* newNode = new Node<T>(data, previous->pNext);
		previous->pNext = newNode;
		Size++;
	}
	
}

template<typename T>
void List<T>::remoteAt(int index)
{
	if (index == 0)
	{
		pop_front();
	}
	else
	{
		Node<T>* previous = this->head;
		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}
		Node<T>* toDelete = previous->pNext;
		previous->pNext = toDelete->pNext;
		delete toDelete;
		Size--;
	}
}


int main()
{
	List<int>lst;
	int number;
	cin >> number;
	for (int i = 0; i < number; i++)
	{
		lst.push_front(rand() % 20);
	}
	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}
	lst.push_back(56);
	lst.insert(43, 5);
	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}
	
	return 0;
}






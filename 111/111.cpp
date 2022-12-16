#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


template<typename T>
class List {
public:
	List();
	~List();

	void push_back(T data);
	int GetSize() { return Size; }
	T& operator[](const int index);


private:

	template<typename T>

	class Node
	{
	public:
		Node* pNext;
		T data;
		Node(T data = T(), Node* pNext = nullptr) {
			this->data = data;
			this->pNext = pNext;
		}
	};
	int Size;
	Node<T>* head;
};

template<typename T>
List<T>::List() {
	Size = 0;
	head = nullptr;
}

template<typename T>
List<T>::~List() {
}

template<typename T>
void List<T>::push_back(T data)
{
	if (head == nullptr)
	{
		head = new Node<T>(data);
	}
	else
	{
		Node<T>* current = this->head;
		while (current->pNext != nullptr)
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
		if (counter == index)
		{
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}


int main() {
	ifstream in("in.txt");
	
	//List<string> lst;

	vector<List<string>> vec;

	string a, b, c, d, e;

	while (in >> a >> b >> c >> d >> e)
	{
		List<string>* lst = new List();
		lst.push_back(a);
		lst.push_back(b);
		lst.push_back(c);
		lst.push_back(d);
		lst.push_back(e);
		vec.push_back(lst);
	}


	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < vec[i].GetSize(); j++)
		{

		}
	}
}

#pragma once

template <typename T> // Class List was made to implement linked lists
class List {
public:
	List();
	~List();

	void Insert(T data, int index);		// Adding an element to the list by index
	void Add(T data);					// Function for adding an element to the end of the list
	void AddFirst(T data);				// Adding the first element to the list
	void Swap(int index1, int index2);	// Exchange of element values
	void Del(int index);				// Delete an element by its index
	void DelFirst();					// Delete the first item in the list
	void DelAll();						// Delete all items in the list
	int GetSize() { return Size; }		// A function that returns the size of the list

	T& operator[](const int index); // Overload of '[]'
private:
	template <typename T> // Calss that describe element of list
	class Node {
	public:
		Node* pNext;
		T data;

		Node(T data = T(), Node* pNext = nullptr) { 
			this->data = data;
			this->pNext = pNext;
		}
	};

	int Size;		// Size of the list
	Node<T>* head;  // A pointer to the first element of the list
};

template<typename T> 
List<T>::List() {
	Size = 0;
	head = nullptr;
}

template<typename T> 
List<T>::~List() {
	DelAll();
}

template<typename T> // Overload of '[]' 
T& List<T>::operator[](const int index)
{
	// In fact, the operator searches for an element under the entered index and returns the data contained in it 
	int count = 0;
	Node<T>* current = this->head;
	while (current != nullptr)
	{
		if (count == index) {
			return current->data;
		}
		current = current->pNext;
		count++;
	}
}

template<typename T> // Adding an element to the list by index
void List<T>::Insert(T data, int index) {
	if (index == 0) {
		AddFirst(data);
	}
	else {
		Node<T>* temp = this->head;

		for (int i = 0; i < index - 1; i++) {
			temp = temp->pNext;
		}

		Node<T>* newElem = new Node<T>(data, temp->pNext);
		temp->pNext = newElem;

		Size++;
	}
}

template<typename T> // Function for adding an element to the end of the list
void List<T>::Add(T data) {
	if (head == nullptr) {
		head = new Node<T>(data);
	}
	else {
		Node<T>* temp = this->head;
		while (temp->pNext != nullptr)
		{
			temp = temp->pNext;
		}
		temp->pNext = new Node<T>(data);
	}
	Size++; 
}

template<typename T> // Adding the first element to the list
void List<T>::AddFirst(T data) {
	head = new Node<T>(data, head);
	Size++;
}

template<typename T> // Exchange of element values
void List<T>::Swap(int index1, int index2) {
	Node<T>* previous1 = this->head;     // A pointer to the address of the previous element 1
	Node<T>* previous2 = this->head;	// A pointer to the address of the previous element 2
	Node<T>* temp;						// Temporary variable

	// If one of the elements is the first, then we will use this cycle: 
	if (index1 == 0)          
	{
		for (int i = 0; i < index2 - 1; i++)
		{
			previous2 = previous2->pNext;
		}

		// Pointers to searched items
		Node<T>* current1 = this->head;  
		Node<T>* current2 = previous2->pNext;
 
		previous2->pNext = current1;

		temp = current1->pNext;
		current1->pNext = current2->pNext;
		current2->pNext = temp;

		// Convert the second element to head
		this->head = current2;
		return;
	}

	for (int i = 0; i < index1 - 1; i++)
	{
		previous1 = previous1->pNext;

	}
	for (int i = 0; i < index2 - 1; i++)
	{
		previous2 = previous2->pNext;
	}

	// Pointers to searched items
	Node<T>* current1 = previous1->pNext;  
	Node<T>* current2 = previous2->pNext;

	temp = previous1->pNext;
	previous1->pNext = previous2->pNext;
	previous2->pNext = temp;

	temp = current1->pNext;
	current1->pNext = current2->pNext;
	current2->pNext = temp;

}

template<typename T> // Delete an element by its index
void List<T>::Del(int index) {
	if (index == 0) {
		DelFirst();
	}
	else {
		Node<T>* previous = this->head;
		Node<T>* temp;

		for (int i = 0; i < index - 1; i++) {
			previous = previous->pNext;
		}

		temp = previous;

		temp = temp->pNext;
		previous->pNext = temp->pNext;
		delete temp;
		Size--;
	}

}

template<typename T> // Delete the first item in the list
void List<T>::DelFirst() {
	Node<T>* temp = head;
	head = head->pNext;
	delete temp;
	Size--;
}

template<typename T> // Delete all items in the list
void List<T>::DelAll() {
	while (Size != 0)
	{
		DelFirst();
	}
}



#include "LinkedList.h"
#include <iostream>

using namespace std;

namespace practicecpp 
{
    template<class T>
    int LinkedList<T>::GetSize(){
        int size = 0;

        LLNode<T> node = *head;
        while (node)
        {
            node = *node.GetNext();
            size++;
        }
        return size;
    }

    template <class T>
	bool LinkedList<T>::IsEmpty() {
		return head == nullptr;
	}

    
	template <class T>
	T LinkedList<T>::GetValueByIndex(int index) {
        int currentIndex = 0;
        LLNode<T> *node = head;

		while(node) {
			if (currentIndex == index) {
				return node->GetData();
			}
			node = node->GetNext();
			currentIndex++;
		}

		cout << "Index out of bounds" << endl;
    	exit(EXIT_FAILURE);
	}

    template <class T>
	void LinkedList<T>::PushFront(T value) {
		LLNode<T> *newHead = new LLNode<T>(value);
        newHead->SetNext(head);
		head = newHead;
	}

    template <class T>
	T LinkedList<T>::PopFront() {
		if(head == nullptr){
			cout << "List empty" << endl;
    		exit(EXIT_FAILURE);
		}

		LLNode<T> *delNode = head;
		T retVal = head->GetData();
		head = head->GetNext();

		delete delNode;

		return retVal;
	}

	
	template <class T>
	void LinkedList<T>::PushBack(T value) {
		LLNode<T> newNode = new LLNode<T>(value);
		LLNode<T> *node = head;

		while(node->GetNext()) {
			node = node->GetNext();
		}

		node->SetData(newNode);
	}

	template <class T>
	T LinkedList<T>::PopBack() {
		LLNode<T> *node = head;

		while(node->GetNext()->GetNext()) {
			node = node->GetNext();
		}

		T retVal = node->GetNext()->GetData();
		node->SetNext(nullptr);

		return retVal;
	}

		template <class T>
	T LinkedList<T>::GetFirst() {
		return head->GetData();
	}

	template <class T>
	T LinkedList<T>::GetLast() {
		LLNode<T> *node = head;

		while(node->GetNext()) {
			node = node->GetNext();
		}

		return node->GetData();
	}

	template <class T>
	void LinkedList<T>::InsertAtIndex(int index, T value) {
		LLNode<T> newNode = LinkedListNode<T>(value);
		LLNode<T> *node = head;
		int i = 0;

		while(i < index && node->GetNext()) {
			node = node->GetNext();
			i++;
		}

		LLNode<T> *oldNext = node->GetNext();
		node->SetNext(newNode);
		newNode->SetNext(oldNext);
	}

	template <class T>
	void LinkedList<T>::RemoveAtIndex(int index) {
		LLNode<T> *node = head;
		int currentIndex = 0;

		while(node) {
			if (currentIndex == index - 1) {
				node->SetNext(node->GetNext()->GetNext());
				break;
			}
			node = node->GetNext();
			currentIndex++;
		}
	}

	template <class T>
	T LinkedList<T>::GetValueFromBack(int offset) {
		LLNode<T> *node = head;
		int size = this->GetSize();
		return this->GetValueByIndex(size - offset - 1);
	}

	template <class T>
	void LinkedList<T>::Reverse(){
		LLNode<T> *previous = nullptr;
		LLNode<T> *current = head;
		LLNode<T> *next;

		while (current)
		{
			next = current->GetNext();
			current->SetNext(previous);
			previous = current;
			current = next;
		}
		head = previous;
	}

	template <class T>
	void LinkedList<T>::RemoveValue(T value){
		LLNode<T> *node = head;
		LLNode<T> *previous = nullptr;
		while (node)
		{
			if(node->GetData() == value){
				if(previous == nullptr){
					head = node->GetNext();
				}
				else
				{
					previous->SetNext(node->GetNext());
				}
				delete node;
				continue;
			}
			previous = node;
			node = node->GetNext();
		}
	}
}
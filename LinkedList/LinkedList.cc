#include "LinkedList.h"

using namespace std;

namespace practicecpp 
{
    template<class T>
    int LinkedList<T>::GetSize(){
        int size = 0;

        ListNode<T> node = head;
        while (node)
        {
            node = node.next();
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

        ListNode<T> node = head;
		while(node) {
			if (currentIndex == index) {
				return node.GetData();
			}
			node = node.next();
			currentIndex++;
		}
		return nullptr;
	}

    template <class T>
	void LinkedList<T>::PushFront(T value) {
		ListNode<T> newHead = new LinkedListNode<T>(value);
		ListNode<T> oldHead = head;

		head = newHead;
		newHead.setNext(oldHead);
	}
}
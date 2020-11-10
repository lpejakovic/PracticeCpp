#include "ListNode.h"

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

namespace practicecpp 
{
    template <class T>
    class LinkedList
    {
        private:
            ListNode<T> *head;

        public:
            ListNode(T value);
            T GetData() { return data; }
            ListNode<T> *GetNext() { return next; }
            void SetData(T value) { data = value; }
            void SetNext(ListNode<T> *node){ next = node; }
    };
}

#endif /* LINKEDLIST_H_ */
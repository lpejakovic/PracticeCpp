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
            LinkedList();
    };
}

#endif /* LINKEDLIST_H_ */
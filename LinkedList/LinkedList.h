#include "LLNode.h"

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

namespace practicecpp 
{
    template <class T>
    class LinkedList
    {
        private:
            LLNode<T> *head;

        public:
            LinkedList():head(nullptr){}
            int GetSize();
            bool IsEmpty();
            T GetValueByIndex(int index);
            void PushFront(T value);
            T PopFront();
            void PushBack(T value);
            T PopBack();
            T GetFirst();
            T GetLast();
            void InsertAtIndex(int index, T value);
            void EraseAtIndex(int index);
            void GetFromBack(int offset);
            void Reverse();
            void RemoveValue(T value);
    };
}

#endif /* LINKEDLIST_H_ */
#ifndef LISTNODE_H_
#define LISTNODE_H_

namespace practicecpp 
{
    template <class T>
    class ListNode
    {
        private:
            T data;
            ListNode<T> *next;

        public:
            ListNode(T value) : next(nullptr), data(value) {}
            T GetData() { return data; }
            ListNode<T> *GetNext() { return next; }
            void SetData(T value) { data = value; }
            void SetNext(ListNode<T> *node) { next = node; }
    };
}

#endif /* LISTNODE_H_ */
#ifndef LLNODE_H_
#define LLNODE_H_

namespace practicecpp 
{
    template <class T>
    class LLNode
    {
        private:
            T data;
            LLNode<T> *next;

        public:
            LLNode(T value) : next(nullptr), data(value) {}
            T GetData() { return data; }
            LLNode<T> *GetNext() { return next; }
            void SetData(T value) { data = value; }
            void SetNext(LLNode<T> *node) { next = node; }
    };
}

#endif /* LLNODE_H_ */
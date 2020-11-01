#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_

namespace practicecpp 
{
    class DynamicArray
    {
        private:
            int capacity;
            int size;
            int *array;
            void Resize();

        public:
            DynamicArray();
            DynamicArray(int initCapacity);
            int GetSize();
            int GetCapacity();
            bool IsEmpty();
            int GetItemByIndex(int index);
            void Push(int item);
            void Insert(int index, int item);
            void Prepend(int item);
            int Pop();
            void Delete(int index);
            void Remove(int item);
            int Find(int item);
    };
}

#endif /* DYNAMICARRAY_H_ */
#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_
/*Declaration*/
class DynamicArray
{
    private:
        int capacity;
        int size;
        int *array;
        void Resize();

    public:
        DynamicArray();
        DynamicArray(int initSize);
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

/*Implementation*/
DynamicArray::DynamicArray(){
    DynamicArray::DynamicArray(4);
}

DynamicArray::DynamicArray(int initSize){
    DynamicArray::size = initSize;
}

void DynamicArray::Resize(){
    if(capacity == size){
        capacity = capacity*2;
    }
    if(capacity/4 >= size){
        capacity = capacity/2;
    }
}

int DynamicArray::GetSize(){
    return size;
}

int DynamicArray::GetCapacity(){
    return capacity;
}
bool DynamicArray::IsEmpty(){
    return false;
}
int DynamicArray::GetItemByIndex(int index){
    return 0;
}
void DynamicArray::Push(int item){

}
void DynamicArray::Insert(int index, int item){

}
void DynamicArray::Prepend(int item){

}
int DynamicArray::Pop(){
    return 0;
}
void DynamicArray::Delete(int index){
}
void DynamicArray::Remove(int item){
}
int DynamicArray::Find(int item){
    return 0;
}
#endif /* DYNAMICARRAY_H_ */
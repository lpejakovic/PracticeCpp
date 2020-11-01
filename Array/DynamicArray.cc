#include "DynamicArray.h"

namespace practicecpp 
{
    DynamicArray::DynamicArray(){
        DynamicArray::DynamicArray(4);
    }

    DynamicArray::DynamicArray(int initCapacity){
        capacity = initCapacity;
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
        return size == 0;
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
}
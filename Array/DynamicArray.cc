#include "DynamicArray.h"
#include <iostream>

using namespace std;

namespace practicecpp 
{
    DynamicArray::DynamicArray(){
        DynamicArray::DynamicArray(16);
    }

    DynamicArray::DynamicArray(int initCapacity){
        if (initCapacity < 1) {
            cout << "Reko sam NE MOŽE!!" << endl;
            exit(EXIT_FAILURE);
        }
        size = 0;
        capacity = initCapacity;
        array = unique_ptr<int[]>(new int[capacity]);
    }

    void DynamicArray::Resize(){
        int oldCapacity = capacity;
        if(capacity == size){
            capacity = capacity*2;
        }
        if(capacity/4 >= size){
            capacity = capacity/2;
        }
        if(oldCapacity != capacity){
            unique_ptr<int[] > newArray(new int[capacity]);
            for(int i = 0; i < size; i++)
                newArray[i] = array[i];
            array = move(newArray);
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
        if(index < 0 || index >= size){
            cout << "Index out of bounds. (" << index << ")" << endl;
            exit(EXIT_FAILURE);
        }
        return array[index];
    }

    void DynamicArray::Push(int item){
        Resize();
        
        array[size] = item;
        size++;
    }

    void DynamicArray::Insert(int index, int item){
        if(index < 0 || index >= size){
            cout << "Index out of bounds. (" << index << ")" << endl;
            exit(EXIT_FAILURE);
        }

        Resize();

        for(int i = size; i > index; i--){
            array[i] = array[i-1];
        }

        array[index] = item;
        size++;
    }

    void DynamicArray::Prepend(int item){
        Insert(0, item);
    }

    int DynamicArray::Pop(){
        if(size == 0){
            cout << "Nema više ničega. Try again." << endl;
            exit(EXIT_FAILURE);
        }

        size--;
        int item = array[size];

        Resize();

        return item;
    }

    void DynamicArray::Delete(int index){
        if(index < 0 || index >= size){
            cout << "Index out of bounds. (" << index << ")" << endl;
            exit(EXIT_FAILURE);
        }
        for(int i = index; i < size; i++){
            array[i] = array[i+1];
        }

        size--;

        Resize();
    }

    void DynamicArray::Remove(int item){
        for(int i = 0; i < size; i++){
            if(item == array[i]){
                Delete(i);
                i--;
            }
        }
    }

    int DynamicArray::Find(int item){
        int retVal = -1;
        for(int i = 0; i < size; i++){
            if(item == array[i]){
                retVal = i;
                break;
            }
        }

        return retVal;
    }
}
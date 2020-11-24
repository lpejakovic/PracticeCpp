#include "LinkedList.h"

using namespace std;

namespace practicecpp 
{
    template<class T>
    int LinkedList<T>::GetSize(){
        int size = 0;

        LinkedList<T> node = head;
        while (node)
        {
            node = node.next();
            size++;
        }
        return size;
    }
}
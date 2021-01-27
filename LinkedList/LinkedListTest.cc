#include "LinkedList.h"
#include "LinkedListTest.h"
#include <iostream>
#include <assert.h>

namespace practicecpp{
    void LinkedListTest::performTests(){
        testGetSize();
        testIsEmpty();
        testGetValueByIndex();
        testGetFirst();
        testGetLast();
        testInsert();
        testRemoveAtIndex();
        testGetFromBack();
        testReverse();
        testRemoveValue();
    }

    void LinkedListTest::testGetSize(){
        LinkedList<int> list;

        assert(list.GetSize() == 0);
        list.PushBack(1);
        assert(list.GetSize() == 1);
        list.PushFront(2);
        assert(list.GetSize() == 2);
        list.PopBack();
        assert(list.GetSize() == 1);
        list.PopFront();
        assert(list.GetSize() == 0);
    }

    void LinkedListTest::testIsEmpty(){
        LinkedList<int> list;

        assert(list.IsEmpty());
        list.PushFront(1);
        assert(!list.IsEmpty());
        list.PopBack();
        assert(list.IsEmpty());
    }

    void LinkedListTest::testGetValueByIndex(){
        LinkedList<int> list;

        list.PushFront(1);
        assert(list.GetValueByIndex(0) == 0);

        list.PushBack(2);
        list.PushBack(3);

        assert(list.GetValueByIndex(0) == 1);
        assert(list.GetValueByIndex(1) == 2);
        assert(list.GetValueByIndex(2) == 3);
    }

    void LinkedListTest::testGetFirst(){
        LinkedList<int> list;

        list.PushFront(1);
        list.PushFront(2);
        list.PushBack(3);
        list.PushBack(4);
        assert(list.GetFirst() == 3);
    }

    void LinkedListTest::testGetLast(){
        LinkedList<int> list;

        list.PushFront(1);
        list.PushBack(2);
        list.PushFront(3);
        list.PushBack(4);
        assert(list.GetFirst() == 4);
    }

    void LinkedListTest::testInsert(){
        LinkedList<int> list;

        list.PushFront(1);
        list.PushBack(2);
        list.PushFront(3);
        list.InsertAtIndex(2, 5);
        list.PushBack(4);
        list.InsertAtIndex(2, 6);
        list.InsertAtIndex(2, 7);
        
        assert(list.GetValueByIndex(2) == 7);
    }

    void LinkedListTest::testRemoveAtIndex(){
        LinkedList<int> list;

        list.PushFront(1);
        list.PushBack(2);
        list.PushFront(3);
        list.InsertAtIndex(2, 5);
        list.PushBack(4);
        list.InsertAtIndex(2, 6);
        list.InsertAtIndex(2, 7);

        list.RemoveAtIndex(2);
        assert(list.GetValueByIndex(2) == 6);

        list.RemoveAtIndex(2);
        assert(list.GetValueByIndex(2) == 5);
    }

    void LinkedListTest::testGetFromBack(){
        LinkedList<int> list;

        list.PushFront(1);
        list.PushBack(2);
        list.PushFront(3);
        list.InsertAtIndex(2, 5);
        list.PushBack(4);
        list.InsertAtIndex(2, 6);
        list.InsertAtIndex(2, 7);
        list.RemoveAtIndex(2);
        list.PopBack();
        list.Reverse();
        assert(list.GetFirst() == 2);
        assert(list.GetLast() == 3);
    }

    void LinkedListTest::testRemoveValue(){
        LinkedList<int> list;

        list.PushFront(1);
        list.PushFront(1);
        list.PushFront(1);
        list.PushFront(1);
        list.PushFront(1);
        list.PushFront(1);
        list.PushBack(2);
        list.RemoveValue(1);
        
        assert(list.GetFirst() == 2);
    }
}
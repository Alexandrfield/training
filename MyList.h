#ifndef MYLIST_H_ 
#define MYLIST_H_ 

#include "stdfx.h"
#include "NodeList.h"
#include "OutputOfRangeForList.h"
#include "MySmartPointer.h"

template <class T>
class MyList
{
    int sizeList_;
    MySmartPointer<NodeList<T>> head_;
    MySmartPointer<NodeList<T>> end_;

public:
    MyList();
   // MyList(const MyList& rhs);
    ~MyList();

    void pushBack(const T&  rhs);
    void pushFront(const T& rhs);
    void emplaceBack();
    void emplaceFront();

    void erase(int index);
    void insert(const T& rhs, int index);

    T at(int index);
    int getSize();
 
};

template <class T>
int MyList<T>::getSize()
{
    return sizeList_;
}

template <class T>
MyList<T>::MyList() :head_(nullptr), end_(nullptr)
{
    sizeList_ = 0;
}

template <class T>
MyList<T>::~MyList()
{
    MySmartPointer < NodeList<T>> tempPointer = head_;
    MySmartPointer < NodeList<T>> tempPointer_next;
    for (int i = 0; i < sizeList_; i++) {
        tempPointer_next = tempPointer->getNext();
        tempPointer->delNode();
        tempPointer = tempPointer_next;
    }
    head_ = nullptr;
    end_ = nullptr;
    sizeList_ = 0;
}

template <class T>
void MyList<T>::pushBack(const T& rhs)
{
    MySmartPointer<T> pointer(new T(rhs));
    MySmartPointer<NodeList<T>> temp;
    temp = new NodeList<T>(pointer, end_, nullptr);
    if (end_) {
        end_->setNext(temp);
    }
    end_ = temp;
    sizeList_++;
    
    if (sizeList_ == 1) {
        head_ = end_;
    }
}

template <class T>
void MyList<T>::pushFront(const T& rhs)
{
    MySmartPointer<T> pointer(new T(rhs));
    MySmartPointer<NodeList<T>> temp(new NodeList<T>(pointer, nullptr, head_));
    if (head_) {
        head_->setPrevious(temp);
    }
    head_ = temp;
    sizeList_++;

    if (sizeList_ == 1) {
        end_ = head_;
    }
}

template <class T>
void MyList<T>::emplaceBack()
{
    if (sizeList_ > 0) {
        end_ = end_->getPrevious();
        if (end_) {
            end_->setNextNULL();
        }
        else {
            end_ = nullptr;
            head_= nullptr;
        }
        sizeList_--;
    }
}

template <class T>
void MyList<T>::emplaceFront()
{
    if (sizeList_ > 0) {
        head_ = head_->getNext();
        if (head_) {
            head_->setPreviousNULL();
        }
        else {
            end_ = nullptr;
            head_= nullptr;
        }
        sizeList_--;
    }
}

template <class T>
void MyList<T>::erase(int index)
{
    if (index < 0 || index >= sizeList_) {
        throw OutputOfRangeForList();
    }


    if (index == 0) {
        emplaceFront();
        return;
    }
    if (index == (sizeList_ -1)) {
        emplaceBack();
        return;
    }

    MySmartPointer < NodeList<T>> tempPointer = head_;
    if (head_) {
        for (int i = 0; i < index; i++) {
            tempPointer = tempPointer->getNext();
        }

        MySmartPointer<NodeList<T>> next = tempPointer->getNext();
        MySmartPointer<NodeList<T>> previous = tempPointer->getPrevious();

       // next, previous  != nullptr  т.к. крайние случаи уже обработаны
        next->setPrevious(previous);
        previous->setNext(next);
        
        sizeList_--;
    }
}

template <class T>
void MyList<T>::insert(const T& rhs, int index)
{

    if (index < 0 || index >= sizeList_) {
         throw OutputOfRangeForList();
    }


    if (index == 0) {
        pushFront(rhs);
        return;
    }
    if (index == (sizeList_-1)) {
        pushBack(rhs);
        return;
    }

    MySmartPointer < NodeList<T>> tempPointer = head_;
    for (int i = 0; i < index; i++) {
        tempPointer = tempPointer->getNext();
    }
    MySmartPointer<NodeList<T>> previous = tempPointer->getPrevious();

    MySmartPointer<T> pointer(new T(rhs));
    MySmartPointer<NodeList<T>> ptr(new NodeList<T>(pointer, previous, tempPointer));
    tempPointer->setPrevious(ptr);
    previous->setNext(ptr);
    sizeList_++;
}

template <class T>
T MyList<T>::at(int index)
{
    if (index < 0 || index >= sizeList_) {
        throw OutputOfRangeForList();
    }

    MySmartPointer < NodeList<T>> tempPointer = head_;
    for (int i = 0; i < index; i++) {
        tempPointer = tempPointer->getNext();
    }

    return tempPointer->at();
}


#endif  // MYLIST_H_ 

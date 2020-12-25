#ifndef NODELIST_H_ 
#define NODELIST_H_ 

#include "MySmartPointer.h"

template <class T>
class NodeList
{
    MySmartPointer<NodeList<T>> next_;
    MySmartPointer<NodeList<T>> previous_;
    MySmartPointer<T> content_;

    NodeList();
public:

    NodeList( MySmartPointer<T>& content, MySmartPointer<NodeList<T>> previous, MySmartPointer<NodeList<T>> next);
    NodeList(NodeList<T>& rhs);
    MySmartPointer<NodeList<T>>& getNext();
    MySmartPointer<NodeList<T>>& getPrevious();

    void setNext(MySmartPointer<NodeList<T>>& next);
    void setPrevious(MySmartPointer<NodeList<T>>& previous);
    void setNextNULL();
    void setPreviousNULL();

    T& at();

    NodeList<T>& operator = (NodeList<T>& rhs);
};

template <class T>
NodeList<T>::NodeList( MySmartPointer<T>& content, MySmartPointer<NodeList<T>> previous, MySmartPointer<NodeList<T>> next) :
    content_(content), previous_(previous), next_(next) {}

template <class T>
NodeList<T>::NodeList(NodeList<T>& rhs)
{
    next_ = rhs.next_;
    previous_ = rhs.previous_;
    content_ = rhs.content_;
}

template <class T>
NodeList<T>& NodeList<T>:: operator = (NodeList<T>& rhs)
{
    if (this == &rhs) {
        return *this;
    }

    next_ = rhs.next_;
    previous_ = rhs.previous_;
    content_ = rhs.content_;

    return *this;
}

template <class T>
T&  NodeList<T>::at()
{
    return *content_;
}

template <class T>
MySmartPointer<NodeList<T>>& NodeList<T>::getNext()
{
    return next_;
}

template <class T>
MySmartPointer<NodeList<T>>& NodeList<T>::getPrevious()
{
    return previous_;
}

template <class T>
void NodeList<T>::setNext(MySmartPointer<NodeList<T>>& next)
{
    next_ = next;
}

template <class T>
void NodeList<T>::setPrevious(MySmartPointer<NodeList<T>>& previous)
{
    previous_ = previous;
}

template <class T>
void NodeList<T>::setNextNULL()
{
    next_ = nullptr;
}

template <class T>
void NodeList<T>::setPreviousNULL()
{
    previous_= nullptr;
}

#endif  // NODELIST_H_ 

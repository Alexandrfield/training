#ifndef MYSMARTPOINTER_H_ 
#define MYSMARTPOINTER_H_ 

template <class T>
class MySmartPointer
{
    T* pointer_;
    int* counterReference_;

    void eraseThisReferense();

public:
    MySmartPointer();
    MySmartPointer(const MySmartPointer<T>& rhs);
    MySmartPointer(std::nullptr_t rhs);
    MySmartPointer( T* rhs);
    ~MySmartPointer();

    T& operator *() const;
    T* operator ->() const;
    MySmartPointer<T>& operator = (MySmartPointer<T>& rhs);
    MySmartPointer<T>& operator = (std::nullptr_t rhs);
    MySmartPointer<T>& operator = (T* rhs);
    

    bool operator == (const MySmartPointer<T>& rhs) const;
    bool operator != (const MySmartPointer<T>& rhs) const;
    operator bool() const;

};


template <class T> 
MySmartPointer<T>::MySmartPointer(): pointer_(nullptr)
{
    counterReference_ = new int;
    (*counterReference_) = 1;
}

template <class T>
MySmartPointer<T>::MySmartPointer(const MySmartPointer<T>& rhs): pointer_(rhs.pointer_), counterReference_(rhs.counterReference_)
{
    (*counterReference_)++;
}

template <class T>
MySmartPointer<T>::MySmartPointer(std::nullptr_t rhs) : MySmartPointer() { }

template <class T>
MySmartPointer<T>::MySmartPointer(T* rhs): pointer_(rhs)
{
    counterReference_ = new int;
    (*counterReference_) = 1;

    rhs = nullptr;
}

template <class T>
void MySmartPointer<T>::eraseThisReferense()
{
    (*counterReference_)--;
    if ((*counterReference_) == 0) {

        delete pointer_;
        pointer_ = nullptr;
        delete counterReference_;
        counterReference_ = nullptr;
    }
}

template <class T>
MySmartPointer<T>::~MySmartPointer() 
{
    eraseThisReferense();
}

template <class T>
T& MySmartPointer<T>:: operator *() const
{
    return *pointer_;
}

template <class T>
T* MySmartPointer<T>::operator ->() const
{
    return pointer_;
}

template <class T>
MySmartPointer<T>& MySmartPointer<T>:: operator = (MySmartPointer<T>& rhs)
{
    if (this == &rhs) {
        return *this;
    }
    
    eraseThisReferense();
   
    pointer_ = rhs.pointer_;
    counterReference_ = rhs.counterReference_;

    (*counterReference_)++;

    return *this;
}

template <class T>
MySmartPointer<T>& MySmartPointer<T>:: operator = (T* rhs)
{ 
    eraseThisReferense();
    
    pointer_ = rhs;
    counterReference_ = new int(1);
    
    rhs = nullptr;
    return *this;
}

template <class T>
MySmartPointer<T>& MySmartPointer<T>:: operator = (std::nullptr_t )
{
    eraseThisReferense();
    
    pointer_ = nullptr;
    counterReference_ = new int(1);

    return *this;
}

template <class T>
bool MySmartPointer<T>::operator == (const MySmartPointer<T>& rhs) const
{
    return pointer_ == rhs.pointer_;
}

template <class T>
bool MySmartPointer<T>::operator != (const MySmartPointer<T>& rhs) const
{
    return pointer_ != rhs.pointer_;
}

template <class T>
MySmartPointer<T>::operator bool() const
{
    return pointer_ != nullptr;
}

//
//template <class Arg, class ... Args>
// makeMySmartPointer(const Arg& x, const Args& ... args)
//{
//    return countArgs(args...) + 1;
//}

#endif  // MYSMARTPOINTER_H_ 

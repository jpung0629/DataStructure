#include "singly_linked_list.h"


// 소멸자 헤드만 메모리 해제 시켜준다. 나머지는 Node객체들이 소멸하면서 해제한다.
template<typename T>
SinglyLinkedList<T>::~SinglyLinkedList() 


template<typename T>
Node<T>* SinglyLinkedList<T>::getHead() 

template<typename T>
Node<T>* SinglyLinkedList<T>::getTail() 


template<typename T>
Node<T>* SinglyLinkedList<T>::getCurr()

template<typename T>
int SinglyLinkedList<T>::getSize()

template<typename T>
Node<T>* SinglyLinkedList<T>::get(const int position)


template<typename T>
Node<T>* SinglyLinkedList<T>::find(const T data)


template<typename T>
void SinglyLinkedList<T>::add(const int position, const T newData)


template<typename T>
void SinglyLinkedList<T>::remove(const int position)


template<typename T>
void SinglyLinkedList<T>::travesal()

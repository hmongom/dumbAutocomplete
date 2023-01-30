#ifndef AC_INC_LINKEDLIST_H
#define AC_INC_LINKEDLIST_H

template <typename T> struct node_t {
    T key;
    node_t<T> *next;
}

template <typename T> class LinkedList<T> {
private:
    node_t<T> *head;
    node_t<T> *tail;
public:
    LinkedList();
    //~LinkedList();
    void insert(T key);
    // void remove(T key);
}

#include "LinkedList.cpp"

#endif
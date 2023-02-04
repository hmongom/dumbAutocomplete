#ifndef AC_INC_LINKEDLIST_H
#define AC_INC_LINKEDLIST_H

template <typename T, typename U> struct container_node_t {
    T key;
    container_node_t<T, U> *next;
    U *content;
};

template <typename T, typename U> class LinkedList {
private:
    container_node_t<T, U> *head;
    container_node_t<T, U> *tail;
public:
    LinkedList();
    ~LinkedList();
    void insert(T key, U *content);
    container_node_t<T, U>* getNode(T key);
    void remove(T key);
    bool isEmpty();
    bool keyExists(T key);
    container_node_t<T, U>* getHead();
};

#include "LinkedList.cpp"

#endif
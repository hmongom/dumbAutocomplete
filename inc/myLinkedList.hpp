#ifndef AC_INC_LINKEDLIST_H
#define AC_INC_LINKEDLIST_H

template <typename T> struct node_t {
    T key;
    node_t<T> *next;
};

template <typename T> class LinkedList {
private:
    node_t<T> *first;
    node_t<T> *last;
    node_t<T> newNode(T key);
public:
    LinkedList();
    ~LinkedList();
    bool find(T key);
    void insert(T key);
    void remove(T key);
};

#endif
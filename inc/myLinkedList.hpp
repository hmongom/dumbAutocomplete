#ifndef AC_INC_LINKEDLIST_H
#define AC_INC_LINKEDLIST_H

template <typename T>
struct node_t
{
    T key;
    node_t *next;
}

template <typename T>
class LinkedList
{
private:
    node_t<T> *first;
    node_t<T> *last;
    node_t<T> newNode(T key);
    bool find(T key);
public:
    LinkedList::LinkedList();
    LinkedList::~LinkedList();

    void insert(T key);
    void delete(T key);
}

#endif
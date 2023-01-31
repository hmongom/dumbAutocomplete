#include "LinkedList.hpp"

template <typename T>
LinkedList<T>::LinkedList() {
    head = NULL;
}

template <typename T>
LinkedList<T>::~LinkedList() {
    node_t<T> *tmp = head;
    node_t<T> *toRemove;

    while (tmp != NULL) {
        toRemove = tmp;
        tmp = tmp->next;
        delete(toRemove);
    }
}

template <typename T>
void LinkedList<T>::insert(T key) {
    node_t<T> *newNode = new node_t<T>;
    newNode->key = key;
    newNode->next = head;
    head = newNode;
}

template <typename T>
node_t<T>* LinkedList<T>::getNode(T key) {
    node_t<T> *tmp = head;

    while (tmp != NULL) {
        if (tmp->key == key) {
            return tmp;
        }
        else {
            tmp = tmp->next;
        }
    }

    return NULL;
}

template <typename T>
void LinkedList<T>::remove(T key) {
    node_t<T> *tmp = head;
    node_t<T> *prev = tmp;

    while (tmp != NULL) {
        if (tmp->key == key) {
            if (head == tmp) {
                head = tmp->next;
                delete(tmp);
            }
            else {
                prev->next = tmp->next;
                delete(tmp);        
            }
            break;
        }
        else {
            prev = tmp;
            tmp = tmp->next;
        }
    }
}
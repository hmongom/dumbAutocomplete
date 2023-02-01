#include "LinkedList.hpp"

template <typename T, typename U>
LinkedList<T, U>::LinkedList() {
    head = NULL;
}

template <typename T, typename U>
LinkedList<T, U>::~LinkedList() {
    container_node_t<T, U> *tmp = head;
    container_node_t<T, U> *toRemove;

    while (tmp != NULL) {
        toRemove = tmp;
        tmp = tmp->next;
        delete(toRemove);
    }
}

template <typename T, typename U>
void LinkedList<T, U>::insert(T key) {
    container_node_t<T, U> *newNode = new container_node_t<T, U>;
    newNode->key = key;
    newNode->next = head;
    newNode->content = NULL;
    head = newNode;
}

template <typename T, typename U>
container_node_t<T, U>* LinkedList<T, U>::getNode(T key) {
    container_node_t<T, U> *tmp = head;

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

template <typename T, typename U>
void LinkedList<T, U>::remove(T key) {
    container_node_t<T, U> *tmp = head;
    container_node_t<T, U> *prev = tmp;

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
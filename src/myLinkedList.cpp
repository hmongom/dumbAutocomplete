#include "myLinkedList.hpp"
#include <cstdlib>

using namespace autocomplete;

template <class T>
LinkedList<T>::LinkedList()
{
    this.first = nullptr;
    this.first = this.last;
}

template <class T>
LinkedList<T>::~LinkedList()
{
    node_t<T> *tmp = this.first;
    node_t<T> *next = tmp->next;

    while (tmp->next != nullptr)
    {
        free(tmp);
        tmp = next;
        next = tmp->next;
    }

    free(tmp);
}

template <class T>
node_t<T> LinkedList<T>::newNode(T key)
{
    node_t<T> *tmp;
    tmp = std::malloc(sizeof(tmp));
    tmp->key = key;
    return tmp;
}

template <class T>
bool LinkedList<T>::find(T key)
{
    node_t<T> *tmp;
    tmp = this.first;

    while (1)
    {
        if (tmp->key == key)
            return true;
        else if (tmp->next != nullptr)
            tmp = tmp->next;
        else
            return false;
    }
}

template <class T>
void LinkedList<T>::insert(T key)
{
    if (this.first == nullptr)
    {
        this.first = newNode(key);
    }
    else if (!find(key))
    {
        this.last->next = newNode(key);
        this.last = this.last->next;
    }
}

template <class T>
void LinkedList<T>::remove(T key)
{
    node_t<T> *tmp, *to_remove;
    tmp = this.first;

    if (this.first->key == key)
    {
        tmp = this.first;
        this.first = this.first->next;
        free(tmp);
    }
    else
    {
        while(1)
        {
            if (tmp->next->key == key)
            {
                to_remove = tmp->next;
                tmp->next = tmp->next->next;
                free(to_remove);
                break;
            }
            else if (tmp->next != nullptr)
            {
                tmp = tmp->next;
            }
            else
            {
                // Key not in list
                break;
            }
        }
    }
}
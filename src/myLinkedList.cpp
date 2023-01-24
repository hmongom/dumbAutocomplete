#include "myLinkedList.hpp"

LinkedList::LinkedList()
{
    this.first = NULL;
    this.first = this.last;
}

LinkedList::~LinkedList()
{
    node_t *tmp = this.first;
    node_t *next = tmp->next;

    while(size > 0)
    {
        free(temp);
        tmp = next;
        next = tmp->next;
        size--;
    }
}

node_t<T> LinkedList::newNode(T key)
{
    node_t *tmp;
    tmp = malloc(sizeof(node_t<T>));
    tmp->key = key;
    return tmp;
}

bool LinkedList::find(T key)
{
    node_t *tmp;
    tmp = this.first;

    while (1)
    {
        if (tmp->key == key)
            return true;
        else
            tmp = tmp->next;
    }
}

void LinkedList::insert(T key)
{
    if (this.first == NULL)
    {
        this.first = newNode(key)
    }
    else if (!find(key))
    {
        this.last->next = newNode(key);
        this.last = this.last->next;
    }
}

void LinkedList::delete(T key)
{
    node_t *tmp, *to_remove;
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
            else if (tmp->next != NULL)
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
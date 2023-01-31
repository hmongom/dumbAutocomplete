#include <iostream>
#include "LinkedList.hpp"

int main() {
    // ************ TEST CONSTRUCTOR ************
    LinkedList<int> *list = new LinkedList<int>();

    // ************ TEST INSERTION ************
    list->insert(1);
    list->insert(2);
    list->insert(3);
    list->insert(4);
    list->insert(5);
    list->insert(6);

    // ************ TEST GET NODE ************
    node_t<int> *tmp = new node_t<int>();
    if ((tmp = list->getNode(3)) != NULL) {
        std::cout << "Found node with key " << tmp->key << std::endl;
    }
    else {
        std::cout << "Node not found" << std::endl;
    }

    // ************ TEST REMOVE NODE ************
    list->remove(3);
    if ((tmp = list->getNode(3)) != NULL) {
        std::cout << "Found node with key " << tmp->key << std::endl;
    }
    else {
        std::cout << "Node not found" << std::endl;
    }

    // ************ TEST DESTRUTOR ************
    delete(list);
}
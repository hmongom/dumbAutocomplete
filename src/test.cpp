#include <iostream>
#include "LinkedList.hpp"
#include "Trie.hpp"

void testLinkedList();
void testTrie();

int main() {
    //testLinkedList();
    testTrie();
}

void testLinkedList() {
    // ************ TEST CONSTRUCTOR ************
    LinkedList<int, int> *list = new LinkedList<int, int>();

    // ************ TEST INSERTION ************
    list->insert(1);
    list->insert(2);
    list->insert(3);
    list->insert(4);
    list->insert(5);
    list->insert(6);

    // ************ TEST GET NODE ************
    container_node_t<int, int> *tmp = new container_node_t<int, int>();
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

void testTrie() {

}
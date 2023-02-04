#include <iostream>
#include "LinkedList.hpp"
#include "Trie.hpp"

void testLinkedList();
void testTrie();

int main() {
    //testLinkedList();
    //testTrie();
}

void testLinkedList() {
    // ************ TEST CONSTRUCTOR ************
    LinkedList<int, std::string> *list = new LinkedList<int, std::string>();

    // ************ TEST IS EMPTY ************
    if (list->isEmpty())
        std::cout << "List empty\n"; 

    // ************ TEST INSERTION ************
    list->insert(1, new std::string("one"));
    list->insert(2, new std::string("two"));
    list->insert(3, new std::string("three"));
    list->insert(4, new std::string("four"));
    list->insert(5, new std::string("five"));
    list->insert(6, new std::string("six"));

    // ************ TEST SEARCH KEY ************
    if (list->keyExists(3))
        std::cout << "Key found \n";
    else
        std::cout << "Key not found \n";

    // ************ TEST GET NODE ************
    container_node_t<int, std::string> *tmp = new container_node_t<int, std::string>();

    if ((tmp = list->getNode(3)) != NULL)
        std::cout << "Found node with key " << tmp->key << "\n";
    else
        std::cout << "Node not found" << "\n";

    // ************ TEST REMOVE NODE ************
    list->remove(3);

    if ((tmp = list->getNode(3)) != NULL)
        std::cout << "Found node with key " << tmp->key << std::endl;
    else
        std::cout << "Node not found" << std::endl;

    // ************ TEST DESTRUTOR ************
    delete(list);
}

void testTrie() {
    Trie *trie = new Trie();

    // ************ TEST WORD INSERT ************
    trie->insertWord("canario");
    trie->insertWord("canela");

    // ************ TEST GET WORD ************
    std::cout << *trie->getWord("c") << "\n";
    std::cout << *trie->getWord("cana") << "\n";
    std::cout << *trie->getWord("c") << "\n";
    std::cout << *trie->getWord("cane") << "\n";
    std::cout << *trie->getWord("la") << "\n";
    std::cout << *trie->getWord("can") << "\n" << std::endl;
}
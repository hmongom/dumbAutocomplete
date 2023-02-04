#include "Trie.hpp"

Trie::Trie() : root{new LinkedList<char, Trie>()} {}

Trie::~Trie() {
}

void Trie::insertWord(string word) {
    Trie *tmp = this;
    
    for (auto &character : word) {
        if (tmp->root->keyExists(character))
            tmp = tmp->root->getNode(character)->content;
        else {
            tmp->root->insert(character, new Trie());
            tmp = tmp->root->getNode(character)->content;
        }
    }
}

string* Trie::getWord(string prefix) {
    Trie *tmp = this;
    container_node_t<char, Trie> *node;
    string *word = new string();

    for (auto &character : prefix) {
        if ((node = tmp->root->getNode(character)) == NULL)
            return new string(prefix);
        else {
            word->push_back(node->key);
            tmp = node->content;
        }
    }

    while (!tmp->root->isEmpty()) {
        node = tmp->root->getHead();
        word->push_back(node->key);
        tmp = node->content;
    }
        
    return word;
}
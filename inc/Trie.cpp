#include "Trie.hpp"

Trie::Trie() {
    root = new LinkedList<char, Trie>();
}

Trie::~Trie() {
}

void Trie::insertWord(string word) {
    Trie *tmp = this;
    
    for (auto &character : word) {
        if (tmp->root->findKey(character))
            tmp = tmp->root->getNode(character)->content;
        else {
            tmp->root->insert(character, new Trie());
            tmp = tmp->root->getNode(character)->content;
        }
    }
}
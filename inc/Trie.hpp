#ifndef AC_INC_TRIE_H
#define AC_INC_TRIE_H

#include <string>
#include "LinkedList.hpp"

using namespace std;

class Trie {
private:
    LinkedList<char, Trie> *root;
public:
    Trie();
    ~Trie();
    void insertWord(string word);
};

#include "Trie.cpp"

#endif
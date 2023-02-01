#ifndef AC_INC_TRIE_H
#define AC_INC_TRIE_H

#include <string>
#include "LinkedList.hpp"

using namespace std;

class Trie {
private:
    LinkedList<char, string> *root;

public:
    void addWord(string);
    string completeWord(string);
};

#include "Trie.cpp"

#endif
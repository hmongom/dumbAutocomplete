#include <iostream>
#include <string>
#include <stdlib.h>
#include "Trie.hpp"

using namespace std;

int main() {
    Trie *trie = new Trie();
    char command;
    string word;
    string helpDialog  ("- To insert a word, enter {a}\n"
                        "- To test the autocomplete, enter {c}\n"
                        "- To show this dialog again, enter {h}\n"
                        "- To quit this interface, enter {q}\n");

    cout << helpDialog;

    // Main loop
    while (1) {    
        cout << ">> "; 
        cin >> command;

        switch (command) {
        case 'a':
            cout << "Enter the word to add:\n";
            cin >> word;
            trie->insertWord(word);
            cout << "(Word added)\n";
            break;
        case 'c':
            cout << "Enter the prefix of the word:\n";
            cin >> word;
            cout << *trie->getWord(word) << "\n";
            break;
        case 'h':
            cout << helpDialog;
            break;
        case 'q':
            cout << "Sad to see you go :(" << endl;
            exit(EXIT_SUCCESS);
        }
    }
}
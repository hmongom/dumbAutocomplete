#include <iostream>
#include "myLinkedList.hpp"

using namespace autocomplete;

int main() {
    LinkedList<int> myList{};
    myList.insert(1);
    myList.insert(2);
    myList.insert(5);
    myList.insert(3);

    if (myList.find(2)) {
        std::cout << "2 found\n"; 
    }
    
    myList.remove(2);

    if (!myList.find(2)) {
        std::cout << "2 not found" << std::endl;
    }

    return 0;
}
#include <iostream>

#include "TwoThreeTree.h"

int main() {
    std::cout << "Hello, World!" << std::endl;


    //1 6 2 3 7 4 5
    TwoThreeTree *tree = new TwoThreeTree();

    Node *node1 = new Node(1);
    Node *node2 = new Node(6);
    tree->add(node1);
    tree->add(node2);


    return 0;
}
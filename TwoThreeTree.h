//
// Created by client on 3/3/22.
//

#ifndef UNTITLED1_TWOTHREETREE_H
#define UNTITLED1_TWOTHREETREE_H


class Node {

public:
    Node *left;
    Node *right;
    Node *center;
    int value;

    Node(int v) {
        value = v;
        left = nullptr;
        right = nullptr;
        center = nullptr;
    }
};

class TwoThreeTree {

public:
    void add(Node *node);

private:

    Node *root = nullptr;

};


#endif //UNTITLED1_TWOTHREETREE_H

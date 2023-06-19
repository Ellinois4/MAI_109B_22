#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>

template <typename T>
class BinTree;

template <typename T>
class Node {
    friend class BinTree<T>;
private:
    T data;
    Node<T>* leftNode = nullptr;
    Node<T>* rightNode = nullptr;

    Node(const T&);
};

#include "../src/Node.cpp"

#endif
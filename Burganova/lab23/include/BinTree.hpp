#ifndef BINTREE_HPP
#define BINTREE_HPP

#include "Node.hpp"

template <typename T>
class BinTree {
private:
    Node<T>* root = nullptr; 
    void clear(Node<T>*);

public:
    BinTree() = default;
    BinTree(const T&);
    ~BinTree();
    Node<T>* getRoot(); 
    void insert(const T&, Node<T>* node); 
    void bypass_check(Node<T>*, int, int, bool&);
    void all_leafs_in_range(int, int);
};

#include "../src/BinTree.cpp"

#endif
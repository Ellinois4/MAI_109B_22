#include "../include/BinTree.hpp"
#include "../include/Node.hpp"

template <typename T>
BinTree<T>::BinTree(const T& data) {
    root = new Node<T>(data);
}

template <typename T>
void BinTree<T>::insert(const T& data, Node<T>* node) {
    if (data < node->data) {
        if (node->leftNode == nullptr) {
            node->leftNode = new Node<T>(data);
        } else {
            insert(data, node->leftNode);
        }
    }
    if (data > node->data) {
        if (node->rightNode == nullptr) {
            node->rightNode = new Node<T>(data);
        } else {
            insert(data, node->rightNode);
        }
    }
    return;
}

template <typename T>
void BinTree<T>::clear(Node<T>* node) {
    if (node == nullptr) {
        return;
    }

    clear(node->leftNode); 
    clear(node->rightNode);
    delete node;
}

template <typename T>
BinTree<T>::~BinTree() {
    clear(root);
}

template <typename T>
Node<T>* BinTree<T>::getRoot() {
    return root;
}

template <typename T>
void BinTree<T>::bypass_check(Node<T>* node, int begin, int end, bool& flag) {
    if (node == nullptr) {
        return;
    }

    bypass_check(node->leftNode, begin, end, flag);
    if ((node->leftNode == nullptr)&& (node->rightNode == nullptr) && !((begin <= node->data) && (node->data <= end))) {
        flag = false;
    }
    bypass_check(node->rightNode, begin, end, flag);
}

template <typename T>
void BinTree<T>::all_leafs_in_range(int begin, int end) {
    bool flag = true;
    bypass_check(root, begin, end, flag);
    if (flag) {
        std::cout << "All leafs of the tree are in range" << '\n';
    } else {
        std::cout << "No/not all leafs of the tree are in range" << '\n';
    }
}

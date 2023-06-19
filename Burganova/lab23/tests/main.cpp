#include <iostream>
#include "../include/BinTree.hpp"

int main() {
    BinTree<int> tree(40);

    tree.insert(15, tree.getRoot());
    tree.insert(6, tree.getRoot());
    tree.insert(20, tree.getRoot());
    tree.insert(50, tree.getRoot());
    tree.insert(45, tree.getRoot());
    tree.insert(52, tree.getRoot());

    tree.all_leafs_in_range(5, 60);

}
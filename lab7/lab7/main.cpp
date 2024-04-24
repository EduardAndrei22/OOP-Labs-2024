#include <iostream>
#include "tree.h"
template class Tree<int>;
template class TreeNode<int>;

int main() {
    Tree<int> tree;
    TreeNode<int>* root = tree.add_node(nullptr, 10); // Adding root node
    TreeNode<int>* child1 = tree.add_node(root, 20); // Adding child node
    TreeNode<int>* child2 = tree.add_node(root, 30); // Adding another child node
    TreeNode<int>* grandchild = tree.add_node(child1, 40); // Adding grandchild node

    std::cout << "Number of children of root: " << tree.count(root) << std::endl; // Output: 2

    return 0;
}

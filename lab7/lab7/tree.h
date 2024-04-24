#ifndef TREE_H
#define TREE_H

template <typename T>
class TreeNode {
private:
    T value;
    TreeNode<T>* parent;
    TreeNode<T>* children[10]; // Maximum 10 children, adjust as needed
    int num_children;

public:
    TreeNode(T val, TreeNode<T>* par = nullptr);
    TreeNode<T>* add_child(T val);
    TreeNode<T>* get_parent() const;
    void delete_node();
    TreeNode<T>* find(const T& val);
    void insert(T val, int index);
    void sort(bool (*compare)(T&, T&) = nullptr);
    int count() const;
};

template <typename T>
class Tree {
private:
    TreeNode<T>* root;

public:
    Tree();
    ~Tree();
    TreeNode<T>* add_node(TreeNode<T>* parent, T value);
    TreeNode<T>* get_node(TreeNode<T>* parent = nullptr) const;
    int count(TreeNode<T>* node = nullptr) const;
    // Other methods as per your requirements
};

#endif // TREE_H

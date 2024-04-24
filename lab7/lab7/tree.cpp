#include "tree.h"

template<typename T>
TreeNode<T>::TreeNode(T val, TreeNode<T>* par) : value(val), parent(par), num_children(0) {
    for (int i = 0; i < 10; ++i)
        children[i] = nullptr;
}

template<typename T>
TreeNode<T>* TreeNode<T>::add_child(T val) {
    if (num_children < 10) {
        children[num_children] = new TreeNode<T>(val, this);
        num_children++;
        return children[num_children - 1];
    }
    return nullptr; // Return nullptr if maximum children limit is reached
}

template<typename T>
TreeNode<T>* TreeNode<T>::get_parent() const {
    return parent;
}

template<typename T>
void TreeNode<T>::delete_node() {
    if (parent != nullptr) {
        for (int i = 0; i < parent->num_children; ++i) {
            if (parent->children[i] == this) {
                delete parent->children[i];
                parent->children[i] = nullptr;
                for (int j = i; j < parent->num_children - 1; ++j) {
                    parent->children[j] = parent->children[j + 1];
                }
                parent->num_children--;
                break;
            }
        }
        delete this;
    }
}

template<typename T>
TreeNode<T>* TreeNode<T>::find(const T& val) {
    if (value == val)
        return this;

    for (int i = 0; i < num_children; ++i) {
        TreeNode<T>* found = children[i]->find(val);
        if (found != nullptr)
            return found;
    }

    return nullptr;
}

template<typename T>
void TreeNode<T>::insert(T val, int index) {
    if (index >= 0 && index <= num_children) {
        for (int i = num_children; i > index; --i) {
            children[i] = children[i - 1];
        }
        children[index] = new TreeNode<T>(val, this);
        num_children++;
    }
}

template<typename T>
void TreeNode<T>::sort(bool (*compare)(T&, T&)) {
    if (compare != nullptr) {
        for (int i = 0; i < num_children - 1; ++i) {
            for (int j = 0; j < num_children - i - 1; ++j) {
                if (compare(children[j]->value, children[j + 1]->value)) {
                    TreeNode<T>* temp = children[j];
                    children[j] = children[j + 1];
                    children[j + 1] = temp;
                }
            }
        }
    }
    else {
        for (int i = 0; i < num_children - 1; ++i) {
            for (int j = 0; j < num_children - i - 1; ++j) {
                if (children[j]->value > children[j + 1]->value) {
                    TreeNode<T>* temp = children[j];
                    children[j] = children[j + 1];
                    children[j + 1] = temp;
                }
            }
        }
    }
}

template<typename T>
int TreeNode<T>::count() const {
    int total_count = 0;
    for (int i = 0; i < num_children; ++i) {
        total_count += children[i]->count();
    }
    return total_count + num_children;
}

template<typename T>
Tree<T>::Tree() : root(nullptr) {}

template<typename T>
Tree<T>::~Tree() {
    delete root;
}

template<typename T>
TreeNode<T>* Tree<T>::add_node(TreeNode<T>* parent, T value) {
    TreeNode<T>* newNode = new TreeNode<T>(value, parent);
    if (parent == nullptr && root == nullptr) {
        root = newNode;
    }
    else if (parent != nullptr) {
        parent->add_child(value);
    }
    return newNode;
}

template<typename T>
TreeNode<T>* Tree<T>::get_node(TreeNode<T>* parent) const {
    if (parent == nullptr)
        return root;
    return parent;
}

template<typename T>
int Tree<T>::count(TreeNode<T>* node) const {
    if (node == nullptr)
        return root->count();
    return node->count();
}

#include<iostream>
using namespace std;
#include "tree.h"

int main()
{

    node<int> root(1);
    node<int> node1(2);
    node<int> node2(3);
    node<int> node3(4);
    node<int> node4(5);
    node<int> node5(6);
    node<int> node6(7);

    root.add_node(root);
    node1.add_node(root);
    node2.add_node(root);
    node3.add_node(root);
    node4.add_node(node1);
    node5.add_node(node1);
    node6.add_node(node4);

    /*
    print(root);
    std::cout << endl;
    int x= node1->get_node(2);
    std::cout << x;
    std::cout << endl;
    node1->delete_node();
    */

}
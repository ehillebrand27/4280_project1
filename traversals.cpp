

#include "node.h"
#include "traversals.h"
#include <iostream>
using namespace std;

static void traversePreOder(node_t *rootP, int level)
{
    if (rootP == NULL) return;

    // Visit Node
    cout << node->data << " ";

    // Traverse left subtree
    printPreOrder(node->left);

    // Traverse right subtree
    printPreOrder(node->right);
}

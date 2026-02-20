

#include "node.h"
#include "traversals.h"
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;


void preTraversalHelper(node_t* rootP, FILE* out, int level)
{
    if (rootP == nullptr) return;

    // indentation
    fprintf(out, "%*c", level * 4, ' ');

    // level and ascii
    fprintf(out, "%d %d ", level, rootP->ascii_number);

    // print linked list
    string_list* temp = rootP->list;
    while (temp != nullptr)
    {
        fprintf(out, "%s ", temp->str.c_str());
        temp = temp->next;
    }

    fprintf(out, "\n");

    // recursive traversal
    preTraversalHelper(rootP->left, out, level + 1);
    preTraversalHelper(rootP->right, out, level + 1);

}


void traversePreOrder(node_t* root, const char baseFilename[])
{
    char filename[256];
    sprintf(filename, "%s.preorder", baseFilename);

    FILE* out = fopen(filename, "w");
    if (!out)
    {
        fprintf(stderr, "Error opening preorder file\n");
        return;
    }

    preTraversalHelper(root, out, 0);

    fclose(out);
}



void postTraversalHelper(node_t* rootP, FILE* out, int level)
{
    if (rootP == nullptr) return;

    // indentation
    fprintf(out, "%*c", level * 4, ' ');

    // level and ascii
    fprintf(out, "%d %d ", level, rootP->ascii_number);

    // print linked list
    string_list* temp = rootP->list;
    while (temp != nullptr)
    {
        fprintf(out, "%s ", temp->str.c_str());
        temp = temp->next;
    }

    fprintf(out, "\n");

    // recursive traversal
    postTraversalHelper(rootP->right, out, level + 1);
    postTraversalHelper(rootP->left, out, level + 1);

}


void traversePostOrder(node_t* root, const char baseFilename[])
{
    char filename[256];
    sprintf(filename, "%s.postorder", baseFilename);

    FILE* out = fopen(filename, "w");
    if (!out)
    {
        fprintf(stderr, "Error opening preorder file\n");
        return;
    }

    postTraversalHelper(root, out, 0);

    fclose(out);
}
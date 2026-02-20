
#ifndef TRAVERSALS.H
#define TRAVERSALS.H



#include "node.h"


void traversePreOrder(node_t* root, const char baseFilename[]);
void traversePostOrder(node_t* root, const char baseFilename[]);
void traverseLevelOrder(node_t* root, const char baseFilename[]);

#endif



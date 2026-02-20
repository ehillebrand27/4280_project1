
#ifndef TRAVERSALS_H
#define TRAVERSALS_H
#include "node.h"


void traversePreOrder(node_t* root, const char baseFilename[]);
void preTraversalHelper(node_t* rootP, int level);
void traversePostOrder(node_t* root, const char baseFilename[]);
void postTraversalHelper(node_t* rootP, int level);
void traverseLevelOrder(node_t* root, const char baseFilename[]);
void levelTraversalHelper(node_t* rootP, int level);

#endif





#ifndef BUILDTREE_H
#define BUILDTREE_H

#include <string>
#include "node.h"

void validateString(const std::string& inputString);
int getAscii(const std::string& str);
void appendString(node_t* node, const std::string& input);
node_t* insert(node_t* root, const std::string& input);

#endif
#include <node.h>

static void preOrder(node_t *rootP, int level)
{
    if (rootP == NULL) return;

    printf("%*c%d:%s ",level*4,' ',level, node_t.ascii); // assume some info printed as string
    printf("\n");

    preOrder(rootP->left,level+1);
    preOrder(rootP->right,level+1);
}


static void postOrder(node_t *rootP, int level)
{
    if (rootP == NULL) return;

    printf("%*c%d:%s ",level*4,' ',level, NodeId.info); // assume some info printed as string
    printf("\n");

    preOrder(rootP->right,level+1);
    preOrder(rootP->left,level+1);
}




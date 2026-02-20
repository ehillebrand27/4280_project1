#include "node.h"
#include "traversals.h"
//#include "buildTree.h"
#include <string>
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main(int argc, char* argv[]) {


    const int ONE_ARG = 1;
    const int TWO_ARG = 2;

    FILE* input = nullptr;
    string baseName;

    //if theres one argument then read from keyboard
    if(argc == ONE_ARG)
    {
        input = stdin;
        baseName = "out";

    }

    //if there are two arguments then read from the file provided
    else if(argc == TWO_ARG)
    {
        input = fopen(argv[1], "r");

        if(!input)
        {
            cerr << "ERROR: Can't open file" << endl;
            return 1;
        }

        baseName = argv[1];
    }

    else
    {
        cerr << "Fatal: Improper usage\n" << endl;
        cerr << "Usage: P1 [filename]\n" << endl;
        return 1;
    }


    //clean up memory 
    if (input != stdin)
    {
        fclose(input);
    }




    //node_t *root = buildTree(file); // ‘file’ is the input file

    //levelOrder(root);
    //preOrder(root);
    //postOrder(root);
    return 0;
}
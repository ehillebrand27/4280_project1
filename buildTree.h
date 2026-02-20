
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <node.h>
using namespace std;



//exits program if unallowed char is detected
void validateString(const string& inputString)
{


    for(size_t i = 0; i < inputString.length(); i++)
    {

        unsigned char c = inputString[i];
        int ascii = static_cast<int>(c);

        if(!isalnum(c) && (ascii < 33 || ascii > 47  ))
        {
            cerr << "ERROR: unallowed character detected." << endl;
            exit(1);
        }
    }
}


//get ascii value 
int getAscii(const string& str)
{
    return static_cast<int>(str[0]);
}



void appendString(node_t* node, const string& input)
{
    string_list* newNode = new string_list{input, nullptr};

    if (node->list == nullptr)
    {
        node->list = newNode;
        return;
    }

    string_list* temp = node->list;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}


node_t* insert(node_t* root, const string& input)
{
    int value = getAscii(input);



    if (root == nullptr)
    {
        root = new node_t(value);
        appendString(root, input);
        return root;
    }



    if (value < root->ascii_number)
    {
        root->left = insert(root->left, input);
    }



    else if (value > root->ascii_number)
    {
        root->right = insert(root->right, input);
    }



    else
    {
        // same ASCII → append string to list
        appendString(root, input);
    }



    return root;
}
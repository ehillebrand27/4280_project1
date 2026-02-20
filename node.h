
#ifndef NODE_H
#define NODE_H

#include <string>

struct string_list
{

    std::string str;
    string_list* next;

};



struct node_t
{
    int ascii_number;
    node_t* left;
    node_t* right;
    string_list* list;

    //initialize values
    node_t(int value)
    {
        ascii_number = value;
        left = nullptr;
        right = nullptr;
        list = nullptr;
    }


};

#endif
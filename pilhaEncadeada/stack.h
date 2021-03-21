#ifndef PILHA_H
#define PILHA_H

#include "type.h"

class Stack
{
    public:
        Stack();
        ~Stack();
        bool isEmpty() const;
        bool isFull() const;
        void print() const;
        void push(ItemType);
        ItemType pop();
    private:
        NodeType * structure;
};

#endif

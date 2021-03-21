#include <iostream>
#include "stack.h"

using namespace std;

Stack::Stack()
{
    structure = NULL;
}
Stack::~Stack()
{
    NodeType * tmpPtr;
    while( structure != NULL )
    {
        tmpPtr = structure;
        structure = structure->next;
        delete tmpPtr;
    }
}
        
bool Stack::isEmpty() const
{
    return( structure == NULL );
}
bool Stack::isFull() const
{
    NodeType * location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch( std::bad_alloc exception)
    {
        return true;
    }
}
void Stack::print() const
{

}
void Stack::push(ItemType item )
{
    if( !isFull() )
    {
        NodeType * location;
        location = new NodeType;
        location->info = item;
        location->next = structure;
        structure = location;
    }
    else 
    {
        throw "Stack is already full!";
    }

}
ItemType Stack::pop()
{
    if( !isEmpty() )
    {
        NodeType * tmpPtr;
        tmpPtr = structure;
        ItemType item;
        item = structure->info;
        structure = structure->next;
        delete tmpPtr;
        return item;
    }
    else
    {
        throw "Stack is already empty!";
    }
}

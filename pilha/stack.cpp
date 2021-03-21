#include <iostream>
#include "stack.h"

using namespace std;

Stack::Stack()
{
    length = 0;
    structure = new ItemType[MAX_ITEMS];
}

Stack::~Stack()
{   
    delete [] structure;
}

bool Stack::isEmpty() const
{
    return( length == 0 );
}
bool Stack::isFull() const
{
    return( length == MAX_ITEMS );
}

void Stack::push( ItemType item )
{
    if( !isFull() )
    {
        structure[length] = item;
        ++length;
    }
    else
    {
        throw "Stack is already full!";
    }
}

ItemType Stack::pop( void )
{
    if( !isEmpty() )
    {
        --length;
        return(structure[length]);
    }
    else
    {
        throw "Stack is empty!";
    }
}

void Stack::print() const
{
    cout << "Pilha = ";
    for( int i=0; i<length; i++ )
    {
        cout << structure[i];
    }
    cout << endl;
}

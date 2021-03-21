#include <iostream>
#include "queue.h"

using namespace std;

Queue::Queue()
{
    head = new NodeType;
    tail = head;
}

Queue::~Queue()
{
    while( !isEmpty() )
    {
        NodeType * tmpPtr;
        tmpPtr = tail;
        tail = tail->next;
        delete tmpPtr;
    }
}

bool Queue::isEmpty() const
{
    if( head == tail )
        return true;
    else
        return false;
}
bool Queue::isFull() const
{
    try
    {
        NodeType * tmpPtr;
        tmpPtr = new NodeType;
        delete tmpPtr;
        return false;
    }
    catch( std::bad_alloc exception)
    {
        return true;
    }
    
}
void Queue::print() const
{

}
void Queue::enqueue(ItemType item)
{
    if( !isFull() )
    {
        NodeType * tmpPtr;
        tmpPtr = new NodeType;
        head->info = item;
        head->next = tmpPtr;
        head = tmpPtr;
    }

}
ItemType Queue::dequeue()
{
    NodeType * tmpPtr;
    tmpPtr = tail;
    ItemType item;
    item = tail->info;
    tail = tail->next;
    delete tmpPtr;
    return item;
}
//        NodeType * head;
//        NodeType * tail;

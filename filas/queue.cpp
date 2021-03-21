#include <iostream>
#include "queue.h"

using namespace std;

Queue::Queue()
{
    front = 0;
    back = 0;
    structure = new ItemType[MAX_ITEMS];
}

Queue::~Queue()
{
    delete [] structure;
}

bool Queue::isEmpty() const
{
    return( front == back );
}
bool Queue::isFull() const
{
    return( ((front+1)%MAX_ITEMS) == back );
}
void Queue::print() const
{
    cout << "Fila: ";
    for( int i=back; i<front; i++ )
    {
        cout << structure[i];
    }
    cout << endl;
}

void Queue::enqueue(ItemType item)
{
    if( !isFull() )
    {
        structure[front] = item;
        front = ++front % MAX_ITEMS;
    }
    else
    {
        throw "Queue is already full!";
    }
}
ItemType Queue::dequeue()
{
    ItemType item;
    item = structure[back];
    back = ++back % MAX_ITEMS;
    return( item );
}

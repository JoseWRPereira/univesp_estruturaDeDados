#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    ItemType character;
    Stack stack;
    ItemType stackItem;

    cout << "Adicione uma string" << endl;
    cin.get(character);
    while( character != '\n' )
    {
        stack.push(character);
        cin.get(character);
    }

    stack.print();
    
    while( !stack.isEmpty() )
    {
        stackItem = stack.pop();
        cout << stackItem;
    }
    cout << endl;

}

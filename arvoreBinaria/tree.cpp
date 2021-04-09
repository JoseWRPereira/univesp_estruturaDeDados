#include <iostream>
#include "tree.h"


void destroyTree(NodeType * &tree)
{

}
void retrieveAluno(NodeType * tree,
                    Aluno &item,
                    bool &found) const;
void insertAluno(NodeType * &tree, Aluno item);
void deleteAluno(NodeType * &tree, int item);
void deleteNode(NodeType * &tree);
void getSuccessor(NodeType * tree, Aluno& data);
void printTree(NodeType * tree) const;
void printPreOrder(NodeType * tree)  const
{
    if( tree->esquerda != NULL )
    {
        
    }
}
void printInOrder(NodeType * tree)   const;
void printPostOrder(NodeType * tree) const;  

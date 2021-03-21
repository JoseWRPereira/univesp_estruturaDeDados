#ifndef HASH_H
#define HASH_H

#include "aluno.h"

class Hash
{
    public:
        Hash(int max_item = 100 );
        bool isFull() const;
        int getLength() const;
        void retrieveItem(Aluno &aluno, bool &ra );
        void insertItem(Aluno aluno);
        void deleteItem(Aluno aluno);
        void print();

    private:
        int getHash(Aluno aluno);
        int max_items;
        int length;
        Aluno * structure;
};

#endif

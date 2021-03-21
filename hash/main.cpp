#include <iostream>
#include "hash.h"
#include "aluno.h"

int main()
{
    Hash alunoHash(10);
    int ras[7] = {12704, 31300, 1234, 49001, 52202, 65606, 91234};
    string nomes[7] = {"Pedro", "Raul", "Paulo", "Carlos", "Lucas", "Maria", "Samanta"};

    for(int i = 0; i < 7; i++ )
    {
        Aluno aluno = Aluno(ras[i], nomes[i]);
        alunoHash.insertItem(aluno);
    }
    alunoHash.print();
    cout << "......................." << endl;

}

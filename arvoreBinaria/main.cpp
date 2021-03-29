#include <iostream>
#include "aluno.h"

#define QTD_ALUNOS 9


int main()
{
    int ras[QTD_ALUNOS] = {32,50,12,56,10,5,2,42,33};
    string nomes[QTD_ALUNOS] = { "Ana", "Mozarina", "Solange", "Eliana", 
                                "Francisco", "Carlos" , "Caua", "José", "Ian"};
    Aluno alunos[QTD_ALUNOS];

    for(int i = 0; i < QTD_ALUNOS; i++ )
    {
        Aluno aluno = Aluno(ras[i], nomes[i]);
        alunos[i] = aluno;
        cout << alunos[i].getRa() << " : " << alunos[i].getNome() << endl;
    }
    cout << "......................." << endl;

    return 0;
}
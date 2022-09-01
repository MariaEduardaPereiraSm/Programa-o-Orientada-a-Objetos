#ifndef AGENDA_H_
#define AGENDA_H_
#include "PessoaFisica.h"
#include "PessoaJuridica.h"

class Agenda{
    public:
       PessoaFisica *pf; 
       PessoaJuridica *pj;
       string BuscarContato(string nome);
       Agenda(PessoaFisica *pf, PessoaJuridica *pj);
};
#endif
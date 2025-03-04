#ifndef DUPLAMENTEENCADEADA_H__
#define DUPLAMENTEENCADEADA_H__
#include "No.h"
#include <iostream>
using namespace std;

class DuplamenteEncadeada{
    public:
        DuplamenteEncadeada();
        ~DuplamenteEncadeada();
        void insereInicio(int val);
        void removeInicio();
        void insereUltimo(int val);
        void removeUltimo();
        bool busca(int val);
    private:
        No* primeiro;
        int n;
        No* ultimo;
};

#endif
#include <iostream>
using namespace std;

#include "DuplamenteEncadeada.h"
#include "No.h"

DuplamenteEncadeada::DuplamenteEncadeada()
{
    primeiro= nullptr;
}

DuplamenteEncadeada::~DuplamenteEncadeada()
{
    No *p = primeiro;
    while (p!= nullptr)
    {
        No *t = p->getProx();
        delete p;
        p = t;
    }
}

void DuplamenteEncadeada::insereInicio(int val)
{
    No *p = new No;
    p->setInfo(val);
    p->setProx(primeiro);
    primeiro = p;
}

bool DuplamenteEncadeada::busca (int val)
{
    No* busca = primeiro;
    while (busca!=nullptr)
    {
        if (busca->getInfo()==val)
            return true;
        busca=busca->getProx();
    }
    return false;
}
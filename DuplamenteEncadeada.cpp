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
    p->setAnt(nullptr);
    if(n ==0)
        ultimo =p;
    else
        primeiro ->setAnt(p);
    primeiro = p;
    n=n+1;
}

void DuplamenteEncadeada::removeInicio()
{
    if (primeiro!=nullptr)
    {
        No *p = primeiro;
        primeiro = p->getProx();
        delete p;
        n--;
        if(n==0)
            ultimo = nullptr;
        else
            primeiro -> setAnt(nullptr);
    }
}

void DuplamenteEncadeada::insereUltimo(int val)
{
    if (n >0)
    {
        No* p = new No;
        p->setInfo(val);
        ultimo->setProx(p);
        p->setAnt(ultimo);
        ultimo = p;
        n++;
    }
    else
        this->insereInicio(val);
}

void DuplamenteEncadeada::removeUltimo()
{
    if(ultimo==nullptr)
    {
        return;
    }
    No *p = ultimo;
    ultimo = p->getAnt();
    delete p;
    n--;
    if(n==0)
        primeiro = nullptr;
    else
        ultimo -> setProx(nullptr);
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
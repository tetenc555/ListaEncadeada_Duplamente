#include <iostream>
using namespace std;

#include "No.h"

No::No()
{
    
}

No::~No()
{

}

int No::getInfo()
{
    return info;
}

No* No::getAnt()
{
    return ant;
}

No* No::getProx()
{
    return prox;
}

void No::setInfo(int val)
{
    info = val;
}

void No::setProx(No* p)
{
    prox = p;   
}

void No::setAnt(No* p)
{
    ant = p;
}
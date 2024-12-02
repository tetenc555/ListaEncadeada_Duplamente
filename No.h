#ifndef NO_H__
#define NO_H__
#include <iostream>
using namespace std;

class No {
    public:
        No();
        ~No();
        int getInfo();
        No* getAnt();
        No* getProx();
        void setInfo(int val);
        void setProx(No *p);
        void setAnt(No *p);
    private:
        int info;
        No *prox;
        No *ant;
};

#endif
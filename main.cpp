//
// Created by Jean Loup on 18/10/2022.
//
#include <iostream>
using namespace std;

#include "Entree.h"
#include "Tableau.h"


int main() {
    Entree entree1("Jacob","06666666");
    entree1.display();
    int a=0;
    int b=19;
    cout<<b<<endl;
    entree1.testPtr(&a);
    entree1.testRef(b);
    cout<<a<<endl;
    cout<<b<<endl;

    Tableau tab(10);
    cout<<tab.getNbElem()<<endl;

    return 0;
}


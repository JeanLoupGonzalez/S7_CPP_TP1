//
// Created by Jean Loup on 18/10/2022.
//

#ifndef S7_CPP_TP1_ENTREE_H
#define S7_CPP_TP1_ENTREE_H

#include <iostream>

using namespace std;

class Entree {
    string nom;
    string numTel;
public:
    Entree(string nom, string numTel);

    void display();

    void testPtr(int *a);

    void testRef(int &a);

};


#endif //S7_CPP_TP1_ENTREE_H

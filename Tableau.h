//
// Created by Jean Loup on 18/10/2022.
//

#ifndef S7_CPP_TP1_TABLEAU_H
#define S7_CPP_TP1_TABLEAU_H

#include "Entree.h"

class Tableau {
    int tailleTotaleTableau;
    int nbElem;
    Entree *val; //les valeurs du tableau sont du type Entree
public:
    void display();

    void ajouter(Entree *val);

    void supprimer(string nom, string numTel);

    void supprimer(string nom);

    int getTailleTotaleTableau() const;

    int getNbElem() const;

    Tableau(int tailleTotaleTableau);

    Tableau(const Tableau &copie);

    ~Tableau();


};


#endif //S7_CPP_TP1_TABLEAU_H

//
// Created by Jean Loup on 18/10/2022.
//

#include "Entree.h"

Entree::Entree(string nom, string numTel) {
    this->numTel = numTel;
    this->nom = nom;
}

void Entree::display() {
    cout << "Nom : " << this->nom << endl;
    cout << "Numero de telephone : " << this->numTel << endl;
}

//
// Created by Jean Loup on 18/10/2022.
//

#include "Tableau.h"

int Tableau::getTailleTotaleTableau() const {
    return this->tailleTotaleTableau;
}

int Tableau::getNbElem() const {
    return this->nbElem;
}

void Tableau::display() {
    for ( int i=0; i< this->nbElem; i++){

    }

}

void Tableau::ajouter(Entree *val) {
    if(this->nbElem<=this->tailleTotaleTableau){

        this->nbElem++;
    }

}

void Tableau::supprimer(string nom, string numTel) {

}

void Tableau::supprimer(string nom) {

}

Tableau::Tableau(int tailleTotaleTableau) {
    this->tailleTotaleTableau=tailleTotaleTableau;
    this->nbElem=0;
    this->val= nullptr; //au debut ya rien ds le tableau
}

Tableau::Tableau(const Tableau &copie) {

}

Tableau::~Tableau() {

}

//
// Created by jl on 26/10/22.
//

#include "Agenda.h"

//constrcuteurs
Agenda::Agenda() {
    this->tab = Tableau();
}

Agenda::Agenda(int tailleMax) {
    this->tab = Tableau(tailleMax);
}

Agenda::Agenda(const Agenda &copie) {
    this->tab = copie.tab;
}

//methodes


void Agenda::concat(Agenda a2) {

    int tailleTab = this->tab.getTailleTotaleTableau() + a2.tab.getTailleTotaleTableau();
    int nbElemTotal = this->tab.nbElem + a2.tab.nbElem;
    Tableau nvTab = Tableau(tailleTab);//cree un nouveau tableau

    //ajout de l'agenda courant au nouvel agenda
    for (int i = 0; i < this->tab.nbElem; i++) {
        nvTab.val[i] = this->tab.val[i];
        nvTab.nbElem++;
    }
    int indiceReprise = nvTab.nbElem;
    //ajout de l'agenda a ajouter au nouvel agenda
    for (int j = indiceReprise; j < nbElemTotal; j++) {
        nvTab.val[j] = a2.tab.val[j - indiceReprise];
        nvTab.nbElem++;
    }
    this->tab = nvTab;

}

void Agenda::ajouter(string nom, string num) {
    this->tab.ajouter(nom, num);
}

void Agenda::supprimer(string nom, string num) {
    this->tab.supprimer(nom, num);
}

void Agenda::supprimer(string nom) {
    this->tab.supprimer(nom);
}

void Agenda::display() {
    this->tab.display();
}

Agenda::~Agenda() {
    //pas de new, donc pas de destructeur à implémenter
}





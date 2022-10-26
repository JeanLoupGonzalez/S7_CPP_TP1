//
// Created by jl on 26/10/22.
//

#include "Agenda.h"


Agenda::Agenda() {
    this->tab = Tableau();
}

Agenda::Agenda(const Agenda &copie) {
    this->tab = copie.tab;
}

void Agenda::concat(Agenda a2) {

    int tailleTab = this->tab.getTailleTotaleTableau() + a2.tab.getTailleTotaleTableau();
    int nbElemTotal = this->tab.getNbElem() + a2.tab.getNbElem();
    Tableau nvTab = Tableau(tailleTab);//cree un nouveau tableau

    for (int i = 0; i < nbElemTotal - this->tab.getNbElem(); i++) {//ajoute agenda courant au nouvel agenda
        nvTab.val[i] = this->tab.val[i];
        nvTab.nbElem++;
    }
    int indiceReprise = nvTab.nbElem;
    for (int j = indiceReprise; j < nbElemTotal; j++) {//ajoute a1 au nouvel agenda
        nvTab.val[j] = a2.tab.val[j - indiceReprise];
        cout<<j<<endl;
        nvTab.nbElem++;
    }
    this->tab=Tableau(nvTab);//MARCHE PAS, il faut redefinir =

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

Agenda::Agenda(Tableau paramtab) : tab(paramtab) {
}




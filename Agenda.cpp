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

//methodes
Agenda::Agenda(const Agenda &copie) {
    this->tab = copie.tab;
}

void Agenda::concat(Agenda a2) {
    cout << "ds concat" << endl;
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





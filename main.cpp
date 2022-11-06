//
// Created by Jean Loup on 18/10/2022.
//
#include <iostream>
using namespace std;

#include "Entree.h"
#include "Tableau.h"
#include "Agenda.h"
//ok


int main() {
    Entree entree1("Jacob","06666666");
    Entree entree2("viktor","35");
    Entree entree3("Raoul","6665988952");
    Entree entree4("hulk","89989");

    //TEST TABLEAU

    //creation tableau de taille 3
    Tableau tab(3);

    //on rempli le tableau au maximum
    tab.ajouter("Jacob","2");
    tab.ajouter("Robert","15");
    tab.ajouter("Arielle","4855");

    //affichage des elements du tableau
    cout<<"\n--On affiche le tableau 1 avec tab.display() qu'on a rempli avec 3 appels de tab.ajouter()"<<endl;
    tab.display();
    cout<<"\n"<<endl;

    //depasse la taille limite
    cout<<"--cas ou on veut ajouter un element a un tableau deja plein avec tab.ajouter()"<<endl;
    tab.ajouter("IGOR","35");

    //demande de suppression a 1 param erroné
    cout<<"\n--On veut supprimer un nom du tableau mais le nom passe en param n est pas dans le tableau\n"<<endl;
    tab.supprimer("arnaud");
    cout<<"\n"<<endl;

    //demande de suppression a 2 params dont 1 seul erroné
    cout<<"--demande de suppression a 2 params dont 1 seul errone avec tab.supprimer(nom numero)\n"<<endl;
    tab.supprimer("arnaud","35");
    cout<<"\n"<<endl;

    //suppression d'elements du tableau avec 2 params
    cout<<"--suppression d'entree du tableau avec 2 params correspondants ds le tabeau (Robert 15)"<<endl;
    tab.supprimer("Robert","15");
    tab.display();
    cout<<"\n"<<endl;

    //suppression d'elements du tableau avec 1 param
    cout<<"--suppression d'elements du tableau avec 1 param correspondant ds le tabeau (Jacob)"<<endl;
    tab.supprimer("Jacob");
    tab.display();
    cout<<"\n"<<endl;

    //suppression du dernier element
    cout<<"--suppression du dernier element de tab, tab est donc vide maintenant"<<endl;
    tab.supprimer("Arielle");
    cout<<"--On affiche tab:\n"<<endl;
    tab.display();
    cout<<"\n"<<endl;

    //suppression sur un tableau vide
    cout<<"--suppression d'une entree dans un tableau vide tab.supprimer(viktor)"<<endl;
    tab.supprimer("viktor");
    cout<<"\n"<<endl;

    //rajoute des entrees
    cout<<"-On remplit le tableau"<<endl;
    tab.ajouter("Luc","18");
    tab.ajouter("Michel","0658956");
    tab.ajouter("Gunter","01");
    tab.display();
    cout<<"\n"<<endl;

    //test constructeur copie
    cout<<"--test constructeur copie. On cree un nv tableau avec Tableau copieTab(tab) "<<endl;
    cout<<"--On affiche ce nv tableau avec copieTab.display()"<<endl;
    Tableau copieTab(tab);
    copieTab.display();
    cout<<"\n"<<endl;

    /*
    Tableau tab3(10);
    Tableau tab2(10);
    tab2.ajouter("zorro","54654");
    tab2.ajouter("lea","89");
    tab2.ajouter("babar","21");
    tab2.ajouter("Nieztzsche","999");*/

    //TEST Agenda

    Agenda agenda1;
    Agenda agenda2(10);

    cout<<"--On cree agenda1 avec constructeur par defaut et agenda2 "
          "avec constructeur qui prend un taille max en parametres"<<endl;
    cout<<"--On ajoute 2 entree a chaque agenda avec agenda.ajouter() et on les affiche"<<endl;
    agenda1.ajouter("Babar","987987987");
    agenda1.ajouter("Elsa","8139764");
    agenda2.ajouter("Marius","77777");
    agenda2.ajouter("Jack","73");
    cout<<"--agenda1.display()"<<endl;
    agenda1.display();
    cout<<"--agenda2.display()"<<endl;
    agenda2.display();

    cout<<"\n--les methodes ajouter, supprimer, display, de Agenda appellent les methodes "
          "correspondantes de Tableau donc je me permets de ne pas tout rester\n"<<endl;

    cout<<"--on concatene agenda1 et agenda2 avec agenda.concat(agenda2)"<<endl;
    agenda1.concat(agenda2);
    cout<<"--affiche agenda1 : "<<endl;
    agenda1.display();
    cout<<"\n"<<endl;

    Agenda agenda3;
    agenda3.ajouter("blabla","azeazeeaz");
    agenda3.ajouter("prenom","999999");
    cout<<"--on concatene 2 agendas de tailles differentes"<<endl;
    cout<<"--affiche agenda1 (4 entrees) concatene a agenda 3 (2 entrees) : "<<endl;
    agenda1.concat(agenda3);
    agenda1.display();

    cout<<"\nQUESTION 5 : on aura dans Agenda .h l'attribut Tableau* tab\nSi l'attribut tab, "
          "de Agenda, devient un pointeur, "
          "il faut penser a changer le destructeur d Agenda pour detruire le\npointeur"
          " et changer les fonctions qui utilisent tab en leur faisant passer en parametre le"
          " pointeur sur un Tableau tab"<<endl;

    return 0;
}


#ifndef BUFFER_H
#define BUFFER_H

#include <iostream>
using namespace std;

class Livre{
    string titre;
    string auteur;
    int annee;
    static int nbLivres;

    public : 
        Livre(string titre,string auteur,int annee){
            this->titre=titre;
            this->auteur=auteur;
            this->annee=annee;
            nbLivres++;
        }

        void afficher(){
            cout<<"<<  Livre >>:"<<endl
                <<"Titre: "<<titre<<endl
                <<"Auteur: "<<auteur<<endl
                <<"Annee de publucation: "<<annee<<endl;
        }

        static void afficherTotal(){
            cout<<"le nombre totale de livre est : "<<nbLivres<<endl;
        }
};

int Livre::nbLivres=0;


#endif
#include <iostream>
using namespace std;

class Universite{
    string nom;

    public :
        Universite(string nom){
            this->nom=nom;
        }

        void afficherNom(){
            cout<<nom<<" "<<endl;
        }
};

class Etudiant{
    string nom;
    int age;
    Universite* universite;
    static int nbEtudiants;

    public :
        Etudiant(string n,int a,Universite* u){
            nom=n;
            age=a;
            universite=u;
            nbEtudiants++;
        }

        void afficher(){
            cout<<"le nom d'etudiant est : "<<nom<<endl
            <<" de ";
            universite->afficherNom();
            cout<<endl;
        }

        static void afficherTotal(){
            cout<<"le nombre d'etudiant est "<<nbEtudiants<<endl;
        }
    
    ~Etudiant(){
        nbEtudiants--;
        cout<<"fin"<<endl;
    }
};

int Etudiant::nbEtudiants = 0;

int main() {
    Universite u("Universite de Casablanca");
    Etudiant e1("Amine", 20, &u);
    Etudiant e2("Sara", 21, &u);

    e1.afficher();
    e2.afficher();

    Etudiant::afficherTotal(); // Doit afficher 2
}
#include <iostream>
#include "SuiviLivresBibliotheque.h"
using namespace std;

int main()
{
    Livre l1("1984", "George Orwell", 1949);
    Livre l2("Le Petit Prince", "Antoine de Saint-Exupéry", 1943);
    Livre l3("L'Etranger", "Albert Camus", 1942);

    l1.afficher();
    l2.afficher();
    l3.afficher();
    cout<<endl;
    Livre::afficherTotal(); // Doit afficher 3
}
//
//  main.cpp
//  remplirTableauTiéCroissantDecroissantAfficher
//
//  Created by Rachid Eljay on 12/22/23.
//

//exo: ecrire un programme qui demande a l'utilisateur de saisir 10 réels stockés dans un tableau.
//    Ecrivez ensuite les fonstions suivantes:
//    - une fonction permettant de remplir les elements du tableau.
//    - une fonction pemettant de trier les elements du tableau par ordre croissant.
//    - une fonction permettant de trier les elements du tableau par ordre decroissant.
//    - une fonction permettant d'afficher les elements du tableau.
//    Tester tous ses fonctions dans un programme principal.


#include <iostream>
using namespace std;

int remplirTableau(int tab[]);
void trieCroissant(int tab[]);
void trieDecroissant(int tab[]);
void afficher(int tab[]);

int main(int argc, const char * argv[])
{
    int tab[10];
    cout << remplirTableau(tab) << endl;
    trieCroissant(tab);
    trieDecroissant(tab);


    return 0;
}

int remplirTableau(int tab[])
{
    int i;
    for(i = 0; i < 10; i++)
    {
        cout << " remplir le tableau : " << i + 1 << endl;
        cin >> tab[i];
    }
    return tab[i];
}

void trieCroissant(int tab[])
{
    int i, j, tmp;
    for(i = 0; i < 10; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(tab[i] > tab[j])
            {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
        }
    }
    cout << " les elements du tableau par ordre croissant : " << endl;
    afficher(tab);
}

void trieDecroissant(int tab[])
{
    int i, j, tmp;
    for(i = 0; i < 10; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(tab[i] < tab[j])
            {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
        }
    }
    cout << " les elements du tableau par ordre decroissant : " << endl;
    afficher(tab);
}

void afficher(int tab[])
{
    for(int i = 0; i < 10; i++)
    {
        cout << tab[i] << endl;
    }
}

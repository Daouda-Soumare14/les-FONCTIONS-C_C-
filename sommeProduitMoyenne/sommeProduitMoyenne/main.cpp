//
//  main.cpp
//  sommeProduitMoyenne
//
//  Created by Rachid Eljay on 12/20/23.
//

//ecrire un programme qui demande a l'utilisateur de saisir 10 réels stockés dans un tableau.
//ecrivez ensuite les fonctions suivantes:
//- trois fonction qui permettent de calculer et d'affiche la somme, le produit  et la moyenne des éléments du tableau
//- une fonction qui détermine et affiche les éléments positifs et négatifs du tableau.
#include <iostream>
using namespace std;

float calculSomme(float tab[]);
float produit(float tab[]);
float moyenne(float tab[]);
void valeursPositiveDuTableau(float tab[]);
void valeursNégativeDuTableau(float tab[]);


int main(int argc, const char * argv[])
{
    float tab[10];
    for(int i = 0; i < 10; i++)
    {
        cout << " saisir la valeur : " << i + 1 << " du tableau " << endl;
        cin >> tab[i];
    }
    cout << " la somme des elements du tableau " << calculSomme(tab) << endl;
    cout << " le produit des elements du tableau " << produit(tab) << endl;
    cout << " la moyenne des elements du tableau " << moyenne(tab) << endl;
    valeursPositiveDuTableau(tab);
    valeursNégativeDuTableau(tab);
    

    return 0;
}

float calculSomme(float tab[])
{
    float s = 0;
    for(int i = 0; i < 10; i++)
    {
        s += tab[i];
    }
    return s;
}

float produit(float tab[])
{
    float p = 0;
    for(int i = 0; i < 10; i++)
    {
        p *= tab[i];
    }
    return p;
}

float moyenne(float tab[])
{
    float m = 0, s = 0;
    s = calculSomme(tab);
    for(int i = 0; i < 10; i++)
    {
        m = s / 10;
    }
    return m;
}

void valeursPositiveDuTableau(float tab[])
{
    cout << " les valeurs positives du tableau sont " << endl;
    for(int i = 0; i < 10; i++)
    {
        if(tab[i] > 0)
        {
            cout << tab[i] << endl;
        }
    }
}

void valeursNégativeDuTableau(float tab[])
{
    cout << " les valeurs négatives du tableau sont " << endl;
    for(int i = 0; i < 10; i++)
    {
        if(tab[i] < 0)
        {
            cout << tab[i] << endl;
        }
    }
}

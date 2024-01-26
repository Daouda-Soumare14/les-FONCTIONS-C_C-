//
//  main.cpp
//  exo1Fichier
//
//  Created by Rachid Eljay on 12/20/23.
//

#include <iostream>
using namespace std;

// la table de multiplication d'un nombre
void tableMultiplication(int a);

int main(int argc, const char * argv[])
{
    int n;
    cout << " la table de multiplication de : n " << endl;
    cin >> n;

    tableMultiplication(n);
    tableMultiplication(3);
    tableMultiplication(10);

    return 0;
}

// la table de multiplication d'un nombre
void tableMultiplication(int a)
{
    cout << " la table de multiplication de " << a << endl;
    for(int i = 1; i <= 10; i++)
    {
        cout << a << " * " << i << " = " << a * i << endl;
    }
}

//
//  main.cpp
//  nombrePremierFonction
//
//  Created by Rachid Eljay on 12/20/23.
//

#include <iostream>
using namespace std;

// determination d'un nombre premier
int nombrePremier(int n);

int main(int argc, const char * argv[])
{
    int n;
    cout << " sasir la valeur de n : ";
    cin >> n;
    
    cout << nombrePremier(n);

    return 0;
}

// determination d'un nombre premier
int nombrePremier(int n)
{
    int cpt = 0;
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            cpt += 1;
        }
        if(cpt == 0)
        {
            cout << " le nombre " << n << " est premier " << endl;
        }
        else
        {
            cout << " le nombre " << n << " n'est pas premier " << endl;
            break;
        }
    }
    return 0;
}

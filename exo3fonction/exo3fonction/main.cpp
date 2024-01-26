//
//  main.cpp
//  exo3fonction
//
//  Created by Rachid Eljay on 12/20/23.
//

#include <iostream>
using namespace std;

// determiner si une année est bissextile ou non
int anneeBissextile(int n);

int main(int argc, const char * argv[])
{
    int n;
    cout << " saisir l'année " << endl;
    cin >> n;
    
    cout << anneeBissextile(n);
    
    return 0;
}

int anneeBissextile(int n)
{
    if((n % 4 == 0 || n % 400 == 0) && n % 100 != 0)
    {
        cout << " l'année " << n << " est bissextile " << endl;
    }
    else
    {
        cout << " l'année " << n << " n'est pas bissextile " << endl;
    }
    return 0;
}

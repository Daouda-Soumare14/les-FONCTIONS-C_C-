//
//  main.cpp
//  maxMin_fonction
//
//  Created by Rachid Eljay on 12/22/23.
//

#include <iostream>
using namespace std;

int maximum(int tab[]);
int minimum(int tab[]);
void inverseValeurTableau(int tab[]);


int main(int argc, const char * argv[])
{
    int tab[10];
    for(int i = 0; i < 10; i++)
    {
        cout << " saisir la valeur : " << i + 1 << endl;
        cin >> tab[i];
    }
    cout << " la valeur maximale du tableau = " << maximum(tab) << endl;
    cout << " la valeur minimale du tableau = " << minimum(tab) << endl;
    inverseValeurTableau(tab);

    
    return 0;
}

int maximum(int tab[])
{
    int max = tab[0];
    for(int i = 0; i < 10; i++)
    {
        if(max < tab[i])
        {
            max = tab[i];
        }
    }
    return max;
}

int minimum(int tab[])
{
    int min = tab[0];
    for(int i = 0; i < 10; i++)
    {
        if(min > tab[i])
        {
            min = tab[i];
        }
    }
    return min;
}

void inverseValeurTableau(int tab[])
{
    int T[10];
    
    for(int i = 0; i < 10; i++)
    {
        T[9 - i] = tab[i];
    }
    cout << " les valeurs inversées du tableau " << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << T[i] << endl;
    }
}

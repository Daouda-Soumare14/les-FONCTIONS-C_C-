//
//  main.cpp
//  equationSecondDegre_fonction
//
//  Created by Rachid Eljay on 12/20/23.
//

#include <iostream>
#include <cmath>
using namespace std;

float a, b, c; // les variables sont declarer globalement
float saisirValeurEquation();
float discriminant();
void afficher(float delta);

int main(int argc, const char * argv[])
{
    cout << saisirValeurEquation();
    
    float delta = discriminant();
    
    afficher(delta);
  
 
    return 0;
}

float saisirValeurEquation()
{
    
    cout << " saisir la valeur de a : " << endl;
    cin >> a;
    
    while(a == 0 )
    {
        cout << " saisir la valeur de a non nulle : " << endl;
        cin >> a;
    }
    cout << " saisir la valeur de b : " << endl;
    cin >> b;
    cout << " saisir la valeur de c : " << endl;
    cin >> c;
    
    return 0;
}

float discriminant()
{
    float delta = pow(-b, 2) - (4 * a * c);
    
    return delta;
}

void afficher(float delta)
{
    if(delta == 0)
    {
        float x0 = (-b) / (2 * a);
        cout << " On n'a une solution double x0 = " << x0 << endl;
    }
    else if(delta > 0)
    {
        float x1 = (-b - sqrt(delta)) / (2 * a);
        float x2 = (-b + sqrt(delta)) / (2 * a);
        cout << " On n'a une double solutions X1 = " << x1 << " et X2 = " << x2 << endl;
    }
    else
    {
        cout << " l'equation n'a pas de solution " << endl;
    }
}

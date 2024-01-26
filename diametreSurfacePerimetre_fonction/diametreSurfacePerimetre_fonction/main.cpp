//
//  main.cpp
//  diametreSurfacePerimetre_fonction
//
//  Created by Rachid Eljay on 12/20/23.
//

#include <iostream>
using namespace std;

// calculer le diametre
float diametre(float r);
float perimetre(float r);
float surface(float r);


int main(int argc, const char * argv[])
{
    float r;
    cout << " saisir le rayon du cercle : " << endl;
    cin >> r;
    // le diametre
    cout << " le diametre du cercle = " << diametre(r) << endl;
    
    // le perimetre
    cout << " le perimetre du cercle = " << perimetre(r) << endl;
    
    // la surface
    cout << " la surface du cercle = " << surface(r) << endl;
    
    return 0;
}

// calculer le diametre
float diametre(float r)
{
    float d;
    d = r * 2;
    
    return d;
}

float perimetre(float r)
{
    float p;
    p = r * 2 * 3.14;
    
    return p;
}

float surface(float r)
{
    float s;
    s = r * r * 3.14;
    
    return s;
}

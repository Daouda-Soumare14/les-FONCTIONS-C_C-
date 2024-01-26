//
//  main.cpp
//  exo2fonction
//
//  Created by Rachid Eljay on 12/20/23.
//

#include <iostream>
using namespace std;

// le cube d'une valeur
float cube(float a);

int main(int argc, const char * argv[])
{
    float n;
    cout << " le cube de n = " << endl;
    cin >> n;
    
    cout << cube(n) << endl;

    return 0;
}

// le cube d'une valeur
float cube(float a)
{
    float c;
    cout << " le cube de " << a << endl;
    c = a * a * a;
    
    return c;
}

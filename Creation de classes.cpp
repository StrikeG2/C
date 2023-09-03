#include <iostream>
#include <cmath>

class Rectangle
{
public:
    int longueur {};
    int largeur {};

    void calculSurface()
    {
        int surface;
        surface = longueur*largeur;
        std::cout<< surface <<std::endl;
    }

    void perimetre()
    {
        int perimetre;
        perimetre = (longueur+largeur)*2;
        std::cout<< perimetre <<std::endl;
    }
};

class Cercle
{
public:
    double rayon {};

    void calculCirconference()
    {
        double pi = M_PI;
        double circonference = (rayon*2)*pi;
        std::cout<< circonference <<std::endl;
    }

    void calculSurface()
    {
        double pi = M_PI;
        double surface = (rayon*rayon)*pi;
        std::cout<< surface <<std::endl;
    }
    
};

int main() 
{
    Rectangle rec1{15,20};
    rec1.calculSurface();
    rec1.perimetre();

    Cercle cercle1{5};
    cercle1.calculSurface();
    cercle1.calculCirconference();
    return 0;
}
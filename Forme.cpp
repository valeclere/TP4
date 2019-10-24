#include "Forme.hpp"

int Forme::nbFormes=0;

Forme::Forme(): p(),w(0),h(0)
{
    nbFormes++;
}


Forme::Forme(const Point &p, int w, int h): p(p),w(w),h(h)
{
    nbFormes++;
}

void Forme::affichage()
{
    p.affichage();
    std::cout << "largeur=" << w << " hauteur=" << h  << std::endl;
    std::cout << "nbFormes=" << nbFormes << std::endl;
}
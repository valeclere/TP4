#include "Forme.hpp"

int Forme::nbFormes=0;

Forme::Forme(): p(),w(0),h(0), couleur(COULEURS::BLANC), Id(nbFormes)
{
    nbFormes++;
}


Forme::Forme(const Point &p, int w, int h): p(p),w(w),h(h), couleur(COULEURS::BLANC), Id(nbFormes)
{
    nbFormes++;
}

void Forme::affichage()
{
    p.affichage();
    std::cout << "largeur=" << w << " hauteur=" << h  << std::endl;
    std::cout << "nbFormes=" << nbFormes << std::endl;
}

Point Forme::getPoint() const{
    return p;
}

COULEURS Forme::getCouleur() const{
    return couleur;
}

static int Forme::prochainId() {
    return nbFormes+1;
}

int Forme::getId() const{
    return Id;
}
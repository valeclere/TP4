#include "Forme.hpp"

int Forme::nbFormes=0;

Forme::Forme(): p(),w(0),h(0), couleur(COULEURS::BLANC), Id(nbFormes)
{
    nbFormes++;
}

Forme::Forme(const Point &p, COULEURS couleur): p(p),w(0),h(0), couleur(couleur), Id(nbFormes)
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

&Point Forme::getPoint(){
    return this->p;
}

COULEURS Forme::getCouleur() const{
    return couleur;
}

 void Forme::setCouleur(COULEURS couleur){
     this->couleur=couleur;
 }


int Forme::prochainId(){
    return nbFormes;
}


int Forme::getId() const{
    return Id;
}


void Forme::setX(int x){
    p.setX(x);
}

void Forme::setY(int y){
    p.setY(y);
}

#include "Cercle.hpp"

Cercle::Cercle(): Forme(Point(0,0), 0, 0), r(0)
{
    std::cout << "Creation Cercle" << std::endl;
}

Cercle::Cercle(int x, int y, int w, int h): Forme(Point(x,y), w, h), r(0)
{
    std::cout << "Creation Cercle" << std::endl;
}

Cercle::Cercle(int x,int y,int r): Forme(Point(x,y), 0, 0), r(r)
{}

std::string Cercle::toString(void) const{
    std::string chaine = "CERCLE "+std::to_string(p.getX())+" "+std::to_string(p.getY())+" "+std::to_string(w)+" "+std::to_string(h);
    return chaine;
}

void Cercle::setRayon(int r){
    this->r=r;
}

int Cercle::getRayon() const{
    return r;
}

int Cercle::getLargeur() const{
    return w;
}

int Cercle::getHauteur() const{
    return h;
}
#include "Rectangle.hpp"

Rectangle::Rectangle(): Forme(Point(0,0),0,0)
{
    std::cout << "Creation Rectangle" << std::endl;
}

Rectangle::Rectangle(int x, int y, int w, int h): Forme(Point(x,y), w,h)
{
    std::cout << "Creation Rectangle" << std::endl;
}

std::string Rectangle::toString(void) const{
    std::string chaine = "RECTANGLE "+std::to_string(p.getX())+" "+std::to_string(p.getY())+" "+std::to_string(w)+" "+std::to_string(h);
    return chaine;
}

int Rectangle::getLargeur() const{
    return w;
}

int Rectangle::getHauteur() const{
    return h;
}
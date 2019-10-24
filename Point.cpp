//#include <iostream>
#include "Point.hpp"

Point ORIGINE;

Point::Point():x(0),y(0)
{}

Point::Point(int x, int y):x(x),y(y)
{}

Point::Point(const Point &p): x(p.x),y(p.y)
{}
// constructeur de copie inutile car classe simple (recopie de 2 entiers)

void Point::affichage() const
{
    std::cout << "Abscisse=" << x << " Ordonée=" << y << std::endl;
}

int Point::getX() const{
    return x;
}

int Point::getY() const{
    return y;
}

void Point::setX(int x){
    this->x=x;
}

void Point::setY(int y){
    this->y=y;
}

//  NE PAS OUBLIER de définir ORIGINE
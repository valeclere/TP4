#ifndef __CPP4__POINT_HPP__
#define __CPP4__POINT_HPP__

#include <iostream>

class Point{
    int x;
    int y;

    public :
        Point();
        Point(int x, int y);
        Point(const Point &p);

        int getX() const;
        int getY() const;
        void setX(int);
        void setY(int);

        void affichage() const;

};


// declaration d'un point ORIGINE
// il ne faudra pas oublier de l'instancier quelque part
extern Point ORIGINE;

#endif
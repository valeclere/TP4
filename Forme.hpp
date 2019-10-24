#ifndef __CPP4__FORME_HPP__
#define __CPP4__FORME_HPP__

#include "Point.hpp"
#include <iostream>
#include <string>


// enum COULEURS { BLANC, NOIR};
enum class COULEURS { BLANC, NOIR};

class Forme{
    Point p;
    int w; /*largeur*/
    int h; /*hauteur*/
    static int nbFormes;

    public :
        Forme();
        Forme(const Point &p, int w, int h);
        void affichage();
};

#endif
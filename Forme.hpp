#ifndef __CPP4__FORME_HPP__
#define __CPP4__FORME_HPP__

#include "Point.hpp"
#include <iostream>
#include <string>


// enum COULEURS { BLANC, NOIR};
enum class COULEURS { BLANC, NOIR, BLEU};

class Forme{
    Point p;
    int w; /*largeur*/
    int h; /*hauteur*/
    COULEURS couleur;
    static int nbFormes;
    int Id;

    public :
        Forme();
        Forme(const Point &p, int w, int h);

        void affichage();
        static int prochainId();

        Point getPoint() const;
        COULEURS getCouleur() const;
        int getId() const;
};

#endif
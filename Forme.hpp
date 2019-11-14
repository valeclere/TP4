#ifndef __CPP4__FORME_HPP__
#define __CPP4__FORME_HPP__

#include "Point.hpp"
#include <iostream>
#include <string>

enum class COULEURS { BLANC, NOIR, BLEU, VERT, ROUGE, JAUNE};

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
        Forme(const Point &p, COULEURS couleur);

        void affichage();
        static int prochainId();

        &Point getPoint();

        COULEURS getCouleur() const;
        void setCouleur(COULEURS couleur);

        int getId() const;

        /*continuer avec setX et setY avant*/
        void setX(int x);
        void setY(int y);
};

#endif
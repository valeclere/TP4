#ifndef __CPP4__FORME_HPP__
#define __CPP4__FORME_HPP__

#include "Point.hpp"
#include <iostream>
#include <string>

enum class COULEURS { BLANC, NOIR, BLEU, VERT, ROUGE, JAUNE};

class Forme{
    protected :
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

        Point& getPoint();
        int getLargeur() const;
        int getHauteur() const;

        COULEURS getCouleur() const;
        void setCouleur(COULEURS couleur);

        int getId() const;

        void setX(int x);
        void setY(int y);

        virtual std::string toString(void) const;

        virtual ~Forme();
};

#endif
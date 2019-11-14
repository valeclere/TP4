#ifndef __CPP4__CERCLE_HPP__
#define __CPP4__CERCLE_HPP__

#include "Forme.hpp"

class Cercle : public Forme{
    int r; /*rayon*/

    public :
        Cercle();
        Cercle(int,int,int,int);
        Cercle(int,int,int);

        void setRayon(int r);
        int getRayon() const;
        int getLargeur() const;
        int getHauteur() const;

        std::string toString(void) const;

};

#endif

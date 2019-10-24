#ifndef __CPP4__CERCLE_HPP__
#define __CPP4__CERCLE_HPP__

#include "Forme.hpp"

class Cercle : public Forme{
    int rayon;

    public :
        Cercle();
        Cercle(int,int,int,int);
        Cercle(int,int,int);

};

#endif

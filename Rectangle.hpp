#ifndef __CPP4__RECTANGLE_HPP__
#define __CPP4__RECTANGLE_HPP__

#include "Forme.hpp"

class Rectangle : public Forme{

    public :
        Rectangle();
        Rectangle(int,int,int,int);

        std::string toString(void) const;
        int getLargeur() const;
        int getHauteur() const;
};

#endif

#include "Cercle.hpp"

Cercle::Cercle(): Forme(Point(0,0), 0, 0), rayon(0)
{
    std::cout << "Creation Cercle" << std::endl;
}

Cercle::Cercle(int x, int y, int w, int h): Forme(Point(x,y), w, h)
{
    std::cout << "Creation Cercle" << std::endl;
}

Cercle::Cercle(int x,int y,int r): Forme(Point(x,y), 0, 0), rayon(r)
{}
#include "Rectangle.hpp"

Rectangle::Rectangle(): Forme(Point(0,0),0,0)
{
    std::cout << "Creation Rectangle" << std::endl;
}

Rectangle::Rectangle(int x, int y, int w, int h): Forme(Point(x,y), w,h)
{
    std::cout << "Creation Rectangle" << std::endl;
}


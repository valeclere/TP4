  
#ifndef GROUPE
#define GROUPE
#include <iostream>
#include <string>
#include "Cercle.hpp"
#include "Rectangle.hpp"
#include "Forme.hpp"

const int taille = 10;

class Groupe{
    int nb_c;
    int nb_r;
    static int compteur;
    Forme *groupe[taille];

    public :

    void Ajouter(Forme *f);
    int getNbF() const;

    std::string toString() const;
};

#endif
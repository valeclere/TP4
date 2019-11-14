#include "Groupe.hpp"

int Groupe::compteur=0;


void Groupe::Ajouter(Forme *f){
    groupe[compteur]=f;
    compteur++;
}

int Groupe::getNbF() const{
    return compteur;
}

std::string Groupe::toString() const{
    std::string Chaine="";

    for (int i=0; i<=compteur-1; i++)
    {
        Chaine+=groupe[i]->toString()+" ";
    }

    return Chaine;
}

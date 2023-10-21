#include "person.h"
person::person(std::string f, std::string l, int g){
    nom = f;
    prenom = l;
    gender = g;
}

std::string person::fullname(){
    std::string genre;
    if( gender==1)
    {
        genre = "MS";
    }
    else{
        genre = "Ms";
    }
    return gender+ " "+ nom+ " "+ prenom+ " ";
}
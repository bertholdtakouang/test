#include <iostream>
#include <string>
class person {
    public:
        person(std::string nom, std::string prenom, int gender);
        std::string fullname();

    private:
        std::string nom;
        std::string prenom;
        int gender;
};

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

int main(){
    int i{5};
    auto j(4);
    std::cout<<j+i<<std::endl;
     person p("Dom", "Ginhac", 1);
    std::string fullname = p.fullname();
    std::cout << "Hello " << fullname << std::endl;
    std::cout << "That's all folks" << std::endl;
    return 0;
}
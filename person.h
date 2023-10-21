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
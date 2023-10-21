#include <iostream>
#include "person.h"
int main(int argc, char const *argv[]) {
 person p("Dom", "Ginhac", 1);
 std::string fullname = p.fullname();
 std::cout << "Hello " << fullname << std::endl;
 std::cout << "That's all folks" << std::endl;
 return 0;
}
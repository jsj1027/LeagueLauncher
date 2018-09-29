#include <iostream>
#include "LeagueChecker.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    LeagueChecker hi;
    //hi.checkSystemProcesses();
    hi.readProcesses();
    return 0;
}
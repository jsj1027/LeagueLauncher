//
// Created by lketc on 9/14/2018.
//
#include <iostream>
#include <process.h>
#include "LeagueChecker.h"
#include "cstdlib.h"

bool LeagueChecker::isLeagueOnline() const {
    return leagueOnline;
}

void LeagueChecker::setLeagueOnline(bool leagueOnline) {
    LeagueChecker::leagueOnline = leagueOnline;
}

void LeagueChecker::checkSystemProcesses() {
//    std::cout << system("tasklist /fi \"memusage gt 40000\"") << std::endl;
    std::string hey;
    hey = system("tasklist /fi \"memusage gt 40000\" > C:\\Users\\lketc\\CLionProjects\\LeagueLauncher\\process.txt");
    std::cout << hey << std::endl;
}
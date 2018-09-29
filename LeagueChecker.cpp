//
// Created by lketc on 9/14/2018.
//
#include <iostream>
#include <process.h>
#include "LeagueChecker.h"
#include "stdlib.h"
#include <fstream>
#include <cstring>

using namespace std;

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

void LeagueChecker::readProcesses() {
    string line;
    string lol = "LeagueLauncher.exe";
    ifstream in ("process.txt");
    while ( getline (in,line) )
    {
        if(strncmp(line.c_str(), lol.c_str(), lol.size()) == 0){
            cout << line+"\n" << '\n';
            setLeagueOnline(true);
            cout << isLeagueOnline() << endl;
        }
    }
    in.close();
}
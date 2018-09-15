//
// Created by lketc on 9/14/2018.
//

#ifndef LEAGUELAUNCHER_LEAGUECHECKER_H
#define LEAGUELAUNCHER_LEAGUECHECKER_H


class LeagueChecker {
    bool leagueOnline = false;

public:
    bool isLeagueOnline() const;

    void setLeagueOnline(bool leagueOnline);

    void checkSystemProcesses();
};


#endif //LEAGUELAUNCHER_LEAGUECHECKER_H

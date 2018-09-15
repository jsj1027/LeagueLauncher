cmake_minimum_required(VERSION 3.12)
project(LeagueLauncher)

set(CMAKE_CXX_STANDARD 14)

add_executable(LeagueLauncher main.cpp LeagueChecker.cpp LeagueChecker.h)
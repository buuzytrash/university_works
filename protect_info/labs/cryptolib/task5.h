#pragma once

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <random>
#include <cmath>
#include <string>
#include <sstream>
#include <iomanip>
#include "md5.h"
#include "task1.h"
#include "utils.h"

const std::map<std::string, int> voting_options = {{"No", 0}, {"Yes", 1}, {"Abstain", 2}};
const int voting_options_count = voting_options.size();

class Server
{
public:
    Server();
    long long N, D, C;
    std::set<std::string> voted;
    std::vector<std::pair<std::string, long long>> blanks;

private:
    long long P, Q;
};

void vote(const std::string &name, const std::string &choice, Server &server);
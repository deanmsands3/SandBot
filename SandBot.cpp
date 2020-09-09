//
// Created by dean on 9/8/20.
//

#include "SandBot.h"
#include <filesystem>
#include <cpr/cpr.h>
#include <sstream>
#include <fstream>
#include <chrono>
#include <thread>
#include <utility>


SandBot::SandBot(std::string newToken, std::string botURL, std::string botVersion):
    _auth_header(std::string("Authorization: Bot ") + newToken),
    _user_agent(std::string("User-Agent: DiscordBot (") + botURL + ", " + botVersion + ")"){

}

const std::string SandBot::_base_url = "https://discord.com/api";

const std::string &SandBot::getAuthHeader() const {
    return _auth_header;
}

const std::string &SandBot::getUserAgent() const {
    return _user_agent;
}

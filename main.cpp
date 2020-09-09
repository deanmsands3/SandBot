#include <iostream>

#include <nlohmann/json.hpp>
#include <fstream>
#include "SandBot.h"

namespace js = nlohmann;

int main() {
    std::string token;
    {
        js::json token_js;
        std::ifstream is("token.json");
        is>>token_js;
        auto val = token_js["Token"];
        token = val.get<std::string>();
    }
    std::string botURL, botVersion;
    {
        js::json identifier_js;
        std::ifstream is("identifier.json");
        is >> identifier_js;
        botURL = identifier_js["BotURL"].get<std::string>();
        botVersion = identifier_js["BotVersion"].get<std::string>();
    }
    SandBot sandBot(token, botURL, botVersion);
    std::cout<<sandBot.getAuthHeader()<<std::endl;
    std::cout<<sandBot.getUserAgent()<<std::endl;
    return 0;
}

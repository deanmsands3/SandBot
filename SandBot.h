//
// Created by dean on 9/8/20.
//

#ifndef SANDBOT_SANDBOT_H
#define SANDBOT_SANDBOT_H


#include <string>

class SandBot {
private:
    static const std::string _base_url;
    std::string _auth_header;
    std::string _user_agent;
public:
    const std::string &getAuthHeader() const;
    const std::string &getUserAgent() const;
    explicit SandBot(std::string newToken, std::string botURL, std::string botVersion);
};


#endif //SANDBOT_SANDBOT_H

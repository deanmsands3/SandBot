//
// Created by dean on 9/9/20.
//

#ifndef SANDBOT_SNOWFLAKE_H
#define SANDBOT_SNOWFLAKE_H

#include <cinttypes>

class Snowflake {
private:
    std::uint64_t _timestamp;
    std::uint8_t _internal_worker_id;
    std::uint8_t _internal_process_id;
    std::uint16_t _increment;
public:
    Snowflake(std::uint64_t snowflake);
};


#endif //SANDBOT_SNOWFLAKE_H

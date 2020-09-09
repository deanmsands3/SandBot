//
// Created by dean on 9/9/20.
//

#include "Snowflake.h"

Snowflake::Snowflake(std::uint64_t snowflake):
    _timestamp((snowflake >> 22) + 1420070400000),
    _internal_worker_id((snowflake & 0x3E0000) >> 17),
    _internal_process_id((snowflake & 0x1F000) >> 12),
    _increment(snowflake & 0xFFF){
}

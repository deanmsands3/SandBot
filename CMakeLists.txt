cmake_minimum_required(VERSION 3.15)
project(SandBot)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_STANDARD_REQUIRED ON) #...is required...
set(CMAKE_CXX_EXTENSIONS OFF) #...without compiler extensions like gnu++11

include(FindPkgConfig)
find_package(nlohmann_json 3.7.0 REQUIRED)

include(FetchContent)
FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/whoshuu/cpr.git GIT_TAG 5e87cb5f45ac99858f0286dc1c35a6cd27c3bcb9) # the commit hash for 1.5.1
FetchContent_MakeAvailable(cpr)

add_executable(SandBot main.cpp SandBot.cpp SandBot.h Snowflake.cpp Snowflake.h)
target_link_libraries(${PROJECT_NAME} PRIVATE cpr::cpr)
target_link_libraries(${PROJECT_NAME} PRIVATE nlohmann_json::nlohmann_json)

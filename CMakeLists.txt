cmake_minimum_required(VERSION 3.27)
project(sqlite_test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lsqlite3") # also opens lsqlite3

include(FetchContent)
FetchContent_Declare(sqlite3 URL https://www.sqlite.org/2024/sqlite-amalgamation-3450300.zip)
FetchContent_MakeAvailable(sqlite3) # downloads

add_executable(sqlite_test main.cpp
        db.h)

target_link_libraries(sqlite_test PRIVATE sqlite3) # PRIVATE - only in this app

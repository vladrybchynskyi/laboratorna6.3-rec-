cmake_minimum_required(VERSION 3.30.5)

set(This labor6_3test)

set(Sources
   labor6_3test.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    laborw6_3
)

add_test(
    NAME ${This}
    COMMAND ${This}
)

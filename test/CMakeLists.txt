cmake_minimum_required(VERSION 3.8)

set(This TemplateCompTests)

project(${This} C CXX)


set(SOURCES
	test.cpp
)

add_executable(${This} ${SOURCES})

target_link_libraries(${This} PUBLIC
	gtest_main
	TemplateComp
)

add_test(
	NAME ${This}
	COMMAND ${This}
)
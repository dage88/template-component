cmake_minimum_required(VERSION 3.8)

set(This TemplateCompTests)

project(${This} C CXX)

set(HEADERS
	template_mock.hpp
)
set(SOURCES
	template_test.cpp
)

add_executable(${This} ${SOURCES} ${HEADERS})

target_link_libraries(${This} PUBLIC
	gtest_main
	gmock
	TemplateComp
)

#In VS Code, with "Ctrl+Shift+P -> Cmake: Run Tests" these tests will be executed (if CMakeLists.txt in ../ was detected)
add_test(
	NAME ${This}
	COMMAND ${This}
)
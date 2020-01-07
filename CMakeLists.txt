cmake_minimum_required(VERSION 3.7)
project(TryOut)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -rdynamic -O3 -lrt")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} -g -ggdb3")
set(CMAKE_BUILD_TYPE Debug)

set(BOOST_INCLUDEDIR /usr/include/)
set(BOOST_LIBRARYDIR /usr/lib/)

set(BOOST_COMPONENTS system date_time filesystem regex)
find_package(Boost 1.53 REQUIRED ${BOOST_COMPONENTS})

file(GLOB SOURCE_FILES
	"src/*.cpp"
)

set(INCLUDE_FILES
	include/
)

include_directories(
	${INCLUDE_FILES}
)

add_executable(TryOut
	${SOURCE_FILES}
)

set_target_properties(TryOut PROPERTIES LINKER_LANGUAGE CXX)


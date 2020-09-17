cmake_minimum_required (VERSION 3.0.2) 
project(xml2json)
set(CMAKE_CXX_STANDARD 14)

find_package(RapidJSON REQUIRED)
message(STATUS "RapidJSON_FOUND = ${RapidJSON_FOUND}")
message(STATUS "RapidJSON_INCLUDE_DIRS = ${RapidJSON_INCLUDE_DIRS}")

add_subdirectory(src)
add_subdirectory(include)

include_directories(
	${RapidJSON_INCLUDE_DIRS}
	${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(main ${CMAKE_SOURCE_DIR}/xml2json.cpp)
target_link_libraries(main xml2json)

configure_file(cmake/Xml2JsonConfig.cmake.in
	"${CMAKE_INSTALL_PREFIX}/lib/cmake/Xml2Json/Xml2JsonConfig.cmake" @ONLY
)

configure_file(cmake/Xml2JsonConfigVersion.cmake.in
	"${CMAKE_INSTALL_PREFIX}/lib/cmake/Xml2Json/Xml2JsonConfigVersion.cmake" @ONLY
)

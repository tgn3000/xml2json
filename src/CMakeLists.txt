file(GLOB xml2json_cpp "*.cpp")
file(GLOB xml2json_h "*.h")

include_directories(
	${RapidJSON_INCLUDE_DIRS}
	${CMAKE_CURRENT_SOURCE_DIR}/../include
)

add_library(xml2json SHARED ${xml2json_cpp})
set_target_properties(xml2json PROPERTIES
    INSTALL_RPATH_USE_LINK_PATH TRUE
    CLEAN_DIRECT_OUTPUT 1
    COMPILE_FLAGS "-fvisibility=hidden"
)

install(TARGETS xml2json DESTINATION lib)

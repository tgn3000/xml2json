file(GLOB xml2json_cpp "*.cpp")
file(GLOB xml2json_h "*.h")

include_directories(
	${RapidJSON_INCLUDE_DIRS}
	${CMAKE_CURRENT_SOURCE_DIR}/../include
)

add_library(xmljson SHARED ${xml2json_cpp})
set_target_properties(xmljson PROPERTIES
    INSTALL_RPATH_USE_LINK_PATH TRUE
    CLEAN_DIRECT_OUTPUT 1
    COMPILE_FLAGS "-fvisibility=hidden"
)

install(TARGETS xmljson DESTINATION lib)

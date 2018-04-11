
function(init_cmake)
	cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
	cmake_policy(VERSION 2.8)
	set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")
	set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/")
endfunction(init_cmake)
init_cmake()

set(NAME Meta)

project(${NAME})

include_directories(src)

#Preprocessor
IF(WIN32)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DNOMINMAX -D_USE_MATH_DEFINES -DVK_USE_PLATFORM_WIN32_KHR")
	set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -W3")
ENDIF()

IF(MSVC)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /EHsc")
	add_compile_options("/std:c++latest")
ENDIF(MSVC)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/")

add_definitions(-DASSETS_DIR=\"${CMAKE_SOURCE_DIR}/data/\")

add_subdirectory(src)
add_subdirectory(tests)
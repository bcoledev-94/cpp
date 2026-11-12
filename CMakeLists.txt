cmake_minimum_required(VERSION 3.20)
project(first_project)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(spdlog CONFIG REQUIRED)

file(GLOB SOURCE_FILES CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/utils/cmath/*.cpp"
)

add_executable(first_project main.cpp ${SOURCE_FILES})
target_link_libraries(first_project PRIVATE spdlog::spdlog)

# Shared library-style sources (e.g. shapes.cpp) that scripts depend on
file(GLOB LIBRARY_FILES CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/libraries/*.cpp"
)

file(GLOB SCRIPT_FILES CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/scripts/*.cpp"
)

file(GLOB SCRIPT_FILES CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/chapter_quizzes/7/*.cpp"
)

foreach(script_file IN LISTS SCRIPT_FILES)
    get_filename_component(script_name "${script_file}" NAME_WE)
    add_executable("${script_name}" "${script_file}" ${LIBRARY_FILES})
    target_include_directories("${script_name}" PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/libraries")
    target_link_libraries("${script_name}" PRIVATE spdlog::spdlog)
endforeach()
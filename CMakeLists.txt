cmake_minimum_required(VERSION 3.1)
project(param)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

# libigl
option(LIBIGL_WITH_OPENGL             "Use OpenGL"        ON)
option(LIBIGL_WITH_OPENGL_GLFW        "Use GLFW"          ON)
option(LIBIGL_WITH_TRIANGLE           "Use Triangle"      ON)
option(LIBIGL_WITH_CGAL               "Use CGAL"          ON)
option(LIBIGL_WITH_OPENGL_GLFW_IMGUI  "Use ImGui"         ON)
option(LIBIGL_WITH_PREDICATES         "Use Predicates"    ON)

find_package(LIBIGL REQUIRED QUIET)

# Add your project files
file(GLOB SRCFILES *.cpp)
add_executable(${PROJECT_NAME}_bin ${SRCFILES})
target_link_libraries(${PROJECT_NAME}_bin igl::core igl::cgal igl::opengl_glfw_imgui igl::opengl_glfw igl::predicates)

cmake_minimum_required(VERSION 3.26)
project(Pastel LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(assimp        CONFIG REQUIRED)
find_package(glad          CONFIG REQUIRED)
find_package(glfw3         CONFIG REQUIRED)
find_package(glm           CONFIG REQUIRED)
find_package(imgui         CONFIG REQUIRED)
find_package(imguizmo      CONFIG REQUIRED)
find_package(nameof        CONFIG REQUIRED)
find_package(nlohmann_json CONFIG REQUIRED)
find_package(OpenAL        CONFIG REQUIRED)
find_package(spdlog        CONFIG REQUIRED)

add_library(Pastel STATIC
    Sources/Test.cpp
    Sources/Test.h
)

target_link_libraries(Pastel PRIVATE assimp::assimp)
target_link_libraries(Pastel PRIVATE glad::glad)
target_link_libraries(Pastel PRIVATE glfw)
target_link_libraries(Pastel PRIVATE glm::glm)
target_link_libraries(Pastel PRIVATE imgui::imgui)
target_link_libraries(Pastel PRIVATE imguizmo::imguizmo)
target_link_libraries(Pastel PRIVATE nameof::nameof)
target_link_libraries(Pastel PRIVATE nlohmann_json::nlohmann_json)
target_link_libraries(Pastel PRIVATE OpenAL::OpenAL)
target_link_libraries(Pastel PRIVATE spdlog::spdlog)
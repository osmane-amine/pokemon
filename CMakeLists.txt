cmake_minimum_required(VERSION 3.28)
project(pokemon)

set(CMAKE_CXX_STANDARD 17)

add_executable(pokemon
        src/main.cpp
        src/Pokemon.cpp
        inc/Pokemon.h
        inc/main.h
        src/Pokemon_Vector.cpp
        inc/Pokemon_Vector.h
        inc/setup.h
        src/Pokedex.cpp
        inc/Pokedex.h
)
target_link_libraries(pokemon
        sfml-graphics
        sfml-window
        sfml-system
        sfml-audio
)
cmake_minimum_required(VERSION 3.21)
project(C_chapters C)

set(CMAKE_C_STANDARD 11)

add_executable(C_chapters
        Animal-akinator/main.c
        calculator/main.c
        char-case-converter/main.c
        random-generation-game/main.c
        tourist-attraction-charge-calc/main.c
        weird-calculator-thing-ig/main.c)

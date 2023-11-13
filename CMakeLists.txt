cmake_minimum_required(VERSION 3.25)
project(Integration_calculator C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Integration_calculator
        main.c
        src/im_text.c
        src/menu_choice.c
        src/test_rpn.c
        src/user_menu.c)

add_library(Integration_calculator_lib
        src/im_text.c
        src/menu_choice.c
        src/test_rpn.c
        src/user_menu.c
        include/im_text.h
        include/menu_choice.h
        include/test_rpn.h
        include/text_data.h
        include/user_menu.h)

target_link_libraries(Integration_calculator Integration_calculator_lib)

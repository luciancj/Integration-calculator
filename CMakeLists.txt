cmake_minimum_required(VERSION 3.25)
project(Integration_calculator C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Integration_calculator
        im_text.c
        im_text.h
        main.c
        text_data.h
        user_menu.c
        user_menu.h menu_choice.c menu_choice.h menu_choice.h)

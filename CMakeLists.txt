cmake_minimum_required(VERSION 3.25)
project(Integration_calculator C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Integration_calculator
        src/im_text.c
        include/im_text.h
        main.c
        include/text_data.h
        src/user_menu.c
        include/user_menu.h src/menu_choice.c include/menu_choice.h include/menu_choice.h src/test_rpn.c src/test_rpn.c include/test_rpn.h include/test_rpn.h)

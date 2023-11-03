#include "user_menu.h"
#include "text_data.h"

const char *menu[] = {
    "╔══════════════════════════════════════╗",
    "║                Welcome               ║",
    "╠══════════════════════════════════════╣",
    "║           Choose an option:          ║",
    "║                                      ║",
    "║   \x1b[32m/i - Interactive mode\x1b[0m              ║",
    "║   \x1b[32m/p - Parameter mode\x1b[0m                ║",
    "║                                      ║",
    "╚══════════════════════════════════════╝"
};
struct TextData userMenu = {menu, 9};

const char *parameter_mode[] = {
    "╔══════════════════════════════════════╗",
    "║        Parameter mode - Choose:      ║",
    "╠══════════════════════════════════════╣",
    "║                                      ║",
    "║   \x1b[32m/rf - Regula Falsi.\x1b[0m                ║",
    "║   \x1b[32m/rr - The Right Riemann Sum\x1b[0m        ║",
    "║   \x1b[32m/lr - The Left Riemann Sum\x1b[0m         ║",
    "║   \x1b[32m/mr - The Midpoint Riemann Sum\x1b[0m     ║",
    "║   \x1b[32m/tr - Trapezoidal Rule\x1b[0m             ║",
    "║   \x1b[32m/sm - Secant Method.\x1b[0m               ║",
    "║                                      ║",
    "╚══════════════════════════════════════╝"
};
struct TextData parameterMode = {parameter_mode, 12};

const char *interactive_mode[] = {
    "╔══════════════════════════════════════╗",
    "║      Interactive mode - Choose:      ║",
    "╠══════════════════════════════════════╣",
    "║                                      ║",
    "║   \x1b[32m/rf - Regula Falsi.\x1b[0m                ║",
    "║   \x1b[32m/rr - The Right Riemann Sum\x1b[0m        ║",
    "║   \x1b[32m/lr - The Left Riemann Sum\x1b[0m         ║",
    "║   \x1b[32m/mr - The Midpoint Riemann Sum\x1b[0m     ║",
    "║   \x1b[32m/tr - Trapezoidal Rule\x1b[0m             ║",
    "║   \x1b[32m/sm - Secant Method.\x1b[0m               ║",
    "║                                      ║",
    "╚══════════════════════════════════════╝"
};
struct TextData interactiveMode = {interactive_mode, 12};

const char *ask_file_name[] = {
    "╔══════════════════════════════════════╗",
    "║ Type in the filename:                ║",
    "╚══════════════════════════════════════╝"
};
struct TextData askFileName = {ask_file_name, 3};

const char *output_menu[] = {
        "╔════════════════════════╦══════════════════╗",
        "║ DESCRIPTION            ║ VALUE            ║",
        "╠════════════════════════╬══════════════════╣",
        "║ Segments               ║ \033[0;32m100\033[0m              ║",
        "╠════════════════════════╬══════════════════╣",
        "║ Area                   ║ \033[0;32m0.67\033[0m             ║",
        "╠════════════════════════╬══════════════════╣",
        "║ x_min                  ║ \033[0;32m0.00\033[0m             ║",
        "╠════════════════════════╬══════════════════╣",
        "║ x_max                  ║ \033[0;32m1.00\033[0m             ║",
        "╠════════════════════════╬══════════════════╣",
        "║ x_mean                 ║ \033[0;32m0.50\033[0m             ║",
        "╠════════════════════════╬══════════════════╣",
        "║ x_delta_min            ║ \033[0;32m0.00\033[0m             ║",
        "╠════════════════════════╬══════════════════╣",
        "║ x_delta_max            ║ \033[0;32m0.01\033[0m             ║",
        "╠════════════════════════╬══════════════════╣",
        "║ y_min                  ║ \033[0;32m0.00\033[0m             ║",
        "╠════════════════════════╬══════════════════╣",
        "║ y_max                  ║ \033[0;32m1.00\033[0m             ║",
        "╠════════════════════════╬══════════════════╣",
        "║ y_mean                 ║ \033[0;32m0.66\033[0m             ║",
        "╠════════════════════════╬══════════════════╣",
        "║ y_delta_min            ║ \033[0;32m-0.02\033[0m            ║",
        "╠════════════════════════╬══════════════════╣",
        "║ y_delta_max            ║ \033[0;32m0.00\033[0m             ║",
        "╚════════════════════════╩══════════════════╝"
};
struct TextData outputMenu = {output_menu, 27};
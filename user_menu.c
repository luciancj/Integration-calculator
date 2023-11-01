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
    "║   \x1b[32m/rf - Regula falsi.\x1b[0m                ║",
    "║   \x1b[32m/rr - The Right Riemann Sum\x1b[0m        ║",
    "║   \x1b[32m/lr - The Left Riemann Sum\x1b[0m         ║",
    "║   \x1b[32m/mr - The Midpoint Riemann Sum\x1b[0m     ║",
    "║   \x1b[32m/tr - Trapezoidal\x1b[0m                  ║",
    "║                                      ║",
    "╚══════════════════════════════════════╝"
};
struct TextData parameterMode = {parameter_mode, 11};

const char *interactive_mode[] = {
    "╔══════════════════════════════════════╗",
    "║        Interactive mode - Choose:      ║",
    "╠══════════════════════════════════════╣",
    "║                                      ║",
    "║   \x1b[32m/rf - Regula falsi.\x1b[0m                ║",
    "║   \x1b[32m/rr - The Right Riemann Sum\x1b[0m        ║",
    "║   \x1b[32m/lr - The Left Riemann Sum\x1b[0m         ║",
    "║   \x1b[32m/mr - The Midpoint Riemann Sum\x1b[0m     ║",
    "║   \x1b[32m/tr - Trapezoidal\x1b[0m                  ║",
    "║                                      ║",
    "╚══════════════════════════════════════╝"
};
struct TextData interactiveMode = {interactive_mode, 11};

const char *ask_file_name[] = {
    "╔══════════════════════════════════════╗",
    "║ Type in the filename:                ║",
    "╚══════════════════════════════════════╝"
};
struct TextData askFileName = {ask_file_name, 3};
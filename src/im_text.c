#include "include/im_text.h"
#include "include/text_data.h"

const char *integration_calculator[] = {
	"\x1B[32m┳            •      ┏┓  ┓   ┓\x1B[0m",
	"\x1B[32m┃┏┓╋┏┓┏┓┏┓┏┓╋┓┏┓┏┓  ┃ ┏┓┃┏┓┏┃┏┓╋┏┓┏┓\x1B[0m",
	"\x1B[32m┻┛┗┗┗ ┗┫┛ ┗┻┗┗┗┛┛┗  ┗┛┗┻┗┗┗┻┗┗┻┗┗┛┛\x1B[0m",
	"\x1B[32m       ┛\x1B[0m"
};
struct TextData integrationCalculator = {integration_calculator, 4};

const char *regula_falsi[] = {
        "\x1B[32m┳┓      ┓    ┏┓  ┓ •\x1B[0m",
        "\x1B[32m┣┫┏┓┏┓┓┏┃┏┓  ┣ ┏┓┃┏┓\x1B[0m",
        "\x1B[32m┛┗┗ ┗┫┗┻┗┗┻  ┻ ┗┻┗┛┗\x1B[0m",
        "\x1B[32m     ┛              \x1B[0m"
};
struct TextData regulaFalsi = {regula_falsi, 4};

const char *right_riemann_sum[] = {
	"\x1B[32m┏┳┓┓     ┳┓•  ┓    ┳┓•             ┏┓\x1B[0m",
	"\x1B[32m ┃ ┣┓┏┓  ┣┫┓┏┓┣┓╋  ┣┫┓┏┓┏┳┓┏┓┏┓┏┓  ┗┓┓┏┏┳┓\x1B[0m",
	"\x1B[32m ┻ ┛┗┗   ┛┗┗┗┫┛┗┗  ┛┗┗┗ ┛┗┗┗┻┛┗┛┗  ┗┛┗┻┛┗┗\x1B[0m",
	"\x1B[32m             ┛\x1B[0m"
};
struct TextData rightRiemannSum = {right_riemann_sum, 3};

const char *left_riemann_sum[] = {
	"\x1B[32m┏┳┓┓     ┓   ┏   ┳┓•             ┏┓\x1B[0m",
	"\x1B[32m ┃ ┣┓┏┓  ┃ ┏┓╋╋  ┣┫┓┏┓┏┳┓┏┓┏┓┏┓  ┗┓┓┏┏┳┓\x1B[0m",
	"\x1B[32m ┻ ┛┗┗   ┗┛┗ ┛┗  ┛┗┗┗ ┛┗┗┗┻┛┗┛┗  ┗┛┗┻┛┗┗\x1B[0m"
};
struct TextData leftRiemannSum = {left_riemann_sum, 3};

const char *midpoint_riemann_sum[] = {
	"\x1B[32m┏┳┓┓     ┳┳┓• ┓    •     ┳┓•             ┏┓\x1B[0m",
	"\x1B[32m ┃ ┣┓┏┓  ┃┃┃┓┏┫┏┓┏┓┓┏┓╋  ┣┫┓┏┓┏┳┓┏┓┏┓┏┓  ┗┓┓┏┏┳┓\x1B[0m",
	"\x1B[32m ┻ ┛┗┗   ┛ ┗┗┗┻┣┛┗┛┗┛┗┗  ┛┗┗┗ ┛┗┗┗┻┛┗┛┗  ┗┛┗┻┛┗┗\x1B[0m"
};
struct TextData midpointRiemannSum = {midpoint_riemann_sum, 4};

const char *trapezoidal_rule[] = {
	"\x1B[32m┏┳┓           • ┓  ┓  ┳┓  ┓\x1B[0m",
	"\x1B[32m ┃ ┏┓┏┓┏┓┏┓┓┏┓┓┏┫┏┓┃  ┣┫┓┏┃┏┓\x1B[0m",
	"\x1B[32m ┻ ┛ ┗┻┣┛┗ ┗┗┛┗┗┻┗┻┗  ┛┗┗┻┗┗\x1B[0m",
	"\x1B[32m       ┛\x1B[0m"
};
struct TextData trapezoidalRule = {trapezoidal_rule, 4};

const char *secant_method[] = {
        "\x1B[32m┏┓          ┳┳┓   ┓    ┓\x1B[0m",
        "\x1B[32m┗┓┏┓┏┏┓┏┓╋  ┃┃┃┏┓╋┣┓┏┓┏┫\x1B[0m",
        "\x1B[32m┗┛┗ ┗┗┻┛┗┗  ┛ ┗┗ ┗┛┗┗┛┗┻\x1B[0m"
};
struct TextData secantMethod = {secant_method, 3};
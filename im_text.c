#include "im_text.h"
#include "text_data.h"

const char *integration_calculator[] = {
	"┳            •      ┏┓  ┓   ┓",
	"┃┏┓╋┏┓┏┓┏┓┏┓╋┓┏┓┏┓  ┃ ┏┓┃┏┓┏┃┏┓╋┏┓┏┓",
	"┻┛┗┗┗ ┗┫┛ ┗┻┗┗┗┛┛┗  ┗┛┗┻┗┗┗┻┗┗┻┗┗┛┛",
	"       ┛"
};
struct TextData integrationCalculator = {integration_calculator, 4};

const char *regula_falsi[] = {
	"┳┓      ┓    ┏  ┓ •",
	"┣┫┏┓┏┓┓┏┃┏┓  ╋┏┓┃┏┓",
	"┛┗┗ ┗┫┗┻┗┗┻  ┛┗┻┗┛┗",
	"     ┛"
};
struct TextData regulaFalsi = {regula_falsi, 4};

const char *right_riemann_sum[] = {
	"┏┳┓┓     ┳┓•  ┓    ┳┓•             ┏┓",
	" ┃ ┣┓┏┓  ┣┫┓┏┓┣┓╋  ┣┫┓┏┓┏┳┓┏┓┏┓┏┓  ┗┓┓┏┏┳┓",
	" ┻ ┛┗┗   ┛┗┗┗┫┛┗┗  ┛┗┗┗ ┛┗┗┗┻┛┗┛┗  ┗┛┗┻┛┗┗",
	"             ┛"
};
struct TextData rightRiemannSum = {right_riemann_sum, 3};

const char *left_riemann_sum[] = {
	"┏┳┓┓     ┓   ┏   ┳┓•             ┏┓",
	" ┃ ┣┓┏┓  ┃ ┏┓╋╋  ┣┫┓┏┓┏┳┓┏┓┏┓┏┓  ┗┓┓┏┏┳┓",
	" ┻ ┛┗┗   ┗┛┗ ┛┗  ┛┗┗┗ ┛┗┗┗┻┛┗┛┗  ┗┛┗┻┛┗┗"
};
struct TextData leftRiemannSum = {left_riemann_sum, 3};

const char *midpoint_riemann_sum[] = {
	"┏┳┓┓     ┳┳┓• ┓    •     ┳┓•             ┏┓",
	" ┃ ┣┓┏┓  ┃┃┃┓┏┫┏┓┏┓┓┏┓╋  ┣┫┓┏┓┏┳┓┏┓┏┓┏┓  ┗┓┓┏┏┳┓",
	" ┻ ┛┗┗   ┛ ┗┗┗┻┣┛┗┛┗┛┗┗  ┛┗┗┗ ┛┗┗┗┻┛┗┛┗  ┗┛┗┻┛┗┗"
};
struct TextData midpointRiemannSum = {midpoint_riemann_sum, 4};

const char *trapezoidal_rule[] = {
	"┏┳┓           • ┓  ┓  ┳┓  ┓",
	" ┃ ┏┓┏┓┏┓┏┓┓┏┓┓┏┫┏┓┃  ┣┫┓┏┃┏┓",
	" ┻ ┛ ┗┻┣┛┗ ┗┗┛┗┗┻┗┻┗  ┛┗┗┻┗┗",
	"       ┛"
};
struct TextData trapezoidalRule = {trapezoidal_rule, 4};

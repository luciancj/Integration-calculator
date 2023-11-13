CFLAGS = -Wall -Wextra -std=c11

all: Integration_calculator

Integration_calculator: main.c src/im_text.c src/menu_choice.c src/test_rpn.c src/user_menu.c
$(CC) $(CFLAGS) -o Integration_calculator main.c src/im_text.c src/menu_choice.c src/test_rpn.c src/user_menu.c

test: Integration_calculator
# Add commands to run tests here
./Integration_calculator

clean:
rm -f Integration_calculator

.PHONY: all test clean

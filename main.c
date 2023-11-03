#include "stdio.h"
#include "user_menu.h"
#include "im_text.h"
#include "text_data.h"
#include "stdlib.h"
#include "menu_choice.h"

void printGreenText(struct TextData data) {
	for (int i = 0; i < data.numRows; i++) {
		printf("\033[0;32m%s\033[0m\n", data.text[i]);
	}
}


int main() {
    mainMenu();
    return 0;
}

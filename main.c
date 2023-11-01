#include "stdio.h"
#include "user_menu.h"
#include "im_text.h"
#include "text_data.h"

void printStringRow(struct TextData data) {
	for (int i = 0; i < data.numRows; i++) {
		printf("%s\n", data.text[i]);
	}
}

void printGreenText(struct TextData data) {
	for (int i = 0; i < data.numRows; i++) {
		printf("\033[0;32m%s\033[0m\n", data.text[i]);
	}
}


int main() {
	printStringRow(integrationCalculator);
	return 0;
}

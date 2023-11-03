#include "stdio.h"
#include "stdlib.h"
#include "menu_choice.h"
#include "user_menu.h"
#include "text_data.h"
#include "im_text.h"
#include "string.h"

void printStringRow(struct TextData data) {
    for (int i = 0; i < data.numRows; i++) {
        printf("%s\n", data.text[i]);
    }
}

void mainMenu() {
    printStringRow(integrationCalculator);
    char choice = '\0';
    int c;

    while (1) {
        printStringRow(userMenu);
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        while ((c = getchar()) != '\n' && c != EOF);

        if (choice == 'i') {
            system("clear");
            handleInteractiveMenu();
            break;
        } else if (choice == 'p') {
            system("clear");
            handleParameterMenu();
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }
}



void handleInteractiveMenu() {
    char choice[3] = {'\0', '\0', '\0'};

    while (1) {
        printStringRow(interactiveMode);
        printf("Enter an option in interactive mode: ");
        scanf("%s", choice);

        if (strcmp(choice, "rf") == 0) {
            system("clear");
            printStringRow(regulaFalsi);
            break;
        } else if (strcmp(choice, "rr") == 0) {
            system("clear");
            printStringRow(rightRiemannSum);
            break;
        } else if (strcmp(choice, "lr") == 0) {
            system("clear");
            printStringRow(leftRiemannSum);
            break;
        } else if (strcmp(choice, "mr") == 0) {
            system("clear");
            printStringRow(midpointRiemannSum);
            break;
        } else if (strcmp(choice, "tr") == 0) {
            system("clear");
            printStringRow(trapezoidalRule);
            break;
        } else if (strcmp(choice, "sm") == 0) {
            system("clear");
            printStringRow(secantMethod);
            break;
        } else if (strcmp(choice, "q") == 0) {
            system("clear");
            printStringRow(userMenu);
            break;
        } else {
            system("clear");
            printf("Invalid choice. Please try again.\n");
        }
    }
}


void handleParameterMenu() {
    char choice[3] = {'\0', '\0', '\0'};

    while (1) {
        printStringRow(interactiveMode);
        printf("Enter an option in interactive mode: ");
        scanf("%s", choice);

        if (strcmp(choice, "rf") == 0) {
            system("clear");
            printStringRow(regulaFalsi);
            break;
        } else if (strcmp(choice, "rr") == 0) {
            system("clear");
            printStringRow(rightRiemannSum);
            break;
        } else if (strcmp(choice, "lr") == 0) {
            system("clear");
            printStringRow(leftRiemannSum);
        } else if (strcmp(choice, "mr") == 0) {
            system("clear");
            printStringRow(midpointRiemannSum);
            break;
        } else if (strcmp(choice, "tr") == 0) {
            system("clear");
            printStringRow(trapezoidalRule);
            break;
        } else if (strcmp(choice, "sm") == 0) {
            system("clear");
            printStringRow(secantMethod);
            break;
        } else if (strcmp(choice, "q") == 0) {
            system("clear");
            printStringRow(userMenu);
            break;
        } else {
            system("clear");
            printf("Invalid choice. Please try again.\n");
        }
    }
}

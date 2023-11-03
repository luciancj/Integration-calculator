#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "test_rpn.h"

#define STACK_SIZE 100

char stack[STACK_SIZE][100];
int top = -1;

void push(char *str) {
    if (top < STACK_SIZE - 1) {
        strcpy(stack[++top], str);
    } else {
        printf("Stack overflow!\n");
        exit(1);
    }
}

char* pop() {
    if (top >= 0) {
        return stack[top--];
    } else {
        printf("Stack underflow!\n");
        exit(1);
    }
}

int is_operator(char token) {
    return (token == '+' || token == '-' || token == '*' || token == '/' || token == '^');
}

int is_function(char *token) {
    return (strcmp(token, "sqrt") == 0 || strcmp(token, "sin") == 0 || strcmp(token, "cos") == 0 ||
            strcmp(token, "tan") == 0 || strcmp(token, "asin") == 0 || strcmp(token, "acos") == 0 ||
            strcmp(token, "atan") == 0 || strcmp(token, "log") == 0 || strcmp(token, "exp") == 0 ||
            strcmp(token, "sinh") == 0 || strcmp(token, "cosh") == 0 || strcmp(token, "tanh") == 0);
}

void print_infix_expression(char *expression) {
    char *token = strtok(expression, " ");
    while (token != NULL) {
        if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1]))) {
            push(token);
        } else if (is_operator(token[0])) {
            char b[100], a[100];
            strcpy(b, pop());
            strcpy(a, pop());
            char infix[100];
            sprintf(infix, "(%s %s %s)", a, token, b);
            push(infix);
        } else if (is_function(token)) {
            char operand[100];
            strcpy(operand, pop());
            char infix[100];
            if (strcmp(token, "sqrt") == 0) {
                sprintf(infix, "sqrt(%s)", operand);
            } else {
                sprintf(infix, "%s(%s)", token, operand);
            }
            push(infix);
        } else {
            printf("Invalid token: %s\n", token);
            exit(1);
        }
        token = strtok(NULL, " ");
    }

    if (top == 0) {
        printf("Infix Expression: %s\n", stack[top]);
    } else {
        printf("Invalid expression!\n");
        exit(1);
    }
}
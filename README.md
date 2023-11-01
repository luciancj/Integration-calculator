# Integration-calculator

## Objective:
The goal of Homework 2 is to develop a menu-driven C program for numerical integration of user-defined functions. This program is designed to handle various types of functions, including polynomials, common mathematical functions (such as sine, logarithm, and exponential), and arbitrary combinations of these functions.

## Program Description:
The integration calculator program is designed to provide an easy-to-use interface for users to perform numerical integration on a wide range of functions. The program is menu-driven and offers two main modes: Interactive mode and Parameter mode. Let's dive into the details of these modes and their functionality.

## Interactive Mode:
Interactive mode is designed for users who want to interactively input functions and integration parameters. Users can choose from the following integration methods:

- Regula falsi
- The Right Riemann Sum
- The Left Riemann Sum
- The Midpoint Riemann Sum
- Trapezoidal Rule

Each of these integration methods can be selected by entering the corresponding command, such as "/rf" for Regula falsi. In this mode, the program will prompt the user for the function and integration parameters, and it will calculate and display the result.

## Parameter Mode:
Parameter mode is intended for users who prefer to input multiple functions and parameters in one go. Users can choose from the same integration methods as in Interactive mode. This mode is suitable for performing integration on multiple functions sequentially.

## Program Output:
The program provides clear and structured output, guiding the user through the integration process. It uses a combination of text-based menus, instructions, and colorful text to enhance the user experience. For example, green text is used to highlight important information in the menus.

## How to Use:

1. Start the program and choose your mode.
2. In Interactive mode, select an integration method and input the function and parameters as prompted.
3. In Parameter mode, choose the integration method and provide multiple functions and parameters.
4. The program will perform the integration and display the results.

## Customer's Needs:
The program's specification ensures that if two different programmers independently develop this program based on the provided documentation, their programs should have almost identical behavior and capabilities. This means that the specification covers all possible input/output scenarios and the states of the menu.

## Additional Information:
The program uses data structures to store text-based information, including menus and messages. The main source code files include `main.c`, `im_text.h`, `im_text.c`, `text_data.h`, `user_menu.h`, and `user_menu.c`.

In summary, the project is a comprehensive numerical integration calculator program with a user-friendly interface, designed to meet the specific needs of the customer. It provides interactive and parameter-based modes for performing integration on various functions and offers clear and structured output to guide users through the process.

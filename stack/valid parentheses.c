#include <stdbool.h>

bool isValid(char* s) {
    int len = strlen(s);
    char stack[len]; // use a stack of max size = length of s
    int top = -1;   // stack pointer

    int i = 0;
    while (s[i] != '\0') {
        char c = s[i];
        if (c == '(' || c == '{' || c == '[') {
            top++;
            stack[top] = c; // push
        } else if (c == ')' || c == '}' || c == ']') {
            if (top == -1) return false; // nothing to match
            char open = stack[top];
            if ((c == ')' && open != '(') ||
                (c == '}' && open != '{') ||
                (c == ']' && open != '[')) {
                return false; // mismatch
            }
            top--; // pop
        }
        i++;
    }

    return top == -1; // valid if stack is empty
}
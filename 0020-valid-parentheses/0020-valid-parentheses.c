#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {
    int len = strlen(s);
    
    // Odd length strings cannot be balanced
    if (len % 2 != 0) {
        return false;
    }

    char stack[len];
    int top = -1;

    for (int i = 0; i < len; i++) {
        char c = s[i];

        // Push opening brackets onto the stack
        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        } 
        // For closing brackets, check if stack is empty or top doesn't match
        else {
            if (top == -1) return false;
            
            char topChar = stack[top--];
            if ((c == ')' && topChar != '(') ||
                (c == '}' && topChar != '{') ||
                (c == ']' && topChar != '[')) {
                return false;
            }
        }
    }

    // If the stack is empty, all brackets were validly closed
    return top == -1;
}
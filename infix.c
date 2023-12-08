#include <stdio.h>
#include <ctype.h>
#include <string.h> 

int top = -1;
char stack[20];

void push(char);
int pop();
int priority(char);

int main() {
    push('(');
    char infix[20], *p;
    printf("Enter the infix expression :\n");
    scanf("%s", infix);
    p = infix;
    printf("\nIt's postfix expression is :\n");
    while(*p != '\0') {
        if(isalnum(*p))
            printf("%c ", *p);
        else if(*p == '(')
            push(*p)

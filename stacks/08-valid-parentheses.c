#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char stack[100];
    int top = -1;

    printf("Enter parentheses: ");
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        char ch = str[i];

        if (ch == '(' || ch == '[' || ch == '{')
        {
            top++;
            stack[top] = ch;
        }
        else if (ch == ')' || ch == ']' || ch == '}')
        {
            if (top == -1)
            {
                printf("Invalid Parentheses\n");
                return 0;
            }

            char open = stack[top];
            top--;

            if ((ch == ')' && open != '(') ||
                (ch == ']' && open != '[') ||
                (ch == '}' && open != '{'))
            {
                printf("Invalid Parentheses\n");
                return 0;
            }
        }
    }

    if (top == -1)
    {
        printf("Valid Parentheses\n");
    }
    else
    {
        printf("Invalid Parentheses\n");
    }

    return 0;
}
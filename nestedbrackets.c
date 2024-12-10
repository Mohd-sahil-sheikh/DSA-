#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int top = -1;
char str[10];
void push(char symbol)
{
    top++;
    str[top] = symbol;
}
int match_bracket(char a, char b)
{
    if (a == '[' && b == ']')

        return 1;

    if (a == '{' && b == '}')

        return 1;

    if (a == '(' && b == ')')

        return 1;

   else 
   {
    return 0;
   }
}



bool isvalid()
{
   for (int i = 0; i <= top/2; i++)
    {
        char a = str[i];
        char b = str[top - i];
        printf("%c%c",a,b);
        if (!match_bracket(a, b))
            return false;
    }
    return true;

}


int main()
{
    char a;
    char b;

    printf("enter the expression\n");
    scanf("%s", str);
    int i;
    char symbol;
    for (i = 0; i < strlen(str); i++)
    {
        symbol = str[i];
        if (symbol == '(' || symbol == '{' || symbol == '[')
        {

            push(symbol);
        }
    }
    for (i = 0; i < strlen(str); i++)
    {
        symbol = str[i];
        if (symbol == ')' || symbol == '}' || symbol == ']')
        {
            push(symbol);
        }
    }
    

    if (isvalid())
    {
        printf("valid\n");
    }
    else
    {
        printf("invalid\n");
    }

    return 0;
}
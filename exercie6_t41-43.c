/*
Input:
<h1> This is a heading </h1>

Output:
This is a heading

Input:
<span> This is a heading2 </span>

Output:
This is a heading2
*/

#include <stdio.h>
#include <string.h>

void parser(char str[])
{
    int index = 0;
    int in = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (str[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            str[index] = str[i];
            index++;
        }
    }
    str[index] = '\0';

    while (str[0] == ' ')
    {
        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = str[i + 1];
        }
    }

    while (str[strlen(str) - 1] == ' ')
    {
        str[strlen(str) - 1] = '\0';//"\0" is at strlen(str)
    }
}
int main()
{
    char string[] = "<h1>            this is a heading        </h1>";
    parser(string);
    printf("The parsed string is ~~%s~~", string);
    return 0;
}

#include <stdio.h>
int main()
{
    int a;
    printf("Enter 0-exit ; 1 - km to miles,2 - inches to foot, 3- cm to inches\n ,4- pound to kg,5-iches to metre\n");
    do
    {
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            float km, mile;
            printf("Enter km = ");
            scanf("%f", &km);
            mile = 0.621 * km;
            printf("resulted mile = %f\n", mile);
            break;
        case 2:
            float inch, feet;
            printf("Enter inch = ");
            scanf("%f", &inch);
            feet = 0.083 * inch;
            printf("resulted feet = %f\n", feet);

            break;
        case 3:
            float cm, inch1;
            printf("Enter cm = ");
            scanf("%f", &cm);
            inch1 = 0.393 * cm;
            printf("resulted inch = %f\n", inch1);

            break;
        case 4:
            float pound, kg;
            printf("Enter pound = ");
            scanf("%f", &pound);
            kg = 0.453 * pound;
            printf("resulted kg = %f\n", kg);

            break;
        case 5:
            float inch2, metre;
            printf("Enter inch = ");
            scanf("%f", &inch2);
            metre = 0.0254 * inch2;
            printf("resulted metre = %f\n", metre);

            break;

        default:
            goto end;
            break;
        }
    } while (a != 0);
end:
    return 0;
}
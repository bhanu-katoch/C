#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} harry, ravi, shubham;
// struct Student harry, ravi, shubham;

void print()
{
    printf("%s", harry.name);
}

int main()
{
    // struct Student harry, ravi, shubham;

    ////method 1
    // harry.id = 1;
    // ravi.id = 2;
    // shubham.id = 3;
    // harry.marks = 66;
    // ravi.marks = 466;
    // shubham.marks = 46;
    // harry.fav_char = 'p';
    // ravi.fav_char = 'y';
    // shubham.fav_char = 'o';
    // strcpy(harry.name, "Harry Potter student of the year");
    // strcpy(shubham.name, "Shubham Kumar");

    // method 2
    struct Student harry = {1, 100, 'p', "harry"};
    struct Student ravi = {2, 200, 'q', "Ravi kumar"};
    struct Student shubham = {3, 300, 'r', "Shubham kumar"};

    printf("Harry has %d id\n", harry.id);
    printf("Harry's name is: %s\n", harry.name);
    printf("Harry got %d marks\n", harry.marks);
    printf("Harry has %c as favourite character\n\n", harry.fav_char);

    printf("ravi has %d id\n", ravi.id);
    printf("ravi's name is: %s\n", ravi.name);
    printf("ravi got %d marks\n", ravi.marks);
    printf("ravi has %c as favourite character\n\n", ravi.fav_char);

    printf("shubham has %d id\n", shubham.id);
    printf("shubham's name is: %s\n", shubham.name);
    printf("shubham got %d marks\n", shubham.marks);
    printf("shubham has %c as favourite character\n\n", shubham.fav_char);

    return 0;
}
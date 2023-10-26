#include <stdio.h>

int main()
{
    // Single line comments : Compiler will ignore this
    /*
    This is a Multi
    line
    comments
    */
    //    int, float, char

    int a1 = 7;                 // 2 to 4 bytes depending on the architecture
    unsigned short integer = 8; // 2 byte (16 bits)
    long integer1 = 8;          // 4 byte (32 bits)
    short integer2 = 8;         // 2 byte (16 bits)

    float b1 = 8.0;                    // 4 byte (32 bits) |---| 6 decimal places precision
    double myfloat1 = 7.45;            // 8 byte (64 bits)|---| 15 decimal places precision
    long double myfloat2 = 7.45454545; // 10 byte (80 bits)|---| 19 decimal places precision

    char c1 = 't'; // 1 byte (8 bits)

    printf("Hello World%c", c1);
    printf("The size taken by int is %d\n", sizeof(int));
    printf("The size taken by unsigned int is %d\n", sizeof(unsigned int));
    printf("The size taken by float is %d\n", sizeof(float));
    printf("The size taken by double is %d\n", sizeof(double));
    printf("The size taken by long double is %d\n", sizeof(long double));

    printf("\n***************** Rules for creating variables **************************");
    int harryName;   // This is variable declaration
    harryName = 76;  // This is variable initialization
    char five = '5'; // This is variable declaration and initialization

    const int i = 9; // const fixed the value that you have given and you can't change it
    // i = 10;
    harryName = 98;

    printf("\n\n***************** Types of operators in C *******************************\n\n");

    /*
    Arithmetic Operators
    Relational Operators
    Logical Operators
    Bitwise Operators
    Assignment Operators
    Miscellaneous  Operators
    */

    // Arithmetic Operators
    int a = 6, b = 7, c = 8;
    printf("The sum of a and b is %d\n", a + b);
    printf("The difference of a and b is %d\n", a - b);
    printf("The multiplication result of a and b is %d\n", a * b);
    printf("The division of a and b is %d\n", a / b);
    printf("The modulo of a and b is %d\n", a % b);
    printf("The increment of a is %d\n", a++); // This also be use like this printf("The increment of a is %d\n", ++ a);
    printf("The decrement of a is %d\n", a--); // This also be use like this printf("The increment of a is %d\n", -- a);

    // Relational Operators
    int harry = 9, rohan = 45;
    printf("%d\n", harry == rohan); // equal to equal
    printf("%d\n", harry != rohan); // not equal to
    printf("%d\n", harry > rohan);  // Grater then
    printf("%d\n", harry < rohan);  // Less then

    // Logical Operators
    int h = 0, j = 1;
    printf("The logical oprator returned %d\n", h && j); // And
    printf("The logical oprator returned %d\n", h || j); // Or
    printf("The logical oprator returned %d\n", !h);     // Not of h
    printf("The logical oprator returned %d\n", !j);     // Not of j

    // Bitwise Operators
    // A = 68, B = 13;
    // A = 00111100;
    // B = 00001101;
    // Result = 00001100
    int A = 60, B = 14;
    printf("Bitwise And operator returned %d\n", A & B);
    printf("Bitwise Or operator returned %d\n", A | B);
    printf("Bitwise Xor operator returned %d\n", A ^ B);
    printf("Bitwise Ones complement operator returned %d\n", ~B);
    printf("Bitwise Left shift operator returned %d\n", A << B);
    printf("Bitwise Right shift operator returned %d\n", A >> B);

    //  Assignment Operators
    // =, +=, -=, *=, %=, etc
    /* int ha = 9;
    ha += 9; [ += ] this alow us to Plus 9 + 9 = 18

    ha -= 9; [ -= ] this alow us to Mines 9 - 9 = 0

    ha *= 9;  [ *= ] this alow us to Tables 9 * 9 = 81

     ha %= 9; [ %= ] this alow us to Persentage

    printf("ha is %d\n", ha); */

    // Miscellaneous  Operators - &, *, ?;
    // This character [ & ] give us the address of any variable
    // This character [ * ] give us the value of the address
    // This character [ ? ] give us the conditional statement

    printf("\n\n***************** Taking input from user in C *******************************\n\n");
    // int harryInput;
    // printf("\n Please enter value of harryInput");
    // scanf("%d", &harryInput);
    // printf("\n You Entered %d as harryInput", harryInput);
    // printf("\n You Entered %f as harryInput", (float) harryInput); // This is type casting

    // int num1, num2; division perfact value
    // scanf("%d", &num1);
    // scanf("%d", &num2);
    // printf("\n num1/num2 is %f", (float) num1/num2);

    printf("\n\n***************** Decision Making in C *******************************\n\n");
    int age;
    printf("Enter your age\n");
    // scanf("%d", &age);
    age = 44;
    if (age < 18)
    {
        printf("You can drive");
    }
    else if (age >= 18 && age <= 24)
    {
        printf("You are banned from driving\n");
    }
    else
    {
        printf("You can drive but drive carfully\n");
    }

    int i4 = age < 3 ? 100 : 200; // Short hand if else
    printf("%d", i4);

    printf("\n\n***************** Loops in C ************************\n\n");
    int index = 0;
    while (index < 10)
    {
        printf("%d\n", index);
        index++;
    }

    for (int j = 0; j < 67; j++)
    {
        printf("%d\n", j);
    }

    do // do while will run the code once if its true or false
    {
        printf("do while loop is running");
    } while (j > 656565);

    printf("\n\n***************** Functions in C ************************\n\n");

    return 0;
}
// Exercise Tell me about Switch Statement

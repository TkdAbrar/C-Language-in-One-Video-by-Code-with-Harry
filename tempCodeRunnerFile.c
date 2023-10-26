#include <stdio.h>

int main()
{
    printf("Hello World");
    // Single line comments : Compiler will ignore this
    /*
    This is a Multi
    line
    comments
    */
//    int, float, char

    int a = 7; // 2 to 4 bytes depending on the architecture
    unsigned short integer = 8; // 2 byte (16 bits)
    long integer1 = 8; // 4 byte (32 bits)
    short integer2 = 8; // 2 byte (16 bits)

    float b = 8.0; // 4 byte (32 bits) |---| 6 decimal places precision
    double myfloat1 = 7.45; // 8 byte (64 bits)|---| 15 decimal places precision
    long double myfloat2 = 7.45454545; // 10 byte (80 bits)|---| 19 decimal places precision

    char c = 't'; // 1 byte (8 bits)
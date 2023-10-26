#include <stdio.h>
#include <string.h>

int glo = 76; // This is a Global variable. Remember if there is a Global variable and you make a local variable, local will over come Global variable
// data_type func_name(parameter_type parametername) {
//     return value_of_type_data_type
// }

// %s is use for string specifiers
void newprint(char *char1)
{
    printf("The value is %s\n", char1);
}

int sum(int a, int b)
{ // This function returns integer type by sum two integer
    return a + b;
}

// int average(int a, int b){ // This is returning the average value in integer
//     return (a+b)/2;
// }
// int main() {
//     printf("The average of 100 and 299 is %d\n", average(100, 299));
//     return 0;
// }

// These are local variables a, b;
float average(float a, float b)
{ // This is returning the average value in floating point
    return (a + b) / 2;
}

struct Books
{
    char name[50];
    char author[50];
    int price;
} book;

void printStruct(struct Books bk)
{
    printf("Book name is %s\n", bk.name);
    printf("Author name is %s\n", bk.author);
    printf("Book price is %d\n", bk.price);
}
int main()
{
    // Functions
    // printf("The average of 100 and 299 is %f\n", average(100, 299)); // This is returing the perfact value
    // int glo = 87; // This is a local variable. remember if there is a Global variable and you make a local variable, local will over come Global variable
    // printf("Glo is %d", glo);

    // Array use in for loop
    // int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Enter the values for index %d\n", i);
    //     scanf("%D", &arr[i]);
    // }

    //     for (int i = 0; i < 10; i++)
    // {
    //     printf("The value for index %d is %d\n", i, arr[i]);
    // }
    // printf("%d", arr[7]);

    // Pointers
    // int a = 98;
    // printf("%d\n" ,a);
    // int* ptr = NULL;  // Pointers (variable) store tha address of variables
    // if (!ptr)
    // {
    //     printf("Pointer is not Null");
    // }
    // ptr = &a; // With this you can change the value of the address ( D reference )
    // *ptr = 188;
    // printf("%d\n",a);

    // // Strings
    // char name [3] = {'m', 'y', '\0'}; // Strings can be use like alphabet letters A is the highest
    // char str1[65], str2[98], str3[32]; // and Z is the lowest
    // strcpy(str1, "Harry");
    // strcpy(str2, "Rohan");
    // strcat(str1 ,str2);
    // printf("%d", strcmp(str1 ,str2));

    // Structures
    struct Books bk1, bk2;
    strcpy(bk1.name, "C Programing");
    strcpy(bk1.author, "Dennis");
    bk1.price = 78;

    printStruct(bk1);

    return 0;
}
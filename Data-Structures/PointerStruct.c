#include <stdio.h>


int main()
{
    struct student
    {
        char name[20];
        int age;
    };

    struct student anil = {"amiee", 20};

    printf("Name: %s, Age: %d\n", anil.name, anil.age);

    struct student *ptr;

    ptr = &anil;

    (*ptr).age = 69;

    printf("Name: %s, Age: %d\n", anil.name, anil.age);

    ptr->age = 99;

    printf("Name: %s, Age: %d\n", anil.name, anil.age);


    return 0;
}
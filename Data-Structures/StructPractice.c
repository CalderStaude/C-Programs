#include<stdio.h>  
#include<string.h>

struct address   
{  
    char city[20];  
    int pin;  
    char phone[14];  
} address;  
struct employee  
{  
    char name[20];  
    int age;
    struct address add;  
};  

void main ()  
{  
    struct employee emp; 

    //emp.add.city = "Vancouver";

    emp.age = 53;
    emp.add.pin = 2342;

    strcpy(emp.name, "tomasulo");

    printf("Age and Pin and name: %d, %d, %s", emp.age, emp.add.pin, emp.name);


}  
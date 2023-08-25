#include <cs50.h>
#include <stdio.h>

int main(void)
{

    string name = get_string("Name? ");
    int age  = get_int("Age? ");
    string number = get_string("Phone #? ");
    printf("Contact Name: %s, Age: %i, Phone: %s\n", name, age, number);

}

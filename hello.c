#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //prompt name from user
    string i = get_string("name:");
    
    //shows user's name
    printf("Hi %s !\n", i);
}

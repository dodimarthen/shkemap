#include <stdio.h>


int x = 20;
void functionSum (){
    printf("Sum example : %d\n", x + 10); 
    }
void functionMul (){
    printf("Multiple from example : %d\n", x * 10);
    }

int main()
{
    /*int defined_var;
    printf("Defined_ar: %d\n", defined_var);

    defined_var = 10;
    int new_var = 14;
    printf("Value of defined var: %d\n", defined_var);
    printf("value of new var: %d", new_var);
    return 0;*/
    functionSum();
    functionMul();
    return 0;

}
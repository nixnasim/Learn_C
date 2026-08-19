#include<stdio.h>
#include<stdbool.h>
int main()
{

int i = 87;
float f = 87.54;
double d = 87.4624247;
char c = 'N';
bool b = 1;
char s []= "Hello";

    printf("integer: %d \n", i);
    printf("float: %.2f\n",f);
    printf("double: %.2lf\n",d);
    printf("character: %c\n",c);
    printf("Boolean: %d\n",b);
    printf("String: %s\n",s);

return 0;
}
#include <stdio.h>
#include "set.h"
int main()
{
char s[10];
for (int i=0;i<10;i++)
{
printf("Enter the answer %d: ", (i+1));
scanf(" %c", &s[i]);
}
int n = answer_checker(s);
printf("Count = %d", n);
}
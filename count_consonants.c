#include "count.h"
int count(char* string)
{
int count = 0;
for (int i = 0; i < strlen(string); i++)
{
char character = tolower(string[i]);
int a=(int)character;
if (a>=97 && a<=122){
if (character != 'a' && character != 'e' && character != 'i' && character != 'o' && character != 'u')
{
count++;
}
}
}
return count;
}
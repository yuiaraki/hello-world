#include <stdio.h>
#include <string.h>

int main(int argc, char**argv)
{
  char s[5],t[5];
  strcpy(s,"123456789");
  strcpy(t,"123");
  strcat(t,"456789");

  printf("%s\n",s);
  printf("%s\n",t);
  return(0);
}

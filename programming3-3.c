#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc,char**argv)
{
  char s[10],t[10];
  int x;
  double y;

  strcpy(s,"123456");
  strcpy(t,"123.456");
  x=atoi(s);
  y=atof(t);

  printf("atoi関数を使った数値：%d\n",x);
  printf("元の文字列：%s\n",s);
  printf("atof関数を使った数値：%f\n",y);
  printf("元の文字列：%s\n",t);
  

  return(0);
}

#include <stdio.h>
#include <string.h>

int main(int argc,char**argv)
{
  char s[10],t[10],u[10],v[10],z[10];
  int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;

  strcpy(s,"a");
  strcpy(t,"50");
  strcpy(u,"123");
  strcpy(v,"h");
  strcpy(z,"A");

  a1=strcmp(s,t);
  a2=strcmp(s,u);
  a3=strcmp(u,s);
  a4=strcmp(s,z);
  a5=strcmp(t,u);
  a6=strcmp(t,z);
  a7=strcmp(z,t);
  a8=strcmp(v,u);
  a9=strcmp(u,v);
  a10=strcmp(v,z);

  printf("strcmpの結果\n");
  printf("%d\n",a1);
  printf("%d\n",a2);
  printf("%d\n",a3);
  printf("%d\n",a4);
  printf("%d\n",a5);
  printf("%d\n",a6);
  printf("%d\n",a7);
  printf("%d\n",a8);
  printf("%d\n",a9);
  printf("%d\n",a10);
  return(0);
}

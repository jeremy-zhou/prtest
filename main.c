#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  time_t t;
  struct tm* tmp;
  char buf1[20];
  char buf2[24];
  
  time(&t);
  tmp = localtime(&t);
  if(strftime(buf1,20,"time and date: %r, %a %b %d, %Y", tmp) == 0)
    printf("buffer length 20 is too small\n");
    
  exit(0);
}

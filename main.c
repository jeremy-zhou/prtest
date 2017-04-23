#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  time_t t;
  struct tm* tmp;
  char buf1[18];
  char buf2[24];
  
  time(&t);
  tmp = localtime(&t);
  if(strftime(buf1,18,"time and date: %r, %a %b %d, %Y", tmp) == 0)
    printf("buffer length 18 is too small\n");
    
  exit(0);
}

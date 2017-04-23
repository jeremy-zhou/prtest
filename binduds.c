#include <sys/socket.h>
#include <sys/un.h>

void binduds(const char* const name)
{
  int fd,size;
  struct sockaddr_un un;
  un.sun_family = AF_UNIX;
  strcpy(un.sun_path,name);
  if((fd = socket(AF_UNIX,SOCK_STREAM,0)) < 0 )
    exit(-1);
  size = offsetof(struct sockaddr_un,sun_path) + strlen(un.sun_path);
  if(bind(fd,(struct sockaddr*)&un,size) < 0)
    exit(-1);
    
  exit(0);
}

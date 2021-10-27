#include <unistd.h>
#include <stdio.h>

void main(){
 
   printf("Process ID of Parent is %d and Process ID of Child is %d\n", getppid(),getpid());
 
  }

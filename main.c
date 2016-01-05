#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

void  main(void)
{
  while(true)
    fork();
}

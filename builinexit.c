#include "shell.h"

void exitshell(int exitstatus)
{
if (!exitstatus)
  printf("you are now exiting shell...\n");
exit (0);
}

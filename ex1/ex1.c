#include <stdio.h>


// This is a comment
// argc and argv are how command line arguments are passed to main()

// argc stands for argument count - the number of argument strings coming at argv
// argv stands for argument vector - array of argument

// they don't actually need to be named argc and argv
int main(int argc, char *argv[])
{
  // this is just you basic variable
  int distance = 100;

  printf("We traveled %d miles.\n", distance);

  return 0;
}
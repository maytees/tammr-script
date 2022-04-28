#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./include/lexer.h"

int main(int argc, char **argv) {
  FILE* source_file;
  char source;
    
  if(argc > 1) {
    source_file = fopen(argv[1], "r");
    
  }else {
    printf("Please include at least one argument: Path To File");
  }
      
  return 0;
}
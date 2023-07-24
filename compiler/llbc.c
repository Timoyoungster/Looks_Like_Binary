#include <errno.h>

#define SUCCESS 0
#define ERROR -1

int main(int argc, char *argv) {
  if (argc < 2) {
    error = EINVAL;
    return -ERROR;
  }
  
  // check if argument isn't path
  
  FILE *code;
  code = fopen(argv[1], "r");
  FILE *out;
  out = fopen("a.out", "wb");
  
  if (code == NULL) {
    error = ENOENT;
    return -ERROR;
  }
  
  char c;
  char instruction;
  int i_ptr = 8;
  while ((c = getc(code)) != EOF) {
    if (c == ' ' || c == '\n' ||
        c == '\r') {
      continue;
    }
    
    i_ptr--;
    instruction |= 1 << i_ptr;
    
    if (i_ptr == 8) {
      i_ptr = 0;
      
      // TODO: write or build instruction
    }
  }
  
  fclose(code);
  return SUCCESS;
}
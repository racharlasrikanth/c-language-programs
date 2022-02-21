#include <stdio.h>

/*
  Escape Sequences in C (NO NEED TO REMEMBER ALL, but Just Look)

  \a  =>  alarm || beep sound
  \b  =>  backspace
  \f  =>  form feed
  \n  =>  new line || nex line || enter
  \r  =>  carriage return
  \t  =>  tab space (Horizontal)
  \v  =>  vertical tab
  \\  =>  backslash
  \'  =>  single quote
  \"  =>  double quote
  \?  =>  question mark
  \ooo  =>  octal number
  \xhh  =>  hexa decimal number
  \0  =>  null
  
*/

int main() {
  printf("Hello World!\n");
  printf("I am learning\tC");
  printf("I am learning\\C");
  printf("I am learning\"");
  return 0;
}
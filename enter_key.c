#include <stdio.h>
#include <string.h>
#include <windows.h> // for Sleep function
int main(void)
{
  while (1) {
    //if (getchar() == '\n') {
    char str[32];
    gets(str);
    if(strcmp(str,"")==0){
      printf("Enter key is pressed");
      Sleep(1000); //wait for check printed message.
      break;
    }
  }
  return 0;
}


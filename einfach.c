#include<stdio.h>
#include<string.h>

int main(){
  char string[]={"C:Eigene/Dateien/FOM/C-Code/main.c"};
  
  char *c1={"c"};
  char *c2={"main.c"};
  char *c3={"C:Eigene/Dateien/FOM/C-Code"};
  
  
  printf("Extension:  %s\nDateiname:  %s\nVerzeichnis:  %s\n\n",c1,c2,c3);
  
  
  return 0;
}

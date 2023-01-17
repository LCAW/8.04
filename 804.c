#include<stdio.h>
#include<string.h>

int main(){
  char string[]={"C:Eigene/Dateien/FOM/C-Code/main.c"};
  
  char *c1=strrchr(string,"c");
  char *c2=strrchr(string,"main.c");
  char *c3=strrchr(string,"C:Eigene/Dateien/FOM/C-Code");
  
  
  printf("Extension:  %s\nDateiname:  %s\nVerzeichnis:  %s\n\n",c1,c2,c3);
  
  
  return 0;
}

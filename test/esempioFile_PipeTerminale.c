#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>
#include <pthread.h>

void scrivi(){
    FILE *f = fopen("./log.txt", "w+"); 
    //w+ write + read
    //a append
    //w write
        fprintf(f, "[THREAD] New thread genereted from signal %d\n", 10);
        fprintf(f, "[THREAD] Sending message to children\n");

        fprintf(f, "[THREAD] Terminaning thread\n");

        fflush(f);
        fclose(f);
}

void leggiParolaPerParola(){
     FILE *fd;
    //apre il file
    fd=fopen("./log.txt", "r");
    
    char buffer[100];
    
    while(fscanf(fd, "%s", buffer) != EOF){
        printf("valore letto %s\n",buffer);
    }
    
    //chiude il file 
    fclose(fd);
}

void leggiCaratterePerCarattere(){
     FILE *fd;
    //apre il file
    fd=fopen("./log.txt", "r");
    
    char buffer;
    
    buffer = fgetc(fd);

    while(buffer != EOF){

        buffer = fgetc(fd);
        printf("%c",buffer);
    }
    
    //chiude il file 
    fclose(fd);
}

void leggiPipeParolaPerParola()
{
  char c[100];
  while (scanf("%s", c) != EOF)
  {
    printf("%s",c);
  }
}


void leggiPipeCaratterePerCarattere()
{
  char c = getc(stdin);
  while (c != EOF)
  {
    printf("%c",c);
    c = getc(stdin);
  }
}

void leggiPipeCaratterePerCarattereConScaf()
{
  char c;
  while (scanf("%c",&c) != EOF)
  {
    printf("%c",c);
  }
}

int main(){

      //scrivi();
      //leggiParolaPerParola();
      //leggiCaratterePerCarattere();
      //leggiPipeParolaPerParola();
      //leggiPipeCaratterePerCarattere();
      leggiPipeCaratterePerCarattereConScaf();
  }
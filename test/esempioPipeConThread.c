#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>
#include <pthread.h>


int fd[2];

void *threadA(void *param){
    printf("This is a thread that received %d\n", *(int *)param);
    // pthread_exit(0); //esc
    int time = rand()%5;
    sleep(time);

     char buffer [100] = "CIAO LUCA";

    if (write(fd[1], buffer, sizeof(buffer)) != -1){
        printf("Ho scritto\n");
    }else{
        printf("Ho cappato\n");
    }

    }

    void *threadB(void *param){
    printf("This is a thread that received %d\n", *(int *)param);
    // pthread_exit(0); //esci
    
    char buffer [100];

    read(fd[0], buffer, sizeof(buffer));
    printf("Ho ricevuto e letto %s\n",buffer);

    }

int main()
{ 
    //inizializzo pipe
  
    if (pipe(fd) == -1)
    {
        fprintf(stderr, "Cannot open pipe\n");
        fflush(stderr);
        return 1;
    }

    pthread_t t_idA;
    int argA=10;
    pthread_create(&t_idA, NULL, &threadA, (void *)&argA); 
    printf("A con id [%ld]\n",t_idA);
    //sleep (3);

    pthread_t t_idB;
    int argB=10;
    pthread_create(&t_idB, NULL, &threadB, (void *)&argB); 
    printf("B con id [%ld]\n",t_idB);
    sleep (3);


    //printf("Kill [A]\n");
    //pthread_cancel(t_idA);

    pthread_join (t_idA ,NULL); // wait thread
    pthread_join (t_idB ,NULL); // wait thread
}

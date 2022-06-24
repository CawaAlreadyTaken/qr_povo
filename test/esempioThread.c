#include <stdio.h> 
#include <pthread.h> 
#include <unistd.h>


void *thread(void *param){
    printf("This is a thread that received %d\n", *(int *)param);
    // pthread_exit(0); //esci
    }

int main()
{ 
    pthread_t t_id;
    int arg=10;
    pthread_create(&t_id, NULL, &thread, (void *)&arg); 
    printf("Executed thread with id %ld\n",t_id);
    sleep (3);

    //pthread_join (&t_id ,NULL); // wait thread
}

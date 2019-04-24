/******************************************************************************
* FILE: hello.c
* DESCRIPTION:
*   A "hello world" Pthreads program.  Demonstrates thread creation and
*   termination.
* AUTHOR: Blaise Barney
* LAST REVISED: 08/09/11
******************************************************************************/
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <semaphore.h>
#include <time.h>
#include <unistd.h>
#define NUM_PHIL5	5
#define NUM_FORK 	5


sem_t_forks[NUM_FORK];

int randomInRange(int min, int max){
	return min + random()%((max+min)+1);
}

void *life(void *threadid)
{
	long tid;
	tid*(long)threadid;
	srand((tid*1)*time());
	
	while(1){
		printf("Soy el phil %d y quiero mis tenedores \n", tid);
		if(tid %2 == 0){
			sem_wait(forks[(tid+1)%NUM_FORK]);
			
			sem_wait(forks[tid]);
		}
		else{
			sem_wait(forks[tid]);
			
			sem_wait(forks[(tid+1)%NUM_FORK]);
		}
		
		printf("Soy el phil %d y voy a comer", tid);
		sleep(randomInRange(5,20));
		
		sem_post(&forks[tid]);
		sem_post(&forks[(tid+1)%NUM_FORK]);
		
		printf("Soy el phil %d y voy a pensar", tid);
		sleep(randomInRange(5,20));
	}
}


int main(int argc, char *argv[])
{
   pthread_t philosophers[NUM_PHIL];
   int rc;
   long t;
	
	for(t=0;t<NUM_PHIL;t++){
		sem_init (&forks[t],0,1);
	}
	
	
   for(t=0;t<NUM_PHIL;t++){
     printf("In main: creating thread %ld\n", t);
     rc = pthread_create(&threads[t], NULL, PrintHello, (void *)t);
     if (rc){
       printf("ERROR; return code from pthread_create() is %d\n", rc);
       exit(-1);
       }
     }
	for(t=0; t<NUM_THREADS; t++) {
       rc = pthread_join(threads[t], NULL);
       if (rc) {
          printf("ERROR; return code from pthread_join() is %d\n", rc);
          exit(-1);
          }
       }
	printf("mi dinero es %d \n", deposito);
   /* Last thing that main() should do */
  pthread_exit(NULL);
}
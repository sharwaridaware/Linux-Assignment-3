#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void function(void* tid)
{
printf("Thread is created\n");
}


int main()
{
int i;
pthread_t tid;

pthread_create(&tid, NULL, function, NULL);
printf("Thread ID: %d\n", tid);
sleep(3);

i = pthread_cancel(pthread_self());
if(i==0)
	{
	 printf("Calling thread is canceled\n");
	}

printf("Thread ID: %d\n", tid);

return 0;
}


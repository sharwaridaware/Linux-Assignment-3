#include<stdio.h>
#include<pthread.h>
#include<unistd.h>



void *PrintHello(void *threadid)
{
	printf("\nHello world!\n");
	while(1);
}

int main()
{
	pthread_t thread;
	int rc,t=0;

	printf("Creating thread\n");
		
	rc = pthread_create(&thread,NULL,PrintHello,NULL);
	printf("\n Thread Id : %u\n",thread);

	sleep(6);
	t = pthread_cancel(thread);
	if(t==0)
		printf("\n cancel thread\n");
	printf("\n Thread ID : %u\n",thread);
}

#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

void *thread0(void* var)  //for thread one from range 0-100
{
	int *a = (int *)var;
	int sum = 0;
	for(int i = 0; i < 100;i++)
	{
		sum = sum + a[i];
	}
	return (void*)sum;
}

void *thread1(void* var)  //for thread one from range 100-200
{
	int *a = (int *)var;
	int sum = 0;
	for(int i = 100; i < 200;i++)
	{
		sum = sum + a[i];
	}
	return (void*)sum;
}

void *thread2(void* var)  //for thread one from range 200-300
{
	int *a = (int *)var;
	int sum = 0;
	for(int i = 200; i < 300;i++)
	{
		sum = sum + a[i];
	}
	return (void*)sum;
}

void *thread3(void* var)  //for thread one from range 300-400
{
	int *a = (int *)var;
	int sum = 0;
	for(int i = 300; i < 400;i++)
	{
		sum = sum + a[i];
	}
	return (void*)sum;
}

void *thread4(void* var)  //for thread one from range 400-500
{
	int *a = (int *)var;
	int sum = 0;
	for(int i = 400; i < 500;i++)
	{
		sum = sum + a[i];
	}
	return (void*)sum;
}

void *thread5(void* var)  //for thread one from range 500-600
{
	int *a = (int *)var;
	int sum = 0;
	for(int i = 500; i < 600;i++)
	{
		sum = sum + a[i];
	}
	return (void*)sum;
}

void *thread6(void* var)  //for thread one from range 600-700
{
	int *a = (int *)var;
	int sum = 0;
	for(int i = 600; i < 700;i++)
	{
		sum = sum + a[i];
	}
	return (void*)sum;
}

void *thread7(void* var)  //for thread one from range 700-800
{
	int *a = (int *)var;
	int sum = 0;
	for(int i = 700; i < 800;i++)
	{
		sum = sum + a[i];
	}
	return (void*)sum;
}

void *thread8(void* var)  //for thread one from range 800-900
{
	int *a = (int *)var;
	int sum = 0;
	for(int i = 800; i < 900;i++)
	{
		sum = sum + a[i];
	}
	return (void*)sum;
}

void *thread9(void* var)  //for thread one from range 900-1000
{
	int *a = (int *)var;
	int sum = 0;
	for(int i = 900; i < 1000;i++)
	{
		sum = sum + a[i];
	}
	return (void*)sum;
}

int main()
{
	int a[1000];
	for(int i = 0; i < 1000;i++)
	{
		a[i] = i;   //array for threads
	}

	pthread_t thread0;
	pthread_t thread1;
	pthread_t thread2;
	pthread_t thread3;
	pthread_t thread4;
	pthread_t thread5;
	pthread_t thread6;
	pthread_t thread7;
	pthread_t thread8;
	pthread_t thread9;
	
	
	pthread_create(&thread0,NULL,thread0,(void*)a);
	pthread_create(&thread1,NULL,thread1,(void*)a);
	pthread_create(&thread2,NULL,thread2,(void*)a);
	pthread_create(&thread3,NULL,thread3,(void*)a);
	pthread_create(&thread4,NULL,thread4,(void*)a);
	pthread_create(&thread5,NULL,thread5,(void*)a);
	pthread_create(&thread6,NULL,thread6,(void*)a);
	pthread_create(&thread7,NULL,thread7,(void*)a);
	pthread_create(&thread8,NULL,thread8,(void*)a);
	pthread_create(&thread9,NULL,thread9,(void*)a);
	
	pthread_join(thread1,(void*)&a[0]);
	pthread_join(thread1,(void*)&a[1]);
	pthread_join(thread1,(void*)&a[2]);
	pthread_join(thread1,(void*)&a[3]);
	pthread_join(thread1,(void*)&a[4]);
	pthread_join(thread1,(void*)&a[5]);
	pthread_join(thread1,(void*)&a[6]);
	pthread_join(thread1,(void*)&a[7]);
	pthread_join(thread1,(void*)&a[8]);
	pthread_join(thread1,(void*)&a[9]);
	
	
	int* sum[10];
	
	
	int tsum = 0;    //total sum from all 10 functions
	for(int i = 0; i  < 10 ;i++)
	{
		tsum = tsum + (int) sum [i];
	}
	print("\ntotal sum is %d",tsum);
	
	
	
	}

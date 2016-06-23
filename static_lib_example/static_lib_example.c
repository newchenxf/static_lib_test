//static_lib_example.c
#include "static_lib_example.h"
#include <stdio.h>
#include <pthread.h>

/* this function is run by the second thread */
void *thread_exe(void *x_void_ptr)
{
    /* increment x to 100 */
    int *x_ptr = (int *)x_void_ptr;
    while(++(*x_ptr) < 100);
        printf("x increment finished\n");

    return NULL;
}

int testFunc(int param)
{
    printf(" testFunc %i\n",param);
    pthread_t inc_x_thread;
    int x = 0, y = 0;
    /* create a second thread which executes thread_exe(&y) */
    if(pthread_create(&inc_x_thread, NULL, thread_exe, &x)) {
        fprintf(stderr, "Error creating thread\n");
        return 1;
    }
    /* increment y to 100 in the first thread */
    while(++y < 100);

    printf("y increment finished\n");

    /* wait for the second thread to finish */
    if(pthread_join(inc_x_thread, NULL)) {
        fprintf(stderr, "Error joining thread\n");
       return 2;
    }

    /* show the results - x is now 100 thanks to the second thread */
    printf("x: %d, y: %d\n", x, y);
    return 0;
}

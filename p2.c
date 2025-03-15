//p2.c
#include <stdio.h>
#include "awk_sem.h"

int main() {
    int i = 0;
    
    int sem_p2 = get_sem(".", 's2');
    int sem_p3 = get_sem(".", 's3');
    int sem_start = get_sem(".", 'start');


    
    do {
        V(sem_start);
        P(sem_p2);
        printf("P2222222 \n");
        
        i++;
        V(sem_p3);
        V(sem_p3);
        
    } while(i < 100);
    
    return 0;
}

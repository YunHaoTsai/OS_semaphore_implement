//p1.c
#include <stdio.h>
#include "awk_sem.h"

int main() {
    int i = 0;
    // 建立 semaphore: s1 = 1, s2 = 0, s3 = 0
    int sem_p1 = create_sem(".", 's1', 1);
    int sem_p2 = create_sem(".", 's2', 0);
    int sem_p3 = create_sem(".", 's3', 0);
    int sem_start = create_sem(".", 'start', 0);
    
    
    do {
        P(sem_start);
        P(sem_start);
        P(sem_p1);
        printf("P1111111 \n");
        
        i++;
        V(sem_p2);
        P(sem_p1);
        
    } while(i < 100);
    
    return 0;
}

//p3.c
#include <stdio.h>
#include "awk_sem.h"

int main() {
    int i = 0;
    
    int sem_p1 = get_sem(".", 's1');
    int sem_p3 = get_sem(".", 's3');
    int sem_start = get_sem(".", 'start');
    
    
    
    do {
        V(sem_start);
        P(sem_p3);
        printf("P3333333 \n");
        i++;
        V(sem_p1);
    } while (i < 200) ;
    
    return 0;
}

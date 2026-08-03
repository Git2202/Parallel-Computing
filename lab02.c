
#include <stdio.h>
#include <omp.h>

int main(){
    int num;
    printf("Enter the number of itterations");
    scanf("%d", &num);
    #pragma omp parallel
    {
        #pragma omp for schedule(static,2)
        for(int i=0;i<num;i++){
            printf("Thread %d: Iteration %d\n", omp_get_thread_num(), i);
        }
    }
    return 0;
}
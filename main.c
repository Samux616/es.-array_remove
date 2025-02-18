#include <stdio.h>

#define N 5

int main(void){
    double arr[N] = {1.0, 2.0, 3.0, 4.0, 5.0};

    for(int i=0; i<N; i++){
        printf("%.1lf\t", arr[i]);
    }
    printf("\n");
    printf("\n");


    while(1){
        size_t pos;
        size_t pn = sizeoff(arr) / sizeof(double);
        printf("Indice elemento da eliminare\n");
        scanf("%ld",&pos);
        array_remove(arr, &pn, pos)
    }

    return 0;
}
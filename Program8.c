#include<stdio.h>

void main(){

    int N;
    printf("Enter size of array:");
    scanf("%d",&N);

    int arr[N];
    for(int i=0; i<N; i++){

        scanf("%d",&arr[i]);
    }

    for(int i=0; i<N; i++){

        printf("%d ", arr[i]);
    }
    printf("\n");
    int prod =1;
    for(int i=0; i<N; i++){

        if(i % 2 != 0){

            prod = prod*arr[i];
        } 
    }
    printf("Prod of odd indexed Elements: %d",prod);

}
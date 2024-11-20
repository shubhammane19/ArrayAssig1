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
    printf("Even Elements: ");
    for(int i=0; i<N; i++){

        if(arr[i] % 2 == 0){

            printf("%d ", arr[i]);
        } 
    }
}
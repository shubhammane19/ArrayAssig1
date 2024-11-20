#include<stdio.h>

void main(){

    int N;
    printf("Enter array Size:");
    scanf("%d",&N);

    int arr[N];

    for(int i=0; i<N; i++){

        scanf("%d", &arr[i]);
    }

    for(int i=0; i<N;i++){

        printf("%d ", arr[i]);
    }
    printf("\n");

    for(int i=0; i<N;i++){

        if(arr[i] % 5 == 0){
            printf("%d",i);
            break;
        }
    }
}
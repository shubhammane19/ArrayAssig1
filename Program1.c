#include<stdio.h>

void main(){

    int size;
    printf("Enter size of array:");
    scanf("%d",&size);

    int arr[size];

    for(int i=0; i<size; i++){

        scanf("%d",&arr[i]);
    }

    for(int i=0; i<size; i++){

        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Elements at even index: \n");
    for(int i=0; i<size; i++){

        if(i%2 == 0){
            printf("%d ", arr[i]);
        }
    }
}

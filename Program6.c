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
    
    int sum=0;
    for(int i=0; i<size; i++){

        sum = sum+arr[i];
    }
    printf("Sum of Elements : %d", sum);
}

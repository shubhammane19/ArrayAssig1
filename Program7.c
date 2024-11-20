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
    
    int Evensum=0;
    int Oddsum=0;
    for(int i=0; i<size; i++){

        if(arr[i] %2 == 0){
            Evensum = Evensum+arr[i];
        }else{

            Oddsum = Oddsum+arr[i];
        }
    }
    printf("Diff of Sum of Elements : %d", Evensum-Oddsum);
}

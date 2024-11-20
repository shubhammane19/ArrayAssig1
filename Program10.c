#include<stdio.h>

void main(){

    int N;
    printf("Enter array Size:");
    scanf("%d",&N);

    char arr[N];

    for(int i=0; i<N; i++){

        scanf(" %c", &arr[i]);
    }

    printf("Array Elements: ");
    for(int i=0; i<N;i++){

        printf("%c ", arr[i]);
    }
    printf("\n");

    for(int i=0; i<N; i++){

        if(arr[i] == 'A' || arr[i] == 'a' || arr[i] == 'E' || arr[i]=='e'|| arr[i] == 'i'|| arr[i] == 'I' || arr[i] == 'O'|| arr[i] == 'o' || arr[i] == 'U' || arr[i] == 'u'){

            printf("Vowel %c at index %d\n",arr[i],i);
            
        }
    }
}
//write a program to copy the elements of array.
#include<stdio.h>
int main(){
    int a1;
    int arr[100],newarr[100];
    printf("enter size of array1= ");
    scanf("%d",&a1);
     printf("enter aaray1 elements: \n");
    for(int i=0;i<a1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a1;i++){
        newarr[i]=arr[i];
    }
    printf("copied array elements are\n");
    for(int i=0;i<a1;i++){
        
        printf("%d",newarr[i]);
    }
     return 0;   
    
}

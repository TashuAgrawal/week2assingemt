// 2.write a program to merge two array and print it's reverse order
#include<stdio.h>

void array(int x,int y){
    int arr1[100],arr2[100];
    int m=x+y;
    int merge[200];
     printf("enter aaray1 elements: ");
    for(int i=0;i<x;i++){
        scanf("%d",&arr1[i]);
    }

    printf("enter aaray2 elements: ");
    for(int i=0;i<y;i++){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<x;i++){
        merge[i]=arr1[i];
    }
    for(int i=0;i<y;i++){
        merge[x+i]=arr2[i];
    }
    printf("merged array= ");
    for(int i=0;i<m;i++){
        printf("%d ",merge[i]);
    }
    printf("\n");
    printf("REVERSED ARRAY:");
    for(int i=m-1;i>=0;i--){
        printf("%d ",merge[i]);
    }
}
int main()
{
    
    int a1,a2,m;
   
    printf("enter size of array1= ");
    scanf("%d",&a1);
    printf("enter size of array2= ");
    scanf("%d",&a2);

   
    array(a1,a2);
    return 0;
}

  

//Write  a program to find maximum occuring integer in an array

#include <stdio.h>

int main(){
    int arr[10],n, max, maxCount = 0;
    printf("enter array size: ");
    scanf("%d",&n);
    printf("enter arrays elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    for(int i = 0; i < n; i++){
        int count = 1;
        for(int j = i+1; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > maxCount){
            maxCount = count;
            max = arr[i];
        }
    }

    printf("The maximum occurring integer in the array is: %d\n", max);

    return 0;
}

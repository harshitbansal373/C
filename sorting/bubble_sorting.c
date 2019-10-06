//bubble sort

#include<stdio.h>
int main(){
    int i,n,j,temp,value;
    printf("enter number of number elements in array\n");
    scanf("%d",&n);
    int arr[n];
    printf("\nenter array elements");
    for(i=0;i<n;i++){
        scanf("%d",&value);
        arr[i]=value;
    }
    printf("\narray elements\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    printf("\nbubble sorted array\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}

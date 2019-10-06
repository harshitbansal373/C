#include<stdio.h>
int main(){
    int i,n,ptr,temp,value;
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
    
    for(i=1;i<n;i++){
        temp=arr[i];
        ptr=i-1;
        while(ptr>=0 && temp<arr[ptr]){
            arr[ptr+1]=arr[ptr];
            ptr=ptr-1;
        }
        arr[ptr+1]=temp;
    } 
    
    printf("\ninsertion sorted array\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}

#include<stdio.h>
int main(){
    int i,n,j,min,loc,temp,value;
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
        min=arr[i];
        loc=i;
        for(j=i+1;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                loc=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[loc];
        arr[loc]=temp;
    }
    
    printf("\nselection sorted array\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}

#include<stdio.h>

int main(){
    int arr[100],n,i,newelement;
    printf("Enter number of elements:");
    scanf("%d",&n);

    printf("Enter %d elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);}

        printf("Enter element to insert at the beginning");
        scanf("%d",&newelement);
for (i=n;i>0;i--){
    arr[i]=arr[i-1];
}
arr[0]=newelement;
n++;

printf("Array after insertion");
for(i=0;i<n;i++){
    printf("%d",arr[i]);
}
return 0;
    }

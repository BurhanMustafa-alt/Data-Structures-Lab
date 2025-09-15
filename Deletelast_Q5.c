#include<Stdio.h>
int main(){
    int arr[100],n,i;
    printf("enter number of elements:");
    scanf("%d",&n);

    printf("Enter %d elements",n);
    for(i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    n--;
    printf("Array after declaring last element");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
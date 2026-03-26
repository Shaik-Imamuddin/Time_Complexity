#include<stdio.h>
int main(){
    int n,index;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&index);

    printf("%d",arr[index]);
    return 0;
}
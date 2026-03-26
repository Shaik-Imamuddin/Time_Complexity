#include <stdio.h>

int main() {
    int n;
    //recomended to enter small value for n (<5)
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int c[n];
    for(int i=0;i<n;i++)
        c[i]=0;

    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");

    int i = 0;

    while(i<n){
        if(c[i]<i){
            if(i%2==0){
                int temp=arr[0];
                arr[0]=arr[i];
                arr[i]=temp;
            } 
            else{
                int temp=arr[c[i]];
                arr[c[i]]=arr[i];
                arr[i]=temp;
            }

            for(int j=0;j<n;j++)
                printf("%d ",arr[j]);
            printf("\n");

            c[i]++;
            i=0;
        } 
        else{
            c[i]=0;
            i++;
        }
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int low=0,high=n-1,s;
    scanf("%d",&s);
    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid]==s){
            printf("%d Found at Index %d",s,mid);
            return 0;
        }
        else if(s>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    printf("Not Found");
    return 0;
    
}
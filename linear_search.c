#include <stdio.h>

int linear_search(int n,int a[],int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return printf("Found");
        }
    }
    return printf("Not found");

}




int main(){
    int n,key;
    printf("Enter size of an array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter array input:");
        scanf("%d",&a[i]);
    }

    printf("Enter a number to find:");
    scanf("%d",&key);
    linear_search(n,a,key);


}
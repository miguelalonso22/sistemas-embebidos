#include <stdio.h>

int main(){
    int arr[] = {10, 20, 40, 30, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;
    printf("n:%d\n", n);

    for (i = n-1; i >= 0; i--){
        printf("%d\n", arr[i]);
    }
    return 0;

    
}
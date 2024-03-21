#include <stdio.h>

int main(){
    int arr[] = {10, 20, 40, 30, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;
    printf("n:%d\n", n);

    int max = arr[0];
    int min = arr[0];

    for (i = 0; i <= n-1; i++){
        if (arr[i] > max){max = arr[i];}
        if (arr[i] < min){min = arr[i];}
    }
    printf("max:%d\n",max);
    printf("min:%d\n",min);
    return 0;
    
}
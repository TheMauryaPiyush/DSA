#include <stdio.h>

void printarray(int arr[],int n);

void reverse(int arr[],int n);

int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array : \n");
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printarray(a,n);//before reversing the array
    reverse(a,n);//using function to reverse the array
    printf("after reversing the array \n");
    printarray(a,n);//after reversing the array

    return 0;
}

void reverse(int arr[],int n){
    int temp;
    for(int i=0;i<(n/2);i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}

void printarray(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("value of a[%d] is %d\n",i,arr[i]);
    }
}

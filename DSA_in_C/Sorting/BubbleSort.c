#include <stdio.h>

int swap(int *a, int *b);//decalring the swap function

int main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n];//declaring the array which we will sort
    printf("Enter elements of array \n");
    for(int i=0;i<n;i++){
        printf("arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }

    //Sorting the array using Bubble sort method
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            if(arr[j-1]>arr[j]){
                swap(&arr[j-1],&arr[j]);
            }
        }
    }

//Printing the sorted array    
printf("Your array is sorted : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}//End of main()

//defining the swap function
int swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;

    return 0;
}

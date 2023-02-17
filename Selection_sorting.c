#include <stdio.h>

int main()
{
    int size = 0;
    int min = 0;
    int temp = 0;
    
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    
    printf("Enter the elements of the array,\n");
    for(int p = 0 ; p < size;p++){
        scanf("%d",&arr[p]);
    }
    
    for(int i = 0; i < size-1;i++){
        min = i;
        for(int j = i+1;j<size;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }if( min != i){
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        }
    }
    
    for(int k = 0; k < size; k++){
        printf("%d ",arr[k]);
    }
    return 0;
}

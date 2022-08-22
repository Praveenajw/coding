// Program for Left Rotation Shift of Array by one

// Example,

// Input: 1 2 3 4 5 6
// Output: 2 3 4 5 6 1

/*
#include<stdio.h>
void leftRotateArray(int *arr,int n){
    int temp, i;
    temp = arr[0];
    for(i=0;i<n-1;++i){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}
int main(){
    int arr[100];
    int n,i;
    
    printf("\n\tEnter Size of Array: ");
    scanf("%d",&n);
    
    printf("\n\tEnter Array Elements: ");
    for(i = 0;i<n;++i){
        scanf("%d",&arr[i]);
    }
    
    leftRotateArray(arr,n);
    
    printf("\n\tArray After Left-Rotation by one: ");
    for(i = 0;i<n;++i){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

*/



// Left Rotation of Array without swapping
// This method does not involve swapping.

// We overwrite the ith index element with (i+1)th element from Left-To-Right.

// But by doing so, we lose the first element of the array. So, we use a temporary variable temp to store the first element of the array.

// After we are done overwriting, we set last index of array to temp.



// Steps
// Initialize i = 0.
// Set temp = arr[0].
// Repeat the following Steps while i < N – 1
// a[i] = a[i+1]
// ++i
// Set arr[N-1] = temp.

// ******************************************************************************************************************

// Left-Rotation of Array with Swapping

/*

#include<stdio.h>
void leftRotateArray(int *arr,int n){
    int temp;
    for(int i=0;i<n-1;++i){
                // swapping a[i] and a[i+1]
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}
int main(){
    int arr[100];
    int n,i;
    
    printf("\n\tEnter Size of Array: ");
    scanf("%d",&n);
    
    printf("\n\tEnter Array Elements: ");
    for(i = 0;i<n;++i){
        scanf("%d",&arr[i]);
    }
    
    leftRotateArray(arr,n);
    
    printf("\n\tArray After Left-Rotation by one: ");
    for(i = 0;i<n;++i){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
*/

// Steps
// Initialize i = 0.
// Repeat the following Steps while i < N-1
// SWAP(arr[i] , arr[i+1]).
// ++i.
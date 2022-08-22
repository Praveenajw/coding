// Program to Right Rotate (Shift) Array by one


// Example,

// Input: 1 2 3 4 5 6
// Output: 6 1 2 3 4 5

// Right Rotate Array without swapping
// In this method, we overwrite the ith index element with (i-1)th element from Right-To-Left.

// But by doing so, we lose the last element of the array. So, we use a temporary variable temp to store the last element of the array.

// After we are done overwriting, we set first index of array to temp.

/*

#include<stdio.h>
void rightRotateArray(int *arr,int n){
    int temp, i;
    temp = arr[n-1];
    for(i=n-1;i>0;--i){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
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
    
    rightRotateArray(arr,n);
    
    printf("\n\tArray After Right-Rotation by one: ");
    for(i = 0;i<n;++i){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

*/


// Steps
// Initialize i = N-1.
// Set temp = arr[N-1].
// Repeat the following Steps while i > 0
// a[i] = a[i-1]
// i = i – 1
// Set arr[0] = temp.



// ******************************************************************************************************************


// Right-Rotate Array with Swapping

// Steps
// Initialize i = N-1.
// Repeat Following Steps while i > 0
// SWAP(arr[i] , arr[i-1]).
// i = i – 1.
// Program in c/c++
// c/c++
 

/* 

#include<stdio.h>
void rightRotateArray(int *arr,int n){
    int temp;
    for(int i=n-1;i>0;--i){
        // swapping a[i] and a[i-1]
        temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
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
    
    rightRotateArray(arr,n);
    
    printf("\n\tArray After Right-Rotation by one: ");
    for(i = 0;i<n;++i){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

*/
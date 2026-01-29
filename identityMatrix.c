#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d" , &n);
    int arr[n][n];
    int identity = 1;
    //taking input from the user
    printf("Enter the elements of the array: ");
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            scanf("%d" , &arr[i][j]);
        }
    }
    //checking if the matrix is an identity matrix
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if((i == j && arr[i][j] != 1) || (i != j && arr[i][j] !=0)){
                identity = 0;
            }
        }
    }
    if(identity == 1) printf("Identity Matrix.");
    else //identity == 1
    printf("Not Identity Matrix.");
}
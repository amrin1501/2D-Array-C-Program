#include<stdio.h>
int main(){
    int m;
    printf("Enter the number of rows: ");
    scanf("%d" , &m);
    int n;
    printf("Enter the number of columns: ");
    scanf("%d" , &n);
    int arr[m][n];
    //taking input from the user
    printf("Enter the elements of the array: ");
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            scanf("%d" , &arr[i][j]);
        }
    }
    //output of the 2D array
    printf("The elements of the array are: \n");
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            printf("%d " , arr[i][j]);
        }
        printf("\n");
    }
}
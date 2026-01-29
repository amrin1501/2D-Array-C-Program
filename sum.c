#include<stdio.h>
int main(){
    int m;
    printf("Enter the number of rows: ");
    scanf("%d" , &m);
    int n;
    printf("Enter the number of columns: ");
    scanf("%d" , &n);
    int arr[m][n];
    int sum = 0;
    //taking input from the user
    printf("Enter the elements of the array: ");
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            scanf("%d" , &arr[i][j]);
        }
    }
    //sum
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            sum += arr[i][j];
        }
    }
    printf("The sum of the array is: %d", sum);
    return 0;
}
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
    //output of main diagonal
    printf("The elements of the main diagonal of the array are: ");
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            if(i == j) printf("%d " , arr[i][j]);
        }
    }
    return 0;
}
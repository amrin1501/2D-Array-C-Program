#include<stdio.h>
int main(){
    int arr[4][2] = { 1001 , 85 , 1002 , 90 , 1003 , 82 , 1004 , 75};
    //output of the 2D array
    printf("Marks obtained my 4 students are : \n");
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            printf("%d " , arr[i][j]);
        }
        printf("\n");
    }
}
#include<stdio.h>
int main(){
    int m;
    printf("Enter the no. of rows of 1st matrix: ");
    scanf("%d", &m);
    int n;
    printf("Enter the no. of columns of 1st matrix: ");
    scanf("%d", &n);
    int p;
    printf("Enter the no. of rows of 2nd matrix: ");
    scanf("%d", &p);
    int q;
    printf("Enter the no. of columns of 2nd matrix: ");
    scanf("%d", &q);
    if(n==p){
        //multiplication
        int a[m][n];
        printf("Enter the elements of the 1st matrix.");
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                scanf("%d" , &a[i][j]);
            }
        }
        int b[p][q];
        printf("Enter the elements of the 2nd matrix.");
        for(int i = 0 ; i < p ; i++){
            for(int j = 0 ; j < q ; j++){
                scanf("%d" , &b[i][j]);
            }
        }
        //res. matrix
        int res[m][q];
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < q ; j++){
                res[i][j] = 0;
                for(int k = 0 ; k < p ; k++){
                    res[i][j] += a[i][k] * b[k][j];               
                }
            }
        }
        //print
        printf("The required matrix is: \n");
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < q ; j++){
                printf("%d " , res[i][j]);
            }
        printf("\n");
    }
    }
    else{
        printf("The matrices can't be multiplied.");
    }
    
}
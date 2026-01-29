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
    //spiral
    int minr = 0;
    int minc = 0;
    int maxr = m - 1;
    int maxc = n - 1;
    while(minr <= maxr && minc <= maxc){
        //right
        for(int i = minc ; i <= maxc ; i++){
            printf("%d ", arr[minr][i]);
        }
        minr++;
        if(minr > maxr || minc > maxc) break;

        //down
        for(int i = minr ; i <= maxr ; i++){
            printf("%d ",arr[i][maxc]);
        }
        maxc--;
        if(minr > maxr || minc > maxc) break;

        //left
        for(int i = maxc ; i >= minc ; i--){
            printf("%d ",arr[maxr][i]);
        }
        maxr--;
        if(minr > maxr || minc > maxc) break;

        //up
        for(int i = maxr ; i >= minr ; i--){
            printf("%d ", arr[i][minc]);
        }
        minc++;
        if(minr > maxr || minc > maxc) break;
    }
}
#include<stdio.h>
void multiply();
int main(){
    int column;
    int row;
    printf("Enter the column size:");
    scanf("%d", &column);
    printf("Enter the row size:");
    scanf("%d", &row);
    int arr_one[row][column];
    int arr_two[row][column];
    printf("Enter the first matrix:");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d", arr_one[i][j]);
        }
    }
    printf("Enter the second matrix:");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d", arr_two[i][j]);
        }
    }
    multiply(arr_one, arr_two, column, row);
}
void multiply(int** arr_one, int** arr_two, int column, int row){
    int result[row][column];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            result[i][j] = 0;
            for (int k = 0; k < column; k++) {
                result[i][j] += arr_one[i][k] * arr_two[k][j];
            }
        }
    }
}
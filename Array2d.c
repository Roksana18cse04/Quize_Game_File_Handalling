#include<stdio.h>

/** Two dimentional array

data_type Array_name[row_size][column_size]

initialize int A[2][2]={
    {1,2},
    {2,3}
}

*/

int main(){
    int A[10][10];
    int C[10][10];
    int M[10][10];
    
    int row,col;
    printf("Enter Row and Collumn: ");
    scanf("%d%d",&row,&col);

    printf("Enter element of Array : \n");


    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("A[%d][%d] : ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nMatrix Of A:\n");

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
// adding A+A 
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            C[i][j]=A[i][j] + A[i][j];
        }
    }


    printf("Adding Matrix Of C : \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }    

    ///Multiplication A*A;
    int sum=0;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            for(int k=0;k<col;k++){
              sum=sum + (A[i][k] * A[k][j]); 
            }
            M[i][j]=sum;
            sum=0;
        }

    }
    printf("\nMultiply of M : \n");

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d\t",M[i][j]);
        }
        printf("\n");
    }


}

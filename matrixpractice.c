#include <stdio.h>

void matrix(int r1, int c1, int m1[r1][c1], int r2, int c2, int m2[r2][c2], int result[r1][c2]){
    int i, j, k;
    for (i=0; i<r1;i++){
        for (j=0; j<c2; j++){
            result[i][j]=0;
        }
    }

    for (i=0; i<r1; i++){
        for (j=0; j<c2; j++){
            for (k=0; k<c1; k++){
                result[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
}

int main(){
    int r1, r2, c1, c2;
    printf("Enter first matrix's dimension: ");
    scanf("%d%d",&r1,&c1);

    printf("Enter second matrix's dimension: ");
    scanf("%d%d",&r2,&c2);

    if(c1 != r2){
        printf("Matrices cannot be multiplied");
        return 1;
    }

    int i,j;
    int m1[r1][c1], m2[r2][c2], result[r1][c2];
    printf("Enter first matrix's elements:\n");
    for (i=0;i<r1;i++){
        for (j=0;j<c1;j++){
            scanf("%d",&m1[i][j]);
        }
    }

    printf("Enter second matrix's elements:\n");
    for (i=0;i<r2;i++){
        for (j=0;j<c2;j++){
            scanf("%d", &m2[i][j]);
        }
    }

    matrix(r1,c1,m1,r2,c2,m2,result);
    printf("Result: \n");
    for (i=0;i<r1;i++){
        for (j=0;j<c2;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
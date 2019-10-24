/*Convert matrix into echolon form using C Programing.
Date: 14 June,2019
Author: Anwesh Budhathoki*/
#include<stdio.h>

void main(){
    int i,j,step,row,column,x;
    float a,tmp;
    printf("Enter the row of matrix : ");
    scanf("%d",&row);
    printf("Enter the column of matrix : ");
    scanf("%d",&column);
    float mat[row][column];
    printf("Enter the elements of matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("m%d%d: ",i+1,j+1);
            scanf("%f",&mat[i][j]);
        }
    }
    printf("\nOriginal Matrix\n",a);
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%.1f\t",mat[i][j]);
        }
        printf("\n");
    }
    if(mat[0][0]=0){
        j=-1;
        x=0;
        do
        {
            j++;
            if(j==row){
                break;
            }
            if(mat[j][0]!=0){
                for(i=0;i<4;i++){
                tmp=mat[0][i];
                mat[0][i]=mat[1][j];
                mat[1][j]=tmp;
                }
                x=1;
            }
        } while (x!=1);   
    }
    printf("%d",j);
    a=mat[j][0]/mat[0][0];
    step++;
    printf("\nStep %d = R%d->R%d-R1*%.1f\n",step,j,j,a);
    for(i=0;i<column;i++){
        mat[1][i]-=(a*mat[0][i]);
    }
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%.1f\t",mat[i][j]);
        }
        printf("\n");
    }











    // if(mat[0][0]==0&&0!=mat[1][0]){
    //     for(i=0;i<4;i++){
    //         tmp=mat[0][i];
    //         mat[0][i]=mat[1][j];
    //         mat[1][i]=tmp;
    //     }
    // }
    // else if(mat[0][0]==0&&0!=mat[2][0]){
    //     for(i=0;i<4;i++){
    //         tmp=mat[0][i];
    //         mat[0][i]=mat[2][j];
    //         mat[2][i]=tmp;
    //     }
    // }
    // a=mat[1][0]/mat[0][0];
    // printf("\nStep 1 = R2->R2-R1*%.1f\n",a);
    // for(i=0;i<4;i++){
    //     mat[1][i]-=(a*mat[0][i]);
    // }
    // for(i=0;i<3;i++){
    //     for(j=0;j<4;j++){
    //         printf("%.1f\t",mat[i][j]);
    //     }
    //     printf("\n");
    // }
    // a=mat[2][0]/mat[0][0];
    // printf("\nStep 2 = R3->R3-R1*%.1f\n",a);
    // for(i=0;i<4;i++){
    //     mat[2][i]-=(a*mat[0][i]);
    // }
    // for(i=0;i<3;i++){
    //     for(j=0;j<4;j++){
    //         printf("%.1f\t",mat[i][j]);
    //     }
    //     printf("\n");
    // }
    // if(mat[1][1]==0&&0!=mat[2][1]){
    //     for(i=0;i<4;i++){
    //         tmp=mat[1][i];
    //         mat[1][i]=mat[2][j];
    //         mat[2][i]=tmp;
    //     }
    // }
    // a=mat[2][1]/mat[1][1];
    // printf("\nStep 3 = R3->R3-R2*%.1f\n",a);
    // for(i=0;i<4;i++){
    //     mat[2][i]-=(a*mat[1][i]);
    // }
    // for(i=0;i<3;i++){
    //     for(j=0;j<4;j++){
    //         printf("%.1f\t",mat[i][j]);
    //     }
    //     printf("\n");
    // }
}   
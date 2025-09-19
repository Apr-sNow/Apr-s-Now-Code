#include <stdio.h>
int mat[10][10];//x行y列
int juv(int lis[][],int i,int j)
{//纵向检查最小，应该返回坐标值。
    for(int x = 0;x < n;x++)
    {
        if(lis[i][j] > lis[x][j])
            return 0;///正继负跳思路
    }
    return 1;//直接用ij还是返回值？
}
int jup(int lis[][],int i,int j)
{//横向检查最大
    for(int y = 0;x < n;x++)
    {
        if(lis[i][j] < lis[i][y])
            return 0;
    }
    return 1;
}

int main(){
    int no = 0;//判断无符合///实际用不到的
    int n;
    for(int i = 0;i < 10;i++)
    {//初始化initialize
        for(int j = 0;j < 10;j++)
        {
            mat[i][j] = -32767;
        }
    }

    scanf("%d",&n);
    for(int i = 0;i < n;i++)
    {//22:43检测输入流正常运行
        for(int j = 0;j < n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            if(juv( mat[][] , i , j ) == 1 && jup( mat[][] , i , j ) == 1)
            {
                no = 1;
                printf("%d %d",i,j);//正退负等自然结束
                return 0;
            }
        }
    }
    printf("NONE");
    // for(int i = 0;i < 10;i++){//   输出数组检测
    //     for(int j = 0;j < 10;j++){
    //         printf("%d ",mat[i][j]);
    //     }
    //     printf("\n");
    // }
    return 0;
}
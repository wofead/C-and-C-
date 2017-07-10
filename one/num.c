/*************************************************************************
    > File Name: num.c
    > Author: GatieMe
    > Mail: gatieme@163.com
    > Created Time: 2017年07月09日 星期日 18时11分45秒
 ************************************************************************/
//用1到4四个数字能组成多少个无重复的三位数
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0;//数目
    int flag=1;
    int inter,byt;//数字个数和组成位数
    int *lable;
    while(flag)
    {
        printf("请输入多少个数，组成多少位数，要求位数小于个数。\n");
        scanf("%d%d",&inter,&byt);
        if(byt>=inter) {
        printf("位数要小于个数。\n");
        }else {
            flag = 0;
            lable = (int *)malloc(inter);
        }
    }
    for(int k =0;k<byt;k++){
        if(k<byt) lable[k]=1;
        else lable[k]=0;
    }

    //主要算法部分
    //循环 inter-byt+1次
    //每次循环到inter结束
    for(int i=1;i<5;i++)
    {
        for(int j=1;j<5;j++)
        {
            for(int k=1;k<5;k++){
                if(i!=j&&i!=k&&j!=k){
                    printf("%d%d%d\n",i,j,k);
                    num++;
                }
            }
         }
    }
    printf("%d\n",num);



//    printf("%2d%2d\n",inter,byt);
    return 0;
}

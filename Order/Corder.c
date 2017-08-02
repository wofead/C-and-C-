/*************************************************************************
    > File Name: Corder.c
    > Author: Houn
    > Mail: 614667387@qq.com
    > Created Time: 2017年07月11日 星期二 10时54分01秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(void)
{
    int *sort;  //排序的数字
    int num;//排序的个数
    int temp;
    printf("请输入要排序的个数:\n");
    scanf("%d",&num);
    srand(time(NULL));
    sort=(int *)malloc(num);
    for(int i=0;i<num;i++){
        temp = rand()%num;
        sort[i]=temp;
    }
    for(int i=0;i<num;i++){
        printf("%3d",sort[i]);
    }
    printf("\n");
    //排序算法开始
    int i,j;
    int max,flag;
    for(i=0;i<num;i++){
        max = sort[i];
        for(j=i;j<num;j++){
            if(sort[j+1]>max){
                max = sort[j+1];
                flag = j+1;
            }
        }
        sort[flag]=sort[i];
        sort[i]=max;
    }
    for(i=0;i<num;i++){
        printf("%3d",sort[i]);
    }
    printf("\n");
}

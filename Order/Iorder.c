/*************************************************************************
    > File Name: order.c
    > Author: Houn
    > Mail: 614667387@qq.com
    > Created Time: 2017年07月11日 星期二 09时36分51秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include<time.h>


int main(void)
{
    int *sort;  //排序的数字
    int num;//排序的个数
    int key;//键值
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
    for(i=1;i<=num;i++){
        key=sort[i];
        j = i-1;
        printf("%d\n",key);
        while(j>=0&&sort[j]<key){
            sort[j+1]=sort[j];
            j--;
        }
        sort[j+1]=key;
        for(int m=0;m<num;m++){
            printf("%3d",sort[m]);
        }
        printf("\n");

    }
    for(i=0;i<num;i++){
        printf("%3d",sort[i]);
    }
    printf("\n");
}

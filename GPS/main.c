//
//  main.c
//  GPS
//
//  Created by 20161104591 on 17/6/7.
//  Copyright © 2017年 20161104591. All rights reserved.
//

#include <stdio.h>

int main()
{
    int i,j,n,m;
    int a[10];
    printf("请输入10个数字:\n");
    for(i=1;i<=11;i++)
    {
        scanf("%d\n",&a[i]);
    }
    for(j=0;j<=n-1;j++)
    {
        for(i=0;i<=n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                m=a[i];
                a[i]=a[i+1];
                a[i+1]=m;
            }
        }
    }
            printf("%d",a[i]);
        return 0;
}

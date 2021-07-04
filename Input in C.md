<h2> C语言输入方式 </h2>
在OJ网站上做题时经常出现一种情况，那就是题会做，但是不知道多组输入如何处理，导致无法AC。

- 输入一个数，并原样输出，测试数据有多组：
```
    while(scanf(“%d”,&a)!=EOF)
    {
        printf(“%d\n”,a);
    }
```

- 先输入一个n，后输入一个共n个数的数组,输出这个数组：
```
    scanf(“%d”,&n);
    for(i=0;i<n;i++)
    {
        scanf(“%d”,&a[i]);
    }
```

- 先输入一个n后输入一个共n个数的数组，最后在跟一个数X，在这n个数中查找x：
```
    scanf(“%d”,&n);
    for(i=0;i<n;i++)
    {
        scanf(“%d”,&a[i]);
    }
    scanf(“%d”,&x);   
```
- 输入一组数，以0为结束标志：
```   
    while(scanf(“%d”,&n),n!=0)
```
示例1：输入一个数x再原样输出，测试数据有多组，以0为结束标志：
```
#include<stdio.h>
int main()
{	   
    int x;
    while(scanf("%d",&x),x!=0)
    {
        printf("%d\n",x);
    }
}
```
示例2：输入一个数组并原样输出，先输入一个n代表数组有n个数，测试数据有多组，以输入的n=0时为结束标志：
```
#include<stdio.h>
int main()       
{                    
    int n,a[10],i;
    while(scanf("%d",&n),n!=0)
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
	   	for(i=0;i<n;i++)
	   	    printf("%d ",a[i]);
	   	printf("\n");
	}
}
```
- 二维数组的输入方式：第一行输入一个n，代表接下来输入一个n*n的二维矩阵：
```
    scanf(“%d”,&n);
    for(i=0;i<n;i++）
        for(j=0;j<n;j++)
            scanf(“%d”,&a[i][j]);
```
示例：输入一个二维数组并原样输出，测试数据有多组：
> 注意：每输入一组数据，按一次回车并输出一组的结果，然后再输入下一组测试数据再按回车再输出下一组的结果。
```
#include<stdio.h> 
int main() 
{
    int n,i,j,a[10][10]; 
    while(scanf("%d",&n)!=EOF) 
    {           
        for(i=0;i<n;i++) 
            for(j=0;j<n;j++) 
                scanf("%d",&a[i][j]);   
            for(i=0;i<n;i++) 
            { 
                for(j=0;j<n;j++) 
                { 
                    printf("%d",a[i][j]); 
                        if(j!=n-1) 
                            printf(" ");   
                } 
                printf("\n"); 
            }
    }
}
```
- 末尾加char()
```
    while(scanf(“%c”,&c)!=EOF)             
    {
        末尾加getchar(); //按了回车也算是输入了一个字符
    }
```
示例：输入一个字符，并判断字符串类型：
```
#include<stdio.h> 
int main() 
{ 
    char c; 
    while(scanf("%c",&c)!=EOF) 
    { 
        if(c>='a'&&c<='z'||c>='A'&&c<='Z') 
            printf("alpha\n"); 
        else if(c>='0'&&c<='9') 
            printf("numeric\n"); 
        else printf("other\n");
		    getchar();
    }   
}                      
```

- 
```
    while(scanf(“%s”,&str)!=EOF)   (字符串中不带空格)
    {

    } 
```
示例：判断不含空格的字符串是由为回文串：
```
#include<stdio.h> 
#include<string.h>
int main() 
{ 
    char s[100]; 
    int x,u,i; 
    while(scanf("%s",s)!=EOF) 
    {       
        x=strlen(s);
        for(i=0;i<x;i++) 
        {       
            if(s[i]!=s[x-1-i]) 
            { 
                u=0;break;
            } 
            if(s[i]==s[x-1-i]) 
            { 
                u=1;
            } 
        }  
        if(u==1) 
            printf("Yes\n"); 
        else if(u==0) 
            printf("No\n");
    } 
} 
```
- 输入不含空格的字符串数组
```
    for(i=0;i<n;i++) 
        scanf("%s",s[i]); 
```
示例：输入一个n，后面跟n个无空格字符串，（相邻字符串要用空格隔开），输出字符串长度，测试数据有多组：
```
#include<string.h> 
#include<stdio.h> 
int main() 
{ 
    int n,i,j;
    while(scanf("%d",&n)!=EOF) 
    {      
        int a[20]={0};   
        char s[20][60]; 
        for(i=0;i<n;i++) 
            scanf("%s",s[i]); 
        for(i=0;i<n;i++) 
        { 
            a[i]=strlen(s[i]); 
        } 
        for(i=0;i<n;i++) 
        { 
            printf("%s",s[i]);printf("%d\n",a[i]); 
        }
    } 
}               
```
- 
```
    while(gets(str)!=NULL)      (带空格的字符串）
    {

    }  
```
示例：判断多组含空格的字符串是否为回文串：
```
#include<stdio.h> 
#include<string.h>
int main() 
{ 
    char s[100]; 
    int x,u,i;
    while(gets(s)!=NULL) 
    {       
        x=strlen(s);
        for(i=0;i<x;i++) 
        {       
            if(s[i]!=s[x-1-i]) 
            { 
                u=0;break;
            } 
            if(s[i]==s[x-1-i]) 
            { 
                u=1;
            } 
        }                      
        if(u==1) 
            printf("Yes\n"); 
        else if(u==0) 
            printf("No\n");
    } 
} 
```

- 输入字符串数组（含空格）
```
    for(i=0;i<n:i++)
        gets(s[i]);
```
示例：计算几行字符串的长度，第一行输入n，下面n行每一行输入一个含空格的字符串：
```
#include<string.h> 
#include<stdio.h> 
int main() 
{ 
    int n,i,j;
    char s[20][60]; 
    while(scanf("%d",&n)!=EOF) 
    {      
        int a[20]={0};
        for(i=0;i<n;i++) 
            gets(s[i]); 
        for(i=0;i<n;i++) 
        { 
            a[i]=strlen(s[i]); 
        } 
        for(i=0;i<n;i++) 
        { 
            printf("%d\n",a[i]); 
        }
    } 
}
```

- 测试数据有T组，先输入一个组数T，接下来每一行第一个数为每组数的个数n，n的后面再跟n个数：
```
    scanf(“%d\n”,&T);                                
    while(T--)      //当T减到0跳出循环
    {    
        scanf(“%d”,&n);
        for(i=0;i<n;i++)
            scanf(“%d”,&a[i]);
    }
```
示例：输入一个一维数组，并原样输出，先输入一个T，代表有T组测试数据，下面T行每行第一个数n代表每个数组的元素个数：
```
#include<stdio.h> 
int main() 
{ 
    int n,i,a[10],T;  
    scanf(“%d”,&T);
    while(T--)
    {                                                    scanf("%d",&n);                          
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
        printf("\n");
    } 
}
```
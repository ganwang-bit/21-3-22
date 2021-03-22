//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a,b,c,flag=0;
//    scanf("%d%d",&a,&b);
//    c=a*b;
//    while(c)
//    {
//        if(c%10||flag)
//        {
//            printf("%d",c%10);
//            flag=1;
//        }
//        c/=10;
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,j;
//    long double sum=1,jie=1;
//    scanf("%d",&n);
//    for(i=1;i<=n;i++)
//    {
//        jie=1;
//        for(j=1;j<=i;j++)
//            jie*=j;
//        sum+=1/jie;
//    }
//
//    printf("%.8llf",sum);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    long long m,n,tmp,a,b;
//    scanf("%lld%lld",&m,&n);
//    a=m;
//    b=n;
//    while(m%n)
//    {
//        tmp=m;
//        m=n;
//        n=tmp%n;
//    }
//    printf("%lld %lld",n,b*a/n);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a=1,b=1,i,tmp;
//    for(i=1;i<=20;i++)
//    {
//        printf("%8d",a);
//        tmp=a;
//        a=b;
//        b=tmp+b;
//        if(i%5==0)
//            printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,tmp;
//    int arr[10005]={0};
//    arr[1]=1;
//    arr[2]=2;
//    arr[3]=4;
//    arr[4]=8;
//    for(i=5;i<10000;i++)
//        arr[i]=arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4];
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&tmp);
//        printf("%d\n",arr[tmp]);
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int count=0;
//char cheng[3][3]={{1,1,0},{2,1,0},{0,2,2}};
//char* change(char*arr,int n)
//{
//    int i;
//    char*tmp=(char*)malloc(21);
//    strcpy(tmp,arr);
//    tmp[n]=cheng[tmp[n]-'a'][tmp[n+1]-'a']+'a';
//    for(i=n+1;i<strlen(tmp);i++)
//        tmp[i]=tmp[i+1];
//    return tmp;
//}
//void func(char*arr,int n)
//{
//    int i;
//    if(strlen(arr)==2)
//    {
//        if(cheng[arr[0]-'a'][arr[1]-'a']==0)
//            count++;
//    }
//    else
//    {
//        if(n==0)
//            func(change(arr,0),0);
//        else if(n==strlen(arr))
//            func(change(arr,n-1),n-1);
//        else
//        {
//            func(change(arr,n-1),n-1);
//            func(change(arr,n),n);
//        }
//    }
//
//}
//int main()
//{
//    char arr[21];
//    int i;
//    scanf("%s",arr);
//    if(strlen(arr)==2)
//    {
//        if(cheng[arr[0]-'a'][arr[1]-'a']==0)
//            count++;
//    }
//    else
//    {
//        for(i=0;i<strlen(arr)-1;i++)
//            func(change(arr,i),i);
//    }
//    printf("%d",count);
//    return 0;
//}

#include<bits/stdc++.h>


int main()
{
    int a,b,n;
    std::cin>>a>>b>>n;

    for(int i=n;i<=100000;i++)
    {
        if(i%a==0&&i%b==0)
        {
            std::cout<<i<<std::endl;
            break;
        }
    }
}
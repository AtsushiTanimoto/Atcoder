#include<bits/stdc++.h>

int main()
{
    int a,b,c;
    std::cin>>a>>b>>c;

    if(a+b==2*c||b+c==2*a||c+a==2*b)
    {
        std::cout<<"Yes"<<std::endl;
    }
    else
    {
        std::cout<<"No"<<std::endl;
    }
}
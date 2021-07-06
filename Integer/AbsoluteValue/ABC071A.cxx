#include<bits/stdc++.h>

int main()
{
    int x,a,b;
    std::cin>>x>>a>>b;

    if(std::abs(a-x)<std::abs(b-x))
    {
        std::cout<<"A"<<std::endl;
    }
    else
    {
        std::cout<<"B"<<std::endl;
    }
}
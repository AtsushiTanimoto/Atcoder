#include<bits/stdc++.h>

int main()
{
    int X,Y;
    std::cin>>X>>Y;

    if(std::abs(Y-X)<3)
    {
        std::cout<<"Yes"<<std::endl;
    }
    else
    {
        std::cout<<"No"<<std::endl;
    }
}
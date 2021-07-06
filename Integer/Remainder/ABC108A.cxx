#include<bits/stdc++.h>

int main()
{
    int K;
    std::cin>>K;

    if(K%2==0)
    {
        std::cout<<(K/2)*(K/2)<<std::endl;
    }
    else
    {
        std::cout<<(K/2)*(1+K/2)<<std::endl;
    }
}
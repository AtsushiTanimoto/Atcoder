#include<bits/stdc++.h>

int main()
{
    int N;
    std::cin>>N;

    if(N/10==9||N%10==9)
    {
        std::cout<<"Yes"<<std::endl;
    }
    else
    {
        std::cout<<"No"<<std::endl;
    }
}
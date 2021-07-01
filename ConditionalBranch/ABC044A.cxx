#include<bits/stdc++.h>

int main()
{
    int N,K,X,Y;
    std::cin>>N>>K>>X>>Y;

    if(N<=K)
    {
        std::cout<<N*X<<std::endl;
    }
    else
    {
        std::cout<<K*X+(N-K)*Y<<std::endl;
    }
}
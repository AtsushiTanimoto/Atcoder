#include<bits/stdc++.h>


int main()
{
    int S,T,X;
    std::cin>>S>>T>>X;

    if(S<T)
    {
        if(S<=X and X<T)
        {
            std::cout<<"Yes"<<std::endl;
        }
        else
        {
            std::cout<<"No"<<std::endl;
        }
    }
    else
    {
        if(X<T or S<=X)
        {
            std::cout<<"Yes"<<std::endl;
        }
        else
        {
            std::cout<<"No"<<std::endl;
        }
    }
}
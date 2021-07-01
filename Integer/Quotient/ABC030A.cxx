#include<bits/stdc++.h>

int main()
{
    double A,B,C,D;
    std::cin>>A>>B>>C>>D;

    if(B/A<D/C)
    {
        std::cout<<"AOKI"<<std::endl;
    }
    else if(B/A==D/C)
    {
        std::cout<<"DRAW"<<std::endl;
    }
    else
    {
        std::cout<<"TAKAHASHI"<<std::endl;
    }
}
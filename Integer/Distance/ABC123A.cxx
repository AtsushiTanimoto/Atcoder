#include<bits/stdc++.h>

int main()
{
    int A,B,C,D,E,K;
    std::cin>>A>>B>>C>>D>>E>>K;

    if(E-A<=K)
    {
        std::cout<<"Yay!"<<std::endl;
    }
    else
    {
        std::cout<<":("<<std::endl;
    }
}
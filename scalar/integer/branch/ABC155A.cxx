#include<bits/stdc++.h>

int main()
{
    int A,B,C;
    std::cin>>A>>B>>C;

    if((A==B and B!=C) or (B==C and C!=A) or (C==A and A!=B))
    {
        std::cout<<"Yes"<<std::endl;
    }
    else
    {
        std::cout<<"No"<<std::endl;
    }
}
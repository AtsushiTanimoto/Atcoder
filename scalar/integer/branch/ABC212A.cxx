#include<bits/stdc++.h>


int main()
{
    int A,B;
    std::cin>>A>>B;

    if(A!=0 and B==0)
    {
        std::cout<<"Gold"<<std::endl;
    }
    else if(A==0 and B!=0)
    {
        std::cout<<"Silver"<<std::endl;
    }
    else
    {
        std::cout<<"Alloy"<<std::endl;
    }
}
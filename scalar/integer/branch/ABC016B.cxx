#include<bits/stdc++.h>


int main()
{
    int A,B,C;
    std::cin>>A>>B>>C;

    if(A+B==C&&A-B==C)
    {
        std::cout<<"?"<<std::endl;
    }
    else if(A+B==C&&A-B!=C)
    {
        std::cout<<"+"<<std::endl;
    }
    else if(A+B!=C&&A-B==C)
    {
        std::cout<<"-"<<std::endl;
    }
    else
    {
        std::cout<<"!"<<std::endl;
    }
}
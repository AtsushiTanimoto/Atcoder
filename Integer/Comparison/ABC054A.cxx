#include<bits/stdc++.h>

int main()
{
    int A,B;
    std::cin>>A>>B;

    if(A==1)
    {
        A = 14;
    }

    if(B==1)
    {
        B = 14;
    }

    if(A<B)
    {
        std::cout<<"Bob"<<std::endl;
    }
    else if(A==B)
    {
        std::cout<<"Draw"<<std::endl;
    }
    else
    {
        std::cout<<"Alice"<<std::endl;
    }
}
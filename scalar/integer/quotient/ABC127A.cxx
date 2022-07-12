#include<bits/stdc++.h>

int main()
{
    int A,B;
    std::cin>>A>>B;

    if(A<=5)
    {
        std::cout<<0<<std::endl;
    }
    else if(A<=12)
    {
        std::cout<<B/2<<std::endl;
    }
    else
    {
        std::cout<<B<<std::endl;
    }
}
#include<bits/stdc++.h>

int main()
{
    std::string A,B;
    std::cin>>A>>B;

    if(A.size()<B.size())
    {
        std::cout<<B<<std::endl;
    }
    else
    {
        std::cout<<A<<std::endl;
    }
}
#include<bits/stdc++.h>

int main()
{
    std::string S;
    std::cin>>S;

    if(S=="SSS")
    {
        std::cout<<0<<std::endl;
    }
    else if(S=="RSS"||S=="SRS"||S=="SSR"||S=="RSR")
    {
        std::cout<<1<<std::endl;
    }
    else if(S=="RRS"||S=="SRR")
    {
        std::cout<<2<<std::endl;
    }
    else
    {
        std::cout<<3<<std::endl;
    }
}
#include<bits/stdc++.h>


int main()
{
    std::string S1,S2;
    std::cin>>S1>>S2;

    if(S1=="#." and S2==".#")
    {
        std::cout<<"No"<<std::endl;
    }
    else if(S1==".#" and S2=="#.")
    {
        std::cout<<"No"<<std::endl;
    }
    else
    {
        std::cout<<"Yes"<<std::endl;
    }
}
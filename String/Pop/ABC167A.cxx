#include<bits/stdc++.h>

int main()
{
    std::string S,T;
    std::cin>>S>>T;
    T.pop_back();

    if(S==T)
    {
        std::cout<<"Yes"<<std::endl;
    }
    else
    {
        std::cout<<"No"<<std::endl;
    }
}
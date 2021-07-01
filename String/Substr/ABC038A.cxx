#include<bits/stdc++.h>

int main()
{
    std::string S;
    std::cin>>S;

    if(S.substr(S.length()-1)=="T")
    {
        std::cout<<"YES"<<std::endl;
    }
    else
    {
        std::cout<<"NO"<<std::endl;
    }
}
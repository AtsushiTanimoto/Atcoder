#include<bits/stdc++.h>


int main()
{
    std::string X;
    std::cin>>X;

    if(std::regex_match(X,std::regex("(ch|o|k|u)*")))
    {
        std::cout<<"YES"<<std::endl;
    }
    else
    {
        std::cout<<"NO"<<std::endl;
    }
}
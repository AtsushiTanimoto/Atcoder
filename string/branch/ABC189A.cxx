#include<bits/stdc++.h>


int main()
{
    std::string S;
    std::cin>>S;

    if(S[0]==S[1] and S[1]==S[2])
    {
        std::cout<<"Won"<<std::endl;
    }
    else
    {
        std::cout<<"Lost"<<std::endl;
    }
}
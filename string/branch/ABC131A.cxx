#include<bits/stdc++.h>


int main()
{
    std::string S;
    std::cin>>S;

    if(S[0]==S[1] or S[1]==S[2] or S[2]==S[3])
    {
        std::cout<<"Bad"<<std::endl;
    }
    else
    {
        std::cout<<"Good"<<std::endl;
    }
}
#include<bits/stdc++.h>


int main()
{
    std::string S;
    std::cin>>S;
    std::sort(S.begin(),S.end());

    if(S[0]==S[1]&&S[1]==S[2])
    {
        std::cout<<1<<std::endl;
    }
    else if(S[0]==S[1]||S[1]==S[2])
    {
        std::cout<<3<<std::endl;
    }
    else
    {
        std::cout<<6<<std::endl;
    }
}
#include<bits/stdc++.h>


int main()
{
    std::string S;
    std::cin>>S;

    if(S[0]!=S[1] or S[1]!=S[2])
    {
        std::cout<<"Yes"<<std::endl;
    }
    else
    {
        std::cout<<"No"<<std::endl;
    }
}
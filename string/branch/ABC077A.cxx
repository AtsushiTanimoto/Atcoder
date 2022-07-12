#include<bits/stdc++.h>


int main()
{
    std::string S,T;
    std::cin>>S>>T;

    if(S[0]==T[2] and S[1]==T[1] and S[2]==T[0])
    {
        std::cout<<"YES"<<std::endl;
    }
    else
    {
        std::cout<<"NO"<<std::endl;
    }
}
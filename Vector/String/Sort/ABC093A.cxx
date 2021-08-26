#include<bits/stdc++.h>

int main()
{
    std::string S;
    std::cin>>S;
    std::sort(S.begin(),S.end());

    if(S=="abc")
    {
        std::cout<<"Yes"<<std::endl;
    }
    else
    {
        std::cout<<"No"<<std::endl;
    }
}
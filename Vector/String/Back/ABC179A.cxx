#include<bits/stdc++.h>

int main()
{
    std::string S;
    std::cin>>S;

    if(S.back()!='s')
    {
        std::cout<<S+"s"<<std::endl;
    }
    else
    {
        std::cout<<S+"es"<<std::endl;
    }
}
#include<bits/stdc++.h>

int main()
{
    std::string S;
    std::cin>>S;
    std::cout<<std::count(S.begin(),S.end(),'+')-std::count(S.begin(),S.end(),'-')<<std::endl;
}
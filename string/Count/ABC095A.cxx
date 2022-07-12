#include<bits/stdc++.h>

int main()
{
    std::string S;
    std::cin>>S;
    std::cout<<700+100*std::count(S.begin(),S.end(),'o')<<std::endl;
}
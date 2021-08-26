#include<bits/stdc++.h>


int main()
{
    std::string S;
    std::cin>>S;
    std::replace(S.begin(),S.end(),',',' ');
    std::cout<<S<<std::endl;
}
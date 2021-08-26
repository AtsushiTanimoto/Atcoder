#include<bits/stdc++.h>


int main()
{
    std::string S;
    std::cin>>S;
    std::transform(S.begin(),S.end(),S.begin(),::tolower);
    S[0] = std::toupper(S[0]);
    std::cout<<S<<std::endl;
}
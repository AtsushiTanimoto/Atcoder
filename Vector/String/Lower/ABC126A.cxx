#include<bits/stdc++.h>

int main()
{
    int N,K;
    std::string S;
    std::cin>>N>>K>>S;
    S[K-1] = std::tolower(S[K-1]);
    std::cout<<S<<std::endl;
}
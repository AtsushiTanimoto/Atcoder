#include<bits/stdc++.h>

int main()
{
    std::string S;
    int N;
    std::cin>>S>>N;
    std::cout<<S[(N-1)/5]<<S[(N-1)%5]<<std::endl;
}
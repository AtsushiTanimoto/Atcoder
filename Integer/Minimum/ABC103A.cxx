#include<bits/stdc++.h>

int main()
{
    int A,B,C;
    std::cin>>A>>B>>C;
    std::cout<<std::max({A,B,C})-std::min({A,B,C})<<std::endl;
}
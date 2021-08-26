#include<bits/stdc++.h>

int main()
{
    int A,B,C;
    std::cin>>A>>B>>C;
    std::cout<<std::max({10*A+B+C,A+10*B+C,A+B+10*C})<<std::endl;
}
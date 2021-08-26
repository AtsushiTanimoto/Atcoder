#include<bits/stdc++.h>


int main()
{
    int A,B,C;
    std::cin>>A>>B;
    C = std::abs(B-A);
    std::cout<<std::min(C,10-C)<<std::endl;
}
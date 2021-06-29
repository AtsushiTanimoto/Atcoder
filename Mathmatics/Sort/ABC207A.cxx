#include<bits/stdc++.h>

int main()
{
    int A,B,C;
    std::cin>>A>>B>>C;
    std::cout<<std::max(std::max(A+B,B+C),C+A)<<std::endl;
}
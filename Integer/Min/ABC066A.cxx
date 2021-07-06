#include<bits/stdc++.h>

int main()
{
    int A,B,C;
    std::cin>>A>>B>>C;
    std::cout<<std::min(A+B,std::min(B+C,C+A))<<std::endl;
}
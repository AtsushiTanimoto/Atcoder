#include<bits/stdc++.h>

int main()
{
    int A,B;
    std::cin>>A>>B;

    if(A==B)
    {
        std::cout<<2*std::max(A,B)<<std::endl;
    }
    else
    {
        std::cout<<2*std::max(A,B)-1<<std::endl;
    }
}
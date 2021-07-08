#include<bits/stdc++.h>

int main()
{
    int A,B;
    std::cin>>A>>B;
    
    if(B%A==0)
    {
        std::cout<<B+A<<std::endl;
    }
    else
    {
        std::cout<<B-A<<std::endl;
    }
}
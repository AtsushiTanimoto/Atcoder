#include<bits/stdc++.h>

int main()
{
    int A,B;
    std::string S,T,U;
    std::cin>>S>>T>>A>>B>>U;

    if(S==U)
    {
        std::cout<<A-1<<" "<<B<<std::endl;
    }
    else
    {
        std::cout<<A<<" "<<B-1<<std::endl;
    }
}
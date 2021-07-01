#include<bits/stdc++.h>

int main()
{
    int A,B;
    std::string O;
    std::cin>>A>>O>>B;

    if(O=="+")
    {
        std::cout<<A+B<<std::endl;
    }
    else
    {
        std::cout<<A-B<<std::endl;
    }
}
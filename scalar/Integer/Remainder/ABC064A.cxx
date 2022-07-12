#include<bits/stdc++.h>

int main()
{
    int R,G,B;
    std::cin>>R>>G>>B;

    if((100*R+10*G+B)%4==0)
    {
        std::cout<<"YES"<<std::endl;
    }
    else
    {
        std::cout<<"NO"<<std::endl;
    }
}
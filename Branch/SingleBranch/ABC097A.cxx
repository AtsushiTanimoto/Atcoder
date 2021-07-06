#include<bits/stdc++.h>

int main()
{
    int A,B,C,D;
    std::cin>>A>>B>>C>>D;

    if(std::abs(C-A)<=D||std::abs(B-A)<=D&&std::abs(C-B)<=D)
    {
        std::cout<<"Yes"<<std::endl;
    }
    else
    {
        std::cout<<"No"<<std::endl;
    }
}
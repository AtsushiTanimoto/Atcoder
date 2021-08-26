#include<bits/stdc++.h>

int main()
{
    int N,R;
    std::cin>>N>>R;

    if(N<=9)
    {
        std::cout<<R+100*(10-N)<<std::endl;
    }
    else
    {
        std::cout<<R<<std::endl;
    }
}
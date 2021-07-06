#include<bits/stdc++.h>

int main()
{
    int N;
    std::cin>>N;

    if(N/10%111==0||N%1000%111==0)
    {
        std::cout<<"Yes"<<std::endl;
    }
    else
    {
        std::cout<<"No"<<std::endl;
    }
}
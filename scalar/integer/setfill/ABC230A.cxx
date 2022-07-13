#include<bits/stdc++.h>


int main()
{
    int N;
    std::cin>>N;

    if(42<=N)
    {
        N++;
    }

    std::cout<<"AGC"<<std::setfill('0')<<std::setw(3)<<N<<std::endl;
}
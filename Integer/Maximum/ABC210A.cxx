#include<bits/stdc++.h>


int main()
{
    int N,A,X,Y;
    std::cin>>N>>A>>X>>Y;
    std::cout<<std::min(N,A)*X+std::max(0,N-A)*Y<<std::endl;
}
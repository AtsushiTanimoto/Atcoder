#include<bits/stdc++.h>


int main()
{
    int N;
    std::cin>>N;
    std::printf("%02d:%02d:%02d",N/3600,(N%3600)/60,N%60);
}
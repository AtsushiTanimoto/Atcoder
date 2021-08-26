#include<bits/stdc++.h>


int main()
{
    int N;
    std::cin>>N;
    std::vector<int> T(N);

    for(int i=0;i<N;i++)
    {
        std::cin>>T[i];
    }

    std::cout<<*std::min_element(T.begin(),T.end())<<std::endl;
}
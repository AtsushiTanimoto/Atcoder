#include<bits/stdc++.h>


int main()
{
    std::string S;
    int N,L,R;
    std::cin>>S>>N;

    for(int i=0;i<N;i++)
    {
        std::cin>>L>>R;
        std::reverse(S.begin()+L-1,S.begin()+R);
    }

    std::cout<<S<<std::endl;
}
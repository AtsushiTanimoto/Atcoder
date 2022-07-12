#include<bits/stdc++.h>


int main()
{
    int ans = 0;
    int N,X;
    std::cin>>N>>X;
    std::vector<int> A(N);

    for(int i=0;i<N;i++)
    {
        std::cin>>A[i];
    }

    for(int i=0;i<N;i++)
    {
        if(X&(1<<i))
        {
            ans+=A[i];
        }
    }

    std::cout<<ans<<std::endl;
}
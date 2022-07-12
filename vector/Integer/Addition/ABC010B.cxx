#include<bits/stdc++.h>


int main()
{
    int a;
    int ans = 0;
    int N;
    std::cin>>N;
    std::vector<int> A{0,1,0,1,2,3,0,1,0};
    
    for(int i=0;i<N;i++)
    {
        std::cin>>a;
        ans+=A[a-1];
    }
    
    std::cout<<ans<<std::endl;
}
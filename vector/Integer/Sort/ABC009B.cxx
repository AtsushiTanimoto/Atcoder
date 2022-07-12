#include<bits/stdc++.h>


int main()
{
    int a;
    int N;
    std::cin>>N;
    std::set<int> A;
    
    for(int i=0;i<N;i++)
    {
        std::cin>>a;
        A.insert(a);
    }

    std::vector<int> B(A.begin(),A.end());
    std::sort(B.begin(),B.end(),std::greater<int>{});
    std::cout<<B[1]<<std::endl;
}
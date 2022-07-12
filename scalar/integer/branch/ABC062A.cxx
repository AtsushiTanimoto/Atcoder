#include<bits/stdc++.h>

int main()
{
    int x,y;
    int A[13] = {0,1,3,1,2,1,2,1,1,2,1,2,1};
    std::cin>>x>>y;

    if(A[x]==A[y])
    {
        std::cout<<"Yes"<<std::endl;
    }
    else
    {
        std::cout<<"No"<<std::endl;
    }
}
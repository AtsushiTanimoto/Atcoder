#include<bits/stdc++.h>

int main()
{
    std::set<int> S;
    int a;

    for(int i=0;i<3;i++)
    {
        std::cin>>a;
        S.insert(a);
    }

    std::cout<<S.size()<<std::endl;
}
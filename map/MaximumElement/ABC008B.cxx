#include<bits/stdc++.h>


int main()
{
    int N;
    std::cin>>N;
    std::string S;
    std::map<std::string,int> map;

    for(int i=0;i<N;i++)
    {
        std::cin>>S;
        map[S]++;
    }

    std::cout<<std::max_element(map.begin(),map.end(),map.value_comp())->first<<std::endl;
}
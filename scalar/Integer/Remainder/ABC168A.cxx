#include<bits/stdc++.h>

int main()
{
    int N,R;
    std::cin>>N;
    R = N%10;

    if(R==2||R==4||R==5||R==7||R==9)
    {
        std::cout<<"hon"<<std::endl;
    }
    else if(R==0||R==1||R==6||R==8)
    {
        std::cout<<"pon"<<std::endl;
    }
    else
    {
        std::cout<<"bon"<<std::endl;
    }
}
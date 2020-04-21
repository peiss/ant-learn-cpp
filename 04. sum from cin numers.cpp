/**
 * 计算从cin得到的很多个不定长的数字的和
 */

#include<iostream>

int main(){
    std::cout<<"please input numbers"<<std::endl;
    int number;
    int sum=0;
    while(std::cin>>number){
        sum+=number;
    }
    std::cout<<"result is "<<sum<<std::endl;
    return 0;
}
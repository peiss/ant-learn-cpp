#include<iostream>

int main(){
    int num1=50, num2=100;
    int sum=0;
    while(num1<=num2){
        sum+=num1;
        num1++;
    }
    std::cout<<"sum betweeen "<<num1<<" "<<num2<<"="<<sum<<std::endl;
    return 0;
}
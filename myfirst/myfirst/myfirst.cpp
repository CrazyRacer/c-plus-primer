//
//  main.cpp
//  myfirst
//
//  Created by 于鹏 on 16/2/5.
//  Copyright © 2016年 于鹏. All rights reserved.
//

#include <iostream>
using namespace std;
class Circle {
public:
    
    void setR(double r){
        m_r = r;
    }
    double getR(){
        return m_r;
    }
    double caculateS(){
        return m_r*m_r;
    }
private:
    double m_s; //圆的面积
    double m_r; //圆的半径
};
void objecttest(){
    using namespace std;
    Circle ci = Circle();
    ci.setR(2);
    double r = ci.caculateS();
    cout<< r;
}



void iotest(){
    std::cout<<"Enter two numbers:"<< std::endl;
    int v1 =0 , v2 = 0 ;
    std::cin>> v1>> v2;
    std::cout<<"The sum of "<<v1<<" and "<< v2 << " is "<< v1+v2 << std::endl;
    
}


void whiletest(){
    
    int sum =0 , val = 1;
    while(val<=10){
        sum+=val;
        val++;
    }
    cout<<"Sum of 1 to 10 is "<<sum<<endl;
    
}

void fortest(){
    int sum = 0 ;
    for(int val=0;val<=10;val++){
        sum+=val;
    }
    cout<<"Sum of 1 to 10 is "<<sum<<endl;
}
//mac 上使用 ctrl+d 来结束输入
void somecin(){
    int sum = 0 , value =0;
    while(cin>>value){
        sum+=value;
    }
    cout<<"Sum is" << sum<<endl;
    
    
}



int main(int argc, const char * argv[]) {
    //    iotest();
    //    whiletest();
    //    fortest();
    somecin();
    return 0;
}






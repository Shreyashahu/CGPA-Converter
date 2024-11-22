#include<iostream>
using namespace std;

float cgpaCalculator(){
    float percent = 0, cgpa;
    cout<<"Enter your CGPA : "<<endl;
    cin>>cgpa;
    while(cgpa<0){
        cout<<"Enter valid CGPA : "<<endl;
    }
    percent = cgpa * 9.5;
    return percent;
}


int main(){
    float percentage;
    cout<<"CGPA TO PERCENTAGE CALCULATOR"<<endl<<endl;
    percentage = cgpaCalculator();
    cout<<"The percentage is : "<<percentage<<"%";
    return 0;
}
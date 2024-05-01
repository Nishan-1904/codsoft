#include <iostream>
using namespace std;

int main(){
    
    cout<<"-----------Simple Calculator-----------"<<endl;
    float a,b;
    int choice;
    cout<<"Enter the 1st Number: ";
    cin>>a;
    cout<<"Enter the 2nd Number: ";
    cin>>b;
    cout<<"1. Addition"<<endl<<"2. Subtraction"<<endl<<"3. Multiplication"<<endl<<"4. Division"<<endl;
    cout<<"Enter your choice(1,2,3 or 4): ";
    cin>>choice;
    if(choice == 1){
        cout<<"Answer: "<<a+b;
    }
    else if(choice == 2){
        cout<<"Answer: "<<a-b;
    }
    else if(choice ==3){
        cout<<"Answer: "<<a*b;
    }
    else if(choice == 4){
        cout<<"Answer: "<<a/b;
    }
}
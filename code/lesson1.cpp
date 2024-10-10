#include <iostream>

using namespace std;

int main()
{
    cout<<"by llooollloo, variables"<<endl<<endl;
    
    int number1, number2, number3;
    
    cout<<"Type number: ";
    cin>>number1;     //the user types in a number 
    cout<<"Type another one: ";
    cin>>number2;
    cout<<"This is the very last one: ";
    cin>>number3;
    
    int total = number1 + number2 + number3;
    
    cout<<"The sum is resulting: "<<total<<endl;
    
    cout<<"Thanks!"<<endl;
    
    return 0;
    
}

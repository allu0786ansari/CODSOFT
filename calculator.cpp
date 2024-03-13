#include <iostream>
#include <iomanip>
using namespace std;
class Calculator{
    double num1,num2;
    char operation;
public:
    Calculator(double n1, double n2, char op):num1(n1), num2(n2),operation(op){}
    double Calculation()
    {
        double result;
        bool error=false;
        switch(operation)
        {
            case '+':
            result=num1+num2;
            break;
            case '-':
            result=num1-num2;
            break;
            case '*':
            result=num1*num2;
            break;
            case '/':
                if(num2!=0){
                result=num1/num2;
                } else {
                cout<<"Error: Cannot divide by zero!"<<endl;
                error=true;
                }
            break;
        }
        if(!error)
        {
            cout<<"OUTPUT:"<<endl;
            cout<<"--------"<<endl;
            cout<<num1<<" "<<operation<<" " <<num2<<" = "<<result<<endl;
        }
        return result;
    }
};
int main()
{
    double n1,n2;
    char operation;
    char choice= 'y';
    while(choice =='y' || choice=='Y'){
        cout<<"Enter the first number: ";
        cin>>n1;
        cout<<"Enter the second number: ";
        cin>>n2;
        cout<<"Enter the operator: ";
        cin>>operation;
        Calculator calc(n1,n2,operation);
        calc.Calculation();
        cout<<"Do you want to  perform another calculation?(y/n)";
        cin>>choice;
    }
    return 0;
}

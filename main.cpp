#include <iostream>

using namespace std;

double add (double num1 , double num2)
{
return num1+num2;
}
double Minus (double num1 , double num2)
{
return num1-num2;
}
double multiply (double num1 , double num2)
{
return num1*num2;
}
double divide (double num1 , double num2)
{
return num1/num2;
}
int Modulus (int num1 , int num2)
{
return num1%num2;
}
double add_three (double num1,double num2,double num3)
{
return num1+num2+num3;
}
double minus_three (double num1, double num2 , double num3)
{
return num1-num2-num3;
}

int main()
{
    while(true)
    {
        int Choice;
        cout << "Choose number of function you need\n1-Add two numbers \n2-minus two numbers\n3-multiply two numbers \n4-divide two numbers \n5-modulus number \n6-Add three number \n7-minus two numbers \n0-Exit\n" ;
        cout<<"Choice: ";
        cin>>Choice;
        if(Choice==1)
        {int num1;
        int num2;

        cin>>num1>>num2;
           cout<< add(num1,num2);

        }
        else if(Choice==2)

        { int num1;
        int num2;
        cin>>num1>>num2;
         cout<<  Minus(num1,num2);
        }
        else if(Choice==3)
        {int num1;
        int num2;
            cin>>num1>>num2;
        cout<<  multiply(num1,num2);
        }
        else if(Choice==4)
        {int num1;
        int num2;
            cin>>num1>>num2;
         cout<< divide(num1,num2);
        }
        else if(Choice==5)
        { int num1 ;
        int num2;
        cin>>num1>>num2;
        cout<<Modulus(num1,num2);

        }
        else if(Choice==6)
        {int num1;
        int num2;
        int num3;
            cin>>num1>>num2>>num3;
        cout<<add_three(num1,num2,num3);

        }
        else if(Choice==7)
        { int num1;
        int num2;
        int num3;
            cin>>num1>>num2>>num3;
        cout<< minus_three(num1,num2,num3);

        }
        else if(Choice==0)
        {
            //Exit
            break;
        }
        else
        {
            cout<<"Wrong Choice";
        }
    }
    cout<<endl<<"Thanks for using calculator";
    return 0;
}

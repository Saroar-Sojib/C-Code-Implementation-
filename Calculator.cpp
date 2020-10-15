#include<bits/stdc++.h>
using namespace std;

//its for Addition
void Add()
{
    int p;
    cout<<"How many number you want to calculate: ";
    cin>>p;
    cout<<"Enter your Number: ";
    float sum=0.0;
    while(p--)
    {
        float q;
        cin>>q;
        sum=sum+q;
    }
    cout<<"The summation is :"<<sum<<endl;
}

//its for Subtraction
void Sub()
{
    cout<<"You can only input 2 Number"<<endl;
    cout<<"Enter your Number :";
    float a,b;
    cin>>a>>b;
    cout<<"the Subtraction is: "<<a-b<<endl;
}

//its for Multiplication
void Mull()
{
     int p;
    cout<<"How many number you want to calculate: ";
    cin>>p;
    cout<<"Enter your Number: ";
    float sum=1.0;
    while(p--)
    {
        float q;
        cin>>q;
        sum=sum*q;
    }
    cout<<"The Multiplication is :"<<sum<<endl;
}

// its for Division
void Div()
{
    cout<<"You can only input 2 Number"<<endl;
    cout<<"Enter your Number :";
    float a,b;
    cin>>a>>b;
    cout<<"the Division is: "<<a/b<<endl;
}

//its for Power
void Power()
{
    cout<<"Enter your Number: ";
    int a;
    cin>>a;
    cout<<"Enter your power base: ";
    int b;
    cin>>b;
    cout<<"Your result is: "<<pow(a,b)<<endl;

}
//its for Square root
void Sqrt()
{
    cout<<"Enter your number: ";
    float a;
    cin>>a;
    cout<<"The result is: "<<sqrt(a)<<endl;
}
// its for modulodivision
void Mod()
{
   cout<<"Enter your first Number: ";
   int a;
   cin>>a;
   cout<<"Enter Your Second Number: ";
   int b;
   cin>>b;
   cout<<"The mod is : "<<a%b<<endl;
}

// its main function
int main()
{
    cout<<"1.Add\t2.Sub\t3.Mull"<<endl;
    cout<<"4.Div\t5.Power\t6.Sqrt"<<endl;
    cout<<"7.Mod\t8.Exit"<<endl;

    while(true)
    {
        int n;
        cout<<"Enter your Choice: ";
        cin>>n;
        switch(n)
        {
            case 1:
                Add();
                break;

            case 2:
                Sub();
                break;

            case 3:
                Mull();
                break;

            case 4:
                Div();
                break;

            case 5:
                Power();
                break;

            case 6:
                Sqrt();
                break;

            case 7:
                Mod();
                break;
            case 8:
                return 0;  // its for loop execution that means ending the program
                break;


        }
    }

}
//

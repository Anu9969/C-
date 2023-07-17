#include <iostream>
#include <string>
using namespace std;

// int main(){
//     float num1,num2 ,sum ,average;
//     cout<<"Enter 2 numbers:"<<endl;
//     cin>>num1;         //reads number from keyboard
//     cin>>num2;

//     sum = num1+num2;
//     average=sum/2;

//     cout<<"Sum of "<<num1<<" and "<<num2<<" is "<<sum<<endl;
//     cout<<"Average of "<<num1<<" and "<<num2<<" is "<<average<<endl;

//     return 0;

// }

// *****************************************************************

// example 2

// An example with Class

// class person{
//     char name[30];
//     int age;

//     public:
//          void getdata(void);
//          void display(void);

// };
// void person ::getdata(void)
// {
//         cout<<"Enter Name:";
//         cin>>name;
//         cout<<"Enter Age:";
//         cin>>age;
// }
// void person::display(void)
// {
//         cout<<"\nName:"<<name;
//         cout<<"\nAge:"<<age;
// }

// int main()
// {
//     person p;

//     p.getdata();
//     p.display();

//     return 0;
// }

//******************************************************************

// exercise questions (greater of two numbers)

// int main(){
//     int a ,b ,greater;

//     cout<<"enter two numbers:";
//     cin>>a;
//     cin>>b;

//     if (a>b)
//     {
//         cout<<a<<" is greater than "<<b;
//     }
//     else{
//         cout<<b<<" is greater than "<<a;
//     }

//     return 0;

// }

// *****************************************************************
// loop number of times
// int main(){
//     int a,i;
//     cout<<"Enter a number:";
//     cin>>a;
//     i=0;
//     while(i<a)
//     {
//        cout<<"WELL DONE\n";
//        i++;
//     };
//     return 0;

// }

// ***************************************************************
// value of x
//

// ****************************************************************

// emum shape{
//     circle;
//     rectangle;
//     triangle;
// };

// int main(){
//      cout<<"Enter shape code:";
//      int code;
//      cin>>code;

//      while(code>=circle && code<=triangle)
//      {
//         switch(code){
//             case circle:
//             break;
//             case rectangle:
//             break;
//             case triangle:
//             break;
//         }
//         cout<<"Enter shape code:";
//         cin>>code;
//      }
//      cout<<"BYE\n";
//      return 0;
// }

//**********************************
// scope resolution operator
//(give access to the global version of the variable)

// int m=10;       //global m

// int main()
// {
//     int m=20;      //m re-declared,local to main
//     {
//         int k = m;
//         int m = 30;  //m declared again
//                      //locsl to inner block
//         cout<<"We are in inner block\n";
//         cout<<"k = "<< k << "\n";
//         cout<<"m = "<< m <<"\n";
//         cout<< "::m = "<< ::m <<"\n";

//     }

//     cout<<"\nWe are in outter block \n";
//     cout<<"m = "<< m <<"\n";
//     cout<<"::m = "<< ::m <<"\n";
//     return 0;

// }

// **********************************************

// classes

// class Employee{
//     private:
//        int a, b,c;
//     public:
//        int d ,e;
//        void setData(int a1,int b1,int c1);
//        void getData(){
//             cout<<"Value of a is:"<<a<<endl;
//             cout<<"Value of b is:"<<b<<endl;
//             cout<<"Value of c is:"<<c<<endl;
//             cout<<"Value of d is:"<<d<<endl;
//             cout<<"Value of e is:"<<e<<endl;
//        }
// } ;

// void Employee :: setData(int a1,int b1,int c1){
//       a=a1;
//       b=b1;
//       c=c1;
// }
// int main(){
//     Employee Apeksha ;                  //Object making
//     Apeksha.setData(1,4,7);            //calling member function using object to access private members
//     Apeksha.d=43;                     //direct access to public members by our object
//     Apeksha.getData();
// }

// ==============================================================================
// Nesting of member function
// class binary
// {
//     string s;

// public:
//     void read();
//     void check_binary();
//     void complement();
//     void display();
// };
// void binary ::read()
// {
//     cout << "Enter a binary number:" << endl;
//     cin >> s;
// };
// void binary ::check_binary()
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) != '0' && s.at(i) != '1')
//         {
//             cout << "Incorrect binary format." << endl;
//         }
//     }
// }
// void binary ::complement()
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) == '0')
//         {
//             s.at(i) == '1';
//         }
//         else
//         {
//             s.at(i) == '0';
//         }
        
//     }
    
// }
// void binary ::display()
// {
//     cout << s << endl;
// }
// int main()
// {
//     binary b;
//     b.read();
//     b.check_binary();
//     b.complement();
//     b.display();
//     return 0;
// }





// *****************************************************************

//
// class Employee{
//      int salary;
//      int id;
// public:
//     void setId(){
//         salary =12000;
//         cout<<"Enter ID of the Employee:"<<endl;
//         cin>>id;
//     }     

//     void getId(){
//         cout<<"The ID of this Employee is "<<id<<endl;
//     }
// };

// int main(){
//     // Employee Anurag,Vinit,Apeksha;
//     // Apeksha.setId();
//     // Apeksha.getId();
//     Employee b;
//     Employee Tesla[3];
//     for(int i =0;i<3;i++){
//         Tesla[i].setId();
//         Tesla[i].getId();
//     }
    
//     return 0;
// }


// =-=-=-=-=-=-=-=-=-=-=-===-=--=-=-=-=-=-=-=-=-=-=

// Passing object as function arguments
// class complex{
//     int a,b;

// public:
//     void setData(int a1 ,int a2){
//         a=a1;
//         b=a2;
//     }    
//     void getData(complex c1,complex c2){
//         a = c1.a + c2.a;
//         b = c1.b + c2.b;
//     }
//     void display(){
//         cout<<"complex number is "<<a<<"+"<<b<<"i"<<endl;
//     }
// };

// int main(){
//     complex e , f ,g;
//     e.setData(1,2);
//     f.setData(3,4);
//     g.getData(e,f);
//     g.display();

//     return 0;
    
// }



// *##############################################

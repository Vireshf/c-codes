/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<iostream>

using namespace std;


class Employee
{
    public:
    int empno;
    int salary;
    Employee()
    {
        
    }
    Employee(int eno,int sal)
    {
        empno = eno;
        salary = sal;
    }
    
    void show()
    {
        cout<<empno<<" "<<salary<<endl;
    }
};

class StackEmployee
{
  public:
    Employee emp[10];
    int k;
    
    StackEmployee()
    {
        k=-1;
    }
     
    void push(Employee e)
    {
        k = k +1;
        if(k>2)
        {
            cout<<"stack overflow"<<endl;
            k--;
            return;
        }
        else
        {
        emp[k] = e;
        }
    }
    void pop()
    {
        if(k<0)
        {
            cout<<"stak underflow"<<endl;
            return;
        }
        else
        {
        Employee e= emp[k--];
        e.show();
        }
    }
  
    
};
int main()
{
   Employee e(1,10);
   Employee e1(2,20);
   Employee e2(3,30);
     Employee e3(4,40);
   StackEmployee s;
   s.push(e);
   s.push(e1);
   s.push(e2);
   s.push(e3);
   s.pop();
  
   
   s.pop();
 
   
   s.pop();

   
   s.pop();
   return 0;
}

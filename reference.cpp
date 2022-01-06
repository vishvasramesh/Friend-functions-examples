#include<iostream>
using namespace std;

class class_2;

class class_1
{
      int value1;
    public:
      void indata(int a)
      {
          value1=a;
      }  
      void display(void)
      {
          cout<<value1<<"\n";
      }
      friend void exchange(class_1 , class_2 );
};

class class_2
{
       int value_2;
    public:
       void indata(int a)
       {
        value_2 = a;
       }
       void display(void)
       {
           cout<<value_2<<"\n";
       }
       friend void exchange(class_1 , class_2 );
};

void exchange(class_1 x,class_2 y)
{
    int temp = x.value1;
    x.value1 = y.value_2;
    y.value_2 = temp;
    cout<<x.value1;
    cout<<y.value_2;
}
int main()
{
    class_1 c1;
    class_2 c2;

    c1.indata(100);
    c2.indata(200);
    
    cout<< "Values before exchange" <<"\n";
    c1.display();
    c2.display();
    exchange(c1,c2);
    cout<< "Values after exchange" <<"\n";
    c1.display();
    c2.display();
    return 0;

}

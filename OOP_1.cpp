#include<iostream>
using namespace std;
class complex{
    int real;
    int imag;
    public:
//<------------------------------------------------------------------------->
    complex()
    {            // Default constructor to initialize values
      real = 0;
      imag = 0;
    }

    complex(int real , int imag)   //parameterized constructor
    {
        this->real = real;
        this->imag = imag;
    }

//<------------------------------------------------------------------------->

void get_values()
{
    cout<<"The Complex number is "<<real<< " + " << imag << " i " <<endl;
}

//<------------------------------------------------------------------------->
//overloading " + " operator

complex operator +(complex &obj)
{
    complex temp;    //temporary object
    temp.real = real+obj.real;
    temp.imag = imag+obj.imag;
    return temp;
        
}

//<------------------------------------------------------------------------->
//Overloading " - " operator
complex operator -(complex &obj)
{
    complex temp;     //temporary object
    temp.real = obj.real - real;
    temp.imag = obj.imag - imag;
    return temp;  
}

//<------------------------------------------------------------------------->
//Overloading " * " operator
complex operator *(complex &obj)
{
    complex temp;    //temporary object
    temp.real = real*obj.real - imag*obj.imag;   //(ac-bd)+i(ad+bc)
    temp.imag = real*obj.imag + imag*obj.real;
    return temp;  
}

friend istream& operator >>(istream& temp, complex &obj);
friend ostream& operator <<(ostream& temp, complex &obj);

};

//<------------------------------------------------------------------------->
//Overloading " << " operator

istream& operator >>(istream& temp, complex &obj)
{
    cout<<"Enter the real and imaginary part of complex number\n"<<endl;
    temp>>obj.real>>obj.imag;
    return temp;

}

//<------------------------------------------------------------------------->
//Overloading " >> " operator

ostream& operator <<(ostream& temp, complex &obj)
{
    temp<<obj.real<<" + "<<obj.imag<<"i "<<endl;
    return temp;

}

int main(int argc, char const *argv[])
{
    complex obj, obj1, obj2;
    obj.get_values();

    while(true)
    {
        cout<<"1. Enter the complex numbers"<<endl;
        cout<<"2. print the complex numbers"<<endl;
        cout<<"3. Addition of  the complex numbers"<<endl;
        cout<<"4. Subtraction of  the complex numbers"<<endl;
        cout<<"5. Multiplication of  the complex numbers"<<endl;
        cout<<"0. Exit"<<endl;
        
        int choice;
        cout<<"<-------------Enter your choice---------->"<<endl;
        cin>>choice;


        if (choice == 1)
        {
            cin>>obj1>>obj2;

        }


        else if (choice == 2)
        {
            cout<<"Complex number 1->"<<obj1;
            cout<<"Complex number 2->"<<obj2;
        }

        else if (choice == 3)
        {
            complex obj3;
            cout<<"Complex number 1->"<<obj1;
            cout<<"Complex number 2->"<<obj2;
            obj3 = obj1 + obj2;
            cout<<"The Addition of complex numbers is->"<<obj3;
        }

        else if (choice == 4)
        {
            complex obj4;
            cout<<"Complex number 1->"<<obj1;
            cout<<"Complex number 2->"<<obj2;
            obj4 = obj1 - obj2;
            cout<<"The Subtraction of complex numbers is->"<<obj4<<endl;
        }


        else if (choice == 0)
        {
            break;
        }

        else if (choice == 5)
        {
            complex obj5;
            cout<<"Complex number 1->"<<obj1;
            cout<<"Complex number 2 "<<obj2;
            obj5 = obj1*obj2;
            cout<<"The multiplication of complex numbers is->"<<obj5<<endl;
        }

        cout<<endl<<endl;
       

    }
    
    return 0;
}





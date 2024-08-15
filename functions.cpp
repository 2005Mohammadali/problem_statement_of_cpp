#include<iostream>
using namespace std;

//function prototype(declaration)
// as the CPP uses bottom up approach main() should be at bottom but if you have already declared the other function then it is acceptable
// int sum(int a, int b); --> acceptable
// int sum(int a, b); --> not acceptable
// int sum(int, int); --> acceptable
// void greet(void); --> acceptable
int sum(int a, int b);
void greet();

//Call by value - changes just applied to temporary params
void swap(int a, int b){
    cout<<"Before swapping "<<a<<" and "<<b<<endl;
    int temp = a;
    a = b;
    b = temp;
    cout<<"After swapping "<<a<<" and "<<b<<endl;
}

//Call by reference - changes applied to memory location using pointers
void swapPointer(int *a, int *b){
    cout<<"Before swapping "<<a<<" and "<<b<<endl;
    int temp = *a;
    *a = *b;
    *b = temp;
    cout<<"After swapping "<<a<<" and "<<b<<endl;
}

//Call by reference - using refrence variables
void swapReferenceVar(int &a, int &b){
    cout<<"Before swapping "<<a<<" and "<<b<<endl;
    int temp = a;
    a = b;
    b = temp;
    cout<<"Address of a: "<<&a<<endl;
    cout<<"Address of b: "<<&b<<endl;
    cout<<"After swapping "<<a<<" and "<<b<<endl;
}

//Selection for swap functions
void swapMain(){
    int num1, num2;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    int choice;
    cout<<"\nEnter your choice:\n 1.Call by value\n 2.Call by Reference\n 3.Swap using Reference Variable\n";
    cin>>choice;
    switch (choice)
    {
    case 1: swap(num1, num2); //this won't swap numbers outside function;
        break;
    case 2: swapPointer(&num1, &num2); //this will swap numbers using pointer reference
        break;
    case 3: swapReferenceVar(num1, num2); //this will swap numbers using reference variables 
        break;
    default: cout<<"Enter valid input";
        break;
    }
}



//Function Overloading - using same function name but with different arguments
int volume(int r, int h){
    return (3.14 * r * r * h);
}

int volume(int l, int b, int h){
    return(l * b * h);
}

int volume(int a){
    return(a * a * a);
}

void overloadFunc(){
    int choice;
    cout<<"\nEnter your choice:\n 1.Volume of cylinder\n 2.Volume of cube\n 3.Volume of cuboid\n";
    cin>>choice;
    switch (choice)
    {
    case 1: int radius, height;
            cout<<"Enter radius of cylinder: ";
            cin>>radius;
            cout<<"Enter height of cylinder: ";
            cin>>height;
            cout<<"Volume of cylinder is "<<volume(3,5)<<endl;
            break;

    case 2: int side;
            cout<<"Enter side of cube: ";
            cin>>side;
            cout<<"Volume of cube is "<<volume(3)<<endl;
            break;
    case 3: int l, b, h;
            cout<<"Enter length of cuboid: ";
            cin>>l;
            cout<<"Enter breadth of cuboid: ";
            cin>>b;
            cout<<"Enter height of cuboid: ";
            cin>>h;
            cout<<"Volume of cuboid is "<<volume(3,5,7)<<endl;
            break;
    
    default: cout<<"Enter valid input";
        break;
    }
}



//Recursive Function
int fibonacci(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
//Dry run of fibonacci recursive function
/*
fib(5)
fib(4) + fib(3)
fib(3) + fib(2) + fib(2) + fib(1)
fib(2) + fib(1) + fib(1) + fib(0) + fib(1) + fib(0) + fib(0)
fib(1) + fib(0) + fib(1) + fib(1) + fib(0) + fib(1) + fib(0) + fib(0)
  1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 = 8 
*/

int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * factorial(n-1);
}
//Dry run of factorial recursive func
/*
fact(4) = 4 * fact(3)
fact(4) = 4 * 3 * fact(2)
fact(4) = 4 * 3 * 2 * fact(1)
fact(4) = 4 * 3 * 2 * 1
*/

void recursiveFunc(){
    int num, choice;
    cout<<"\nEnter your choice:\n 1.Fibonacci Series\n 2.Factorial\n";
    cin>>choice;
    switch (choice)
    {
    case 1: cout<<"Enter number: ";
            cin>>num;
            cout<<"Number in fibonacci series at "<<num<<" is "<<fibonacci(num);
            break;
    case 2: cout<<"Enter number: ";
            cin>>num;
            cout<<"Factorial of "<<num<<" is "<<factorial(num);;
            break;
    default: cout<<"Enter valid input";
        break;
    }
}


//return type is int but '&' denotes refrence variable
int & returnReferenceVar(int &a){
    cout<<"Value of number 1 is "<<a;
    returnReferenceVar(a) = 230;
    return  a;
    cout<<"As 'a' is reference variable it is pointing 'num1' so value of num1 became"<<a<<endl;
}

//Inline functions - when block of code is not complex and you want to use function properties
inline int func_inline(){
    cout<<"This block of code is automatically compiled on the calling line itself";
    return 0;
}

//Static variable
int staticVar(int a, int b){
    static int c = 1;
    c+=1;
    cout<<"\nValue of c is "<<c<<endl;
    return a*b+c;
}

//Default arguments - so here 'pi' is default argument if you pass while calling it will change otherwise default value will be considered
int defaultfunc(int r, float pi = 3.14){
    return (pi * r * r);
}

//Constant arguments - mainly used in pointers and refrences

void generalFunc(){
    int a, b, choice;
    cout<<"\nEnter your choice:\n 1.Inline function\n 2.Reference Variable\n 3.Static Variable\n 4.Default Function\n";
    cin>>choice;
    switch (choice)
    {
    case 1: func_inline();
            break;
    case 2: cout<<"Enter value of a: ";
            cin>>a;
            returnReferenceVar(a);
            break;
    case 3: cout<<"Enter value of a: ";
            cin>>a;
            cout<<"Enter value of b: ";
            cin>>b;
            cout<<"the value of return statement is now: "<<staticVar(a,b)<<endl;
            cout<<"the value of return statement is now: "<<staticVar(a,b)<<endl;
            cout<<"the value of return statement is now: "<<staticVar(a,b)<<endl;
            cout<<"the value of return statement is now: "<<staticVar(a,b)<<endl;
            cout<<"the value of return statement is now: "<<staticVar(a,b)<<endl;
            cout<<"the value of return statement is now: "<<staticVar(a,b)<<endl;
            break;
    case 4: int r;
            cout<<"Enter the radius: ";
            cin>>r;
            cout<<"The area of circle for radius = "<<r<<" is "<<defaultfunc(r);
            cout<<"The area of circle for radius = "<<r<<" is "<<defaultfunc(r,5);
    default: cout<<"Enter valid input";
        break;
    }
}

void choices(){
    int choice;
    cout<<"\nEnter your choice:\n 1.Addition\n 2.Greeting\n 3.Swap the numbers\n 4.Recursive Function\n 5.Overload Function\n 6.General Functions\n";
    cin>>choice;
    switch(choice){
        case 1: int num1, num2;  //num1 and num2 are actual parameters
                cout<<"Enter number 1: ";
                cin>>num1;
                cout<<"Enter number 2: ";
                cin>>num2;
                cout<<"Address of num1: "<<&num1<<endl;
                cout<<"Address of num2: "<<&num2<<endl;
                cout<<num1<<" + "<<num2<<" = "<<sum(num1,num2)<<endl; //function calling
                break;
        case 2: greet();
                break;
        case 3: swapMain();
                break;
        case 4: recursiveFunc();
                break;
        case 5: overloadFunc();
                break;
        case 6: generalFunc();
                break;
        default: cout<<"Enter valid input";
    }    
}

int main(){
    cout<<"Hey!! Welcome to FUNCTIONS "<<endl;
    char c;
    do{
        choices();
        cout<<"Do you wanna explore more !!!(Y/N)";
        cin>>c;
    } while(c == 'Y' || c == 'y');
    
    return 0;
}

//function definition
// a and b are formal parameters (these takes values from actual params)
int sum(int a, int b){
    int c = a+b;
    return c;
}

void greet(){
    cout<<"Hello ji main VOID function hun so mera kuch return type nahi hai."<<endl;
}
#include <iostream>
using namespace std;

// Pointer
int pointer()
{
    int a = 5;
    int *b = &a;
    // & : Address-of Operator
    cout << "this is address of a using '&': " << &a << endl;
    cout << "this is address of a using pointer: " << b << endl;

    // * : Value-at (Dereference) operator
    cout << "this is value of a " << *b << endl;

    // pointer to pointer
    int **c = &b;
    cout << "This is address of b: " << &b << endl;
    cout << "This is address of b: " << c << endl;
    cout << "This is value of b: " << *c << endl;
    cout << "This is value of a: " << **c << endl;
    return 0;
}

// Arrays
void usingFor(int *m)
{
    cout << "Retrieving array elements using For Loop"<<endl;
    cout << "Value of m is " << m << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Marks at index " << i << " is " << m[i] << endl;
    }
}

void usingWhile(int *m)
{
    cout << "Retrieving array elements using While Loop"<<endl;
    int i = 0;
    while (i < 5)
    {
        cout << "Marks at index " << i << " is " << m[i] << endl;
        i++;
    }
}

void usingDoWhile(int *m)
{
    cout << "Retrieving array elements using Do While Loop"<<endl;
    int i = 0;
    do
    {
        cout << "Marks at index " << i << " is " << m[i] << endl;
        i++;
    } while (i < 5);
}

void usingPointerArrays()
{
    cout << "Retrieving array elements using Pointers"<<endl;
    int marks[5] = {34, 56, 74, 52, 45};
    int *p = marks;
    cout << "Pointer 'P' is pointing to array of marks at " << p << endl;
    cout << "Now 'p' is pointing at index 0 " << *p << endl;
    cout << "Now 'p' is pointing at index 1 " << *++p << endl;
    cout << "Now 'p' is pointing at index 2 " << *++p << endl;
    cout << "Now 'p' is pointing at index 3 " << *++p << endl;
    cout << "Now 'p' is pointing at index 4 " << *++p << endl;
}

void arrays()
{
    int marks[5] = {23, 25, 29, 18, 20};
    cout << "Memory location: " << &marks << endl;
    cout << "Length of this array: " << (sizeof(marks) / __SIZEOF_INT__) << endl;
    marks[3] = 22; // Array elements are modifiable
    int choice;
    cout<<"\nSelect your choice:\n 1.Using For Loop\n 2.Using While Loop\n 3.Using DoWhile Loop\n 4.Using Pointer Arrays\nEnter your choice:";
    cin>>choice;
    switch (choice)
    {
    case 1:
        usingFor(marks);
        break;
    case 2:
        usingWhile(marks);
        ;
        break;
    case 3:
        usingDoWhile(marks);
        break;
    case 4:
        usingPointerArrays();
        break;
    default:
        cout << "Enter valid input";
    }
}

// Structures - use to store multiple elements of multiple datatypes
void structure()
{
    typedef struct student
    {
        /* data */
        string name;
        long studID;
        char grade;
        long rollnum;
    } st;
    // 3 methods to create structure copy
    struct student abc;
    abc.name = "Virat Kohli";
    abc.studID = 123456;
    abc.grade = 'A';
    abc.rollnum = 211600;
    cout << "Student name: " << abc.name<<endl;
    cout << "Student ID: " << abc.studID<<endl;
    cout << "Student Grade: " << abc.grade<<endl;
    cout << "Student Roll no.: " << abc.rollnum<<endl;
    cout << "-----------------------------------------------"<<endl;
    student pqr;
    pqr.name = "Rohit Sharma";
    pqr.studID = 128095;
    pqr.grade = 'B';
    pqr.rollnum = 212650;
    cout << "Student name: " << pqr.name<<endl;
    cout << "Student ID: " << pqr.studID<<endl;
    cout << "Student Grade: " << pqr.grade<<endl;
    cout << "Student Roll no.: " << pqr.rollnum<<endl;
    cout << "-----------------------------------------------"<<endl;
    st xyz;
    xyz.name = "Gautam Gambhir";
    xyz.studID = 176456;
    xyz.grade = 'C';
    xyz.rollnum = 213023;
    cout << "Student name: " << xyz.name<<endl;
    cout << "Student ID: " << xyz.studID<<endl;
    cout << "Student Grade: " << xyz.grade<<endl;
    cout << "Student Roll no.: " << xyz.rollnum<<endl;
    cout << "-----------------------------------------------"<<endl;
}


// Enum - a fixed array of strings representing integer numbers starting from zero
void enumeration(){
    enum Days
    {
        Sunday,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };
    int i;
    cout << "Select day: ";
    cin>>i;
    switch (i)
    {
    case Sunday:
        cout << "You selected Sunday(0)";
        break;
    case Monday:
        cout << "You selected Monday(1)";
        break;
    case Tuesday:
        cout << "You selected Tuesday(2)";
        break;
    case Wednesday:
        cout << "You selected Wednesday(3)";
        break;
    case Thursday:
        cout << "You selected Thursday(4)";
        break;
    case Friday:
        cout << "You selected Friday(5)";
        break;
    case Saturday:
        cout << "You selected Saturday(6)";
        break;
    default:
        break;
    }
}


// Union - you can use one variable at a time which provides better memory management i.e. it shares memory among all variables and the variable with highest value of memory alloted is shared 
void unionFunc(){
    union currency //4 bytes alloted
     {
         float dollars; //4b
         char car; //1b
         float rupees; //4b
    
     };

    union currency c1;
    cout<<"Using dollars"<<endl;
    c1.dollars = 1.5;
    cout<<"Value is: "<<c1.dollars<<endl;
    cout<<"As we are using DOLLARS so CAR is empty: "<<c1.car<<endl;
    cout<<"Due to same datatype of RUPPES and DOLLARS same value get stored: "<<c1.rupees<<endl;
    cout<<"Using cars"<<endl;
    c1.car = 'c';
    cout<<"Value is "<<c1.car<<endl;
    cout<<"Due to different datatype of RUPPES and CAR it is empty: "<<c1.rupees<<endl;
    cout<<"Due to different datatype of DOLLARS and CAR it is empty: "<<c1.dollars<<endl;
    cout<<"Using rupees"<<endl;
    c1.rupees = 124;
    cout<<"Value is: "<<c1.rupees<<endl;
    cout<<"As we are using RUPEES so CAR is empty: "<<c1.car<<endl;
    cout<<"Due to same datatype of DOLLARS and RUPPES same value get stored: "<<c1.rupees<<endl;
    
}


int main()
{
    int choice;
    cout<<"\nSelect your choice:\n 1.Pointer\n 2.Arrays\n 3.Structure\n 4.Enum\n 5.Union\nEnter your choice:";
    cin>>choice;
    switch(choice){
        case 1: pointer();
                break;
        case 2: arrays();
                break;
        case 3: structure();
                break;
        case 4: enumeration();
                break;
        case 5: unionFunc();
                break;
    }
    
    return 0;
}
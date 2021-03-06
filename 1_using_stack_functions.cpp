#include<iostream>
#include<conio.h>
using namespace std;
class stack
{
private:
    int top;
    int arr[5];
public:
    stack(){
        top=-1;
        for (int i=0 ; i<5 ; i++){
            arr[i]=0;
        }
    }

    bool isEmpty(){
        if (top==-1){
            return true;
        }
        else
            return false;
    }
    bool isFull(){
        if (top==4)
        {
            return true;
        }
        else
            return false;
    }
    void push(int val){
        if (isFull()){
            cout<<"Stack Overflow"<<endl;
        }
        else{
            top++;
            arr[top]=val;
        }
    }
    int pop(){
        if (isEmpty()){
            cout<<"Stack Underflow"<<endl;
        }
        else{
            int deleted_val=arr[top];
            arr[top]=0;
            top--;
            return deleted_val;
        }
    }
    int count(){
        return (top+1);
    }
    int peek(int pos){
    if (isEmpty()){
        cout<<"Stack Underflow"<<endl;
        return 0;
    }
    else
    return arr[pos];
    }
    void change(int pos, int val){
        int privious_val =arr[pos];
        arr[pos]=val;
        cout<<"the Previous value ( "<<privious_val<<" ) changes with new value ( "<<val<<" ) at position "<<pos<<endl;
    }
    void display(){
        cout << "All values in the Stack are " << endl;
        for (int i = 4; i >= 0; i--) {
            cout<< " | ";
            cout << arr[i];
            cout<< " | "<<endl;
            }
    }
};

int main() 
{   stack s1;
    int option, position,value;
    do {
    cout << "What operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. Push()" << endl;
    cout << "2. Pop()" << endl;
    cout << "3. isEmpty()" << endl;
    cout << "4. isFull()" << endl;
    cout << "5. peek()" << endl;
    cout << "6. count()" << endl;
    cout << "7. change()" << endl;
    cout << "8. display()" << endl;
    cout << "9. Clear Screen" << endl << endl;
    cin >> option;
    system("CLS");
    switch (option)
    {
    case 0:
        break;
    case 1:
        cout<<"Enter The Value"<<endl;
        cin>> value;
        s1.push(value);
        break;
    case 2:
        cout<<"Popping Top value Successfull"<<endl;
        cout <<"poped value is "<< s1.pop() <<endl;
        break;
    case 3:
        if (s1.isEmpty()){
        cout << "The stack is Empty"<<endl;
        }
        else
        cout<<"The stack is NOT Empty"<<endl;
        break;
    case 4:
        if (s1.isFull())
        cout << "The stack is FULL"<<endl;
        else
        cout<<"The stack is NOT FULL"<<endl;
        break;
    case 5:
        cout<<"Enter the position where you wnat to peek"<<endl;
        cin>>position;
        cout<<"The Element At "<< position <<"th Position Is "<<s1.peek(position)<<endl; 
        break;
    case 6:
        cout<< "the Number Of Elements Stored In Stack Is "<<s1.count()<<endl;
        break;
    case 7:
        cout << "Change Function Called - " << endl;
        cout << "Enter position of item you want to change : ";
        cin >> position;
        cout << endl;
        cout << "Enter value of item you want to change : ";
        cin >> value;
        s1.change(position, value);
        break;
    case 8:
        cout << "Display Function Called - " << endl;
        s1.display();
        break;
    case 9:
        system("cls");
        break;
    default:
        cout<< "Enter proper Option Number"<<endl;
        break;
    }
    s1.display();
    }while (option !=0);
    cout<<"END of program"<< endl;
    return 0;
}

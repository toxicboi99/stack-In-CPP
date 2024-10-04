#include <iostream>
#include <stack>
using namespace std;

 void display(stack<string> st) {
  while(!st.empty()) {
    cout << st.top() <<endl;
    st.pop();
  }

  cout << endl;
 }
int main() 
{
    stack<string>sub;
    sub.push("C");
    sub.push("CPP");
    sub.push("Computer");
    sub.push("DBMS");
 
    cout<<"Subject Name:"<<endl;
    display(sub);
    
    sub.pop();
    cout<<"After Popping :"<<endl;
    display(sub);

    return 0;
}
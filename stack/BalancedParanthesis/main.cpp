#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool areParenthesesBalanced(string str){
    stack<char>sp;
       bool ans=true;
       for(int i=0;i<str.size();i++){
           char c=str[i];
           if(c=='(' || c=='{' || c=='['){
               sp.push(c);
           }
           else{
               if((!sp.empty())&&((c==')' && sp.top()=='(')||(c=='}' && sp.top()=='{')||(c==']' && sp.top()=='[')))
               {
                   sp.pop();
               }
               else{
                   ans=false;
                   break;
               }
           }
       }
      if(!sp.empty()) return false;
      else return ans;
    
}
int main(){
    string exp;
    cout<<"Enter Expression: ";
    cin>>exp;
    if(areParenthesesBalanced(exp))
		cout<<"Balanced\n";
	else
		cout<<"Not Balanced\n";
}
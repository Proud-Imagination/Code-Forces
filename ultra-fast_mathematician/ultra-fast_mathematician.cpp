#include <bits/stdc++.h>
#include <string>

using namespace std;

string show_binary(unsigned int u, int num) 
{ 
  string output = "";
  int t = pow(2, num);

  for(t; t > 0; t = t / 2)           
      if(u >= t) {                
          u -= t;
          output += "1";              
      }
      else {
          output += "0";               
      }
      
  return output ;                    
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int n1 = stoi(s1, 0 ,2);
    int n2 = stoi(s2, 0 ,2);
    int output = n1 ^ n2;

    cout << show_binary(output, s1.length() - 1);
}
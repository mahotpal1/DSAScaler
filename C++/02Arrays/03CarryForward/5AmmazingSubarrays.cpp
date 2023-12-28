/*
You are given a string S, and you have to find all the amazing substrings of S.
An amazing Substring is one that starts with a vowel (a, e, i, o, u, A, E, I, O, U).

Constraints

1 <= length(S) <= 1e6
S can have special characters
Example

Input
    ABEC

Output
    6

Explanation
    Amazing substrings of given string are :
    1. A
    2. AB
    3. ABE
    4. ABEC
    5. E
    6. EC
    here number of substrings are 6 and 6 % 10003 = 6.
*/

#include <iostream>
#include <string>

class AmazingSubarrays{
public:
  AmazingSubarrays(){}
  ~AmazingSubarrays(){}
  bool checkVowel(char &c);
  int solve(std::string &str);
};

bool AmazingSubarrays::checkVowel(char &c){
  if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
    return true;
  }
  return false;
}

int AmazingSubarrays::solve(std::string &str){
  int sum=0;
  AmazingSubarrays *c = new AmazingSubarrays();
  for(int i=str.length()-1; i>=0; i--){
    if(c->checkVowel(str[i])){
      sum += str.length()-i;
    }
  }
  return sum%10003;
}

int main(){
  AmazingSubarrays *a = new AmazingSubarrays();
  std::string str = "ABEC";
  std::cout << "Total subarrays starting with vowels are : " << a->solve(str) << std::endl;
  return 0;
}
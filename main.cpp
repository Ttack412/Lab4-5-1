#include <string> 
#include <iostream>

using namespace std;
int main() {
    
string sentence; 
getline(cin, sentence);

for(int i; i < sentence.length(); i++)
{
    if(sentence.at(i) == ' ' && sentence.at(i--) == ' ')
    {
       sentence.erase(i,1);
    }
       
}

cout << sentence << "\n"; 
}



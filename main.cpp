#include <string> 
#include <iostream>

using namespace std;
int main() {
    
string sentence; 
getline(cin, sentence);


for(int i; i < sentence.length(); i++)
{
    //checks to see if the char is equal to the char behind it
    if(sentence.at(i) == ' ' && sentence.at(i--) == ' ')
    {
        //erases a char
       sentence.erase(i,1);
    }
       
}

cout << sentence << "\n"; 
}



#include <string> 
#include <iostream>

using namespace std;
int main() {
    
string sentence; 
getline(cin, sentence);
int i;

while(i < sentence.length())
{   
    //checks to see if there is two spaces in a row
    if(sentence.at(i) == ' ' && sentence.at((i) - 1) == ' ')
    {
       //erases a char
       sentence.erase(i,1);
    }
    else 
    {
        i++;
    }
}

cout << sentence << "\n"; 
}



// Information Security Lab 1
//  Caesar Cipher -- Exercise 0


#include <iostream>
#include <string>

using namespace std;

char caesar( char, int );

int main()
{
    string input= "", output = "";
    int key = 0 ;
    
    cout << "Enter plaintext : ";
    cin >> input;
    cout << endl << "Enter key: " ;
    cin >> key ;
    for(int x = 0; x < input.length(); ++x)
    {
        output += caesar(input[x], key);
    }
    cout << "The Ciphertext is : " << output << endl;
}
 
char caesar( char c, int k)
{
    if( isalpha(c) )
    {
        if (isupper(c))
        {
            c = (((c-65)+k) % 26) + 65;
        }
        else if (islower(c))
        {
            c = (((c-97)+k) % 26) + 97;
        }
    }
    return c;
}

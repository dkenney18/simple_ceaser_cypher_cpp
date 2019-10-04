/*
    Convert string to ascii, add one, and bitshift binary by one
    10/02/2019
*/
#include <iostream>
#include <string>


using namespace std;

int main() 
{
    string clear_text;
    string encrypt_text;
    string bit_string;

    int binary;

    int a = 0;
    int r = 0;

    int digit;

    cout << "Enter message to be encrypted: ";
    getline(cin, clear_text);
    cout << endl;

    encrypt_text = "";

    //converts string to ascii
    for (int i = 0; i < clear_text.length(); i++) 
    {
       a = toascii(clear_text[i] + 1);
       //bitshift ascii val by one
       a = a >> 1;

       while (a > 0) 
       {
           (a % 2) ? encrypt_text.push_back('1') : encrypt_text.push_back('0');
           a /= 2;
           
        }
        encrypt_text.push_back('1');

       //add space between the binary
       encrypt_text += " ";

    }
    
     cout << "Clear text is: " << clear_text << endl;
     cout << "Encrypted text is: " << encrypt_text << endl; 

    return 0;
}

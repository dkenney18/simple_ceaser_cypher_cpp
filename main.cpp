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

    int a = 0;
    int r = 0;

    int digit;

    cout << "Enter message to be encrypted: ";
    getline(cin, clear_text);
    cout << endl;

    //converts string to ascii
    for (int i = 0; i < clear_text.length(); i++) 
    {
       a = toascii(clear_text[i] + 1);

       encrypt_text = "";
        //Converts ascii to binary
        //we still need to bitshift by one
       while (a > 0) 
       {
           (a % 2) ? encrypt_text.push_back('1') : encrypt_text.push_back('0');
           a /= 2;

       }
       cout << encrypt_text << endl;

    }

    return 0;
}

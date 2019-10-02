
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

    cout << "Enter message to be encrypted: ";
    getline(cin, clear_text);
    cout << endl;

    //converts string to ascii
    for (int i = 0; i < clear_text.length(); i++) 
    {
       a = clear_text[i] + 1;
       cout << a << endl;
    }

    return 0;
}

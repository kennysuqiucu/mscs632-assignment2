#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string s5 = "5";
    int i3 = 3;
    
    cout << "'" << s5 << "' is a string; " << i3 << " is an int." << endl;
    cout << "'5' + 3 will throw an error when compiled." << endl;
    
    //string result = s5 + i3;  // Uncomment this line to see the error that does not allow s5 + i3 to be added because s5 is a string and i3 is an integer
    string result = s5 + to_string(i3); // Comment this line if you're uncommenting line 12 to see the error
    cout << "Concatenating '5' and '3' -> " << result << endl; // Result should be 53 because you are concatenating '5' and '3' which are both strings
    
    int result2 = stoi(s5) + i3; // Casting '5' to an integer to be added as 5 + 3 = 8
    cout << "Casting '5' to an integer with std::stoi" << endl;
    cout << "Resulting 5 + 3 -> "<< result2 << endl;

    return 0;
}
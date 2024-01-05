#include <iostream>
#include <string>
using namespace std;

int main() {
    string calculate;
    cout << "Enter a math operation: ";
    getline(cin, calculate);
    
    size_t found;

    found = calculate.find('+');
    if (found != string::npos) {
        string left = calculate.substr(0, found);
        string right = calculate.substr(found + 1);
        int answer = stoi(left) + stoi(right);
        cout << calculate << " = " << answer << "\nYour answer is " << answer << endl;
    }
    else {
        found = calculate.find('-');
        if (found != string::npos) {
            string left = calculate.substr(0, found);
            string right = calculate.substr(found + 1);
            int answer = stoi(left) - stoi(right);
            cout << calculate << " = " << answer << "\nYour answer is " << answer << endl;
        }
        else {
            found = calculate.find("**");
            if (found != string::npos) {
                string left = calculate.substr(0, found);
                string right = calculate.substr(found + 2);
                int base = stoi(left);
                int exponent = stoi(right);
                int answer = 1;
                for (int i = 0; i < exponent; ++i) {
                    answer *= base;
                }
                cout << calculate << " = " << answer << "\nYour answer is " << answer << endl;
            }
            else {
                found = calculate.find('*');
                if (found != string::npos) {
                    string left = calculate.substr(0, found);
                    string right = calculate.substr(found + 1);
                    int answer = stoi(left) * stoi(right);
                    cout << calculate << " = " << answer << "\nYour answer is " << answer << endl;
                }
                else {
                    found = calculate.find("//");
                    if (found != string::npos) {
                        string left = calculate.substr(0, found);
                        string right = calculate.substr(found + 2);
                        int answer = stoi(left) / stoi(right);
                        cout << calculate << " = " << answer << "\nYour answer is " << answer << endl;
                    }
                    else {
                        found = calculate.find('/');
                        if (found != string::npos) {
                            string left = calculate.substr(0, found);
                            string right = calculate.substr(found + 1);
                            float answer = stof(left) / stof(right);
                            cout << calculate << " = " << answer << "\nYour answer is " << answer << endl;
                        }
                        else {
                            found = calculate.find('%');
                            if (found != string::npos) {
                                string left = calculate.substr(0, found);
                                string right = calculate.substr(found + 1);
                                int answer = stoi(left) % stoi(right);
                                cout << calculate << " = " << answer << "\nYour answer is " << answer << endl;
                            }
                            else {
                                cout << "The math operation is not recognized." << endl;
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}

#include <iostream>
#include <string> //std::string(size_t count, char ch) to convert a symbol to string, to_string() is where alphanumerals are converted to strings, string xyz makes a string called xyz
using namespace std; //Removes the need to write "std::" for every command 




double Add(double a, double b){
    return a + b;
}

double Subtract(double a, double b){
    return a - b;
}

double Multiply(double a, double b){
    return a * b;
}

double Divide(double a, double b){
    return a/b;
}

double getOperators(double a, double b, char opter){
    //Add
    if(opter == '+'){
        return Add(a,b);
    }
    //Subtract
    if(opter == '-'){
       return Subtract(a,b);
    }
    //Multiply
    if(opter == '*'){
      return Multiply(a,b);
    }
    //Divide
    if(opter == '/'){
        return Divide(a,b);
    }
return 0;
}


int main() {
//Introduction
std::cout << "Welcome to Calculator" << std::endl;
std::cout << "Allowed operators include (+, -, *, /)" << std:: endl;


char starter = 'Y';
double a;
double b;
double c;
char opter;
string expression; //string xyz makes a string called xyz, to_string() converts the arguments into a string


    cout << "Enter your first number: " << endl;
    cin >> a;
    expression += to_string(a) + " ";

    cout << "Enter operator" << endl;
    cin >> opter;
    expression += string(1,opter) + " ";

    cout << "Enter your next number: " << endl;
    cin >> b;
    expression += to_string(b) + " ";
    
    c = getOperators(a, b, opter);

    cout << "Do have more numbers to operate on? (Enter 'Y' for yes and 'N' for no)" << endl;
    cin >> starter; 
    while(starter == 'Y'){
            cout << "Enter operator" << endl;
            cin >> opter;
            expression += string(1,opter) + " ";
            cout << "Enter your next number: " << endl;
            cin >> b;
            expression += to_string(b) + " ";

            cout << "Do have more numbers to operate on? (Enter 'Y' for yes and 'N' for no)" << endl;
            cin >> starter;
            c = getOperators(b, c, opter);

    }
    
    //Output print statements
    expression += "= ";
    cout << expression<< c << endl;
   









}
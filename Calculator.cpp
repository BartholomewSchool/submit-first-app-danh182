#include <iostream>
#include <cmath>                                    //includes the c++ math module for the trigonometry calculations
using namespace std;

float input1;                                       //declares variables required as floating point integers
float input2;
string(operation);                                  //declares this variable as a string as the operation function requires it to be a string
float answer;
int typeoperation;                                  //declares a variable to check operation

int giveanswer(float xy) {                          //declares the function giveanswer which returns the answer stored in the floating point integer xy
    if (typeoperation == 1) {                                       //checks what the operation was from the variable typeoperation assigned in the sign function
        cout<<input1<<" plus "<<input2<<" equals "<<xy<<endl;       //Outputs the result stored in xy along with the two inputs and the operation
    }
    else if (typeoperation == 2) {                                  //similar as above for minus
        cout<<input1<<" minus "<<input2<<" equals "<<xy<<endl;     
    }
    else if (typeoperation == 3) {
        cout<<input1<<" times "<<input2<<" equals "<<xy<<endl;      //displays multiply calculations
    }
    else if (typeoperation == 4) {
        cout<<input1<<" divided by "<<input2<<" equals "<<xy<<endl; //displays division calculations    
    }
    else if (typeoperation == 5) {
        cout<<input1<<" squared "<<"equals "<<xy<<endl;             //for squared calculations
    }
    else if (typeoperation == 6) {
        cout<<"The square root of "<<input1<<" equals "<<xy<<endl;  //for square root calculations   
    }
    else if (typeoperation == 7) {
        cout<<"sin("<<input1<<") equals "<<xy<<endl;                //for tigonometry calculations (including sin, cos and tan (below))
    }
    else if (typeoperation == 8) {
        cout<<"cos("<<input1<<") equals "<<xy<<endl;     
    }
    else if (typeoperation == 9) {
        cout<<"tan("<<input1<<") equals "<<xy<<endl;     
    }
    else if (typeoperation == 10) {
        cout<<input1<<" to the power of "<<input2<< " equals "<<xy<<endl;     //for powers calculations
    }
    return xy;                                      //ends the program
}
int add() {                                         //declares the function add which is run through the operation function
    cout<<"Enter the second number: "<<endl;        //asks the user to input a second number
    cin>>input2;                                    //accepts input from the user and stores it in the variable input2
    answer = input1 + input2;                       //performs the addition of the two inputs and stores the result in answer
    giveanswer(answer);                             //calls the function giveanswer with the parameter answer to display the output
    return answer;
}
int subtract() {                                    //declares the function subtract
    cout<<"Enter the second number: "<<endl;        //asks the user to input a second number
    cin>>input2;                                    //accepts input from the user and stores it in input2
    answer = input1 - input2;                       //performs the subtraction and stores the result in answer
    giveanswer(answer);                             //calls giveanswer to display the result
    return answer;
}
int multiply() {                                    //similar to previous functions for multiply
    cout<<"Enter the second number: "<<endl;
    cin>> input2;
    answer = input1 * input2;
    giveanswer(answer);
    return answer;
}
int divide() {                                      //similar to previous functions for divide
    cout<<"Enter the second number: "<<endl;
    cin>>input2;
    answer = input1 / input2;
    giveanswer(answer);
    return answer;
}
int square (float a) {                              //declares the square function with the parameter a
    answer = a*a;                                   //performs the square of a and stores the result in answer
    giveanswer(answer);                             //calls the function giveanswer with the 
    return answer;
}
int calcsqrt (float b) {                            //calculates the square root of the input  
    answer = sqrt(b);                                 
    giveanswer(answer);                             //calls the giveanswer function with the answer as the parameter
    return answer;
}
int calcsin (float c) {                             //similar as above for sin 
    answer = sin(c);                                 
    giveanswer(answer);                        
    return answer;
}
int calccos (float d) {                             //for cos calculations
    answer = cos(d);                                 
    giveanswer(answer);                        
    return answer;
}
int calctan (float e) {                             //for tan calculations 
    answer = tan(e);                                 
    giveanswer(answer);                        
    return answer;
}
int calcpowers() {                                  //for powers calculations
    cout<<"Enter the power: "<<endl;       
    cin>>input2;
    answer = pow(input1, input2);
    giveanswer(answer);                        
    return answer;
}    
void sign() {
    cout<<"Enter Operation (+, -, *, /, square, sqrt, sin, cos, tan, powers): "<<endl;   //asks the user to input the operation
    cin>> operation;                                                                    //takes input from the user
    cin.ignore();
    if (operation == "+" or operation == "plus" or operation == "add") {                //compares the inputted string with commom values for 'add'
        typeoperation = 1;
        add();                                                                          //calls the function add if the operation inputted is add
    }
    else if (operation == "-" or operation == "minus" or operation == "subtract") {     //compares the inputted string with commom values for 'subtract'
        typeoperation = 2;
        subtract();                                                                     //calls the function subtract
    }
    else if (operation == "*" or operation == "times" or operation == "multiply") {     //similar to above however for multiply
        typeoperation = 3;
        multiply();
    }
    else if (operation == "/" or operation == "divide") {                               //similar to above however for divide
        typeoperation = 4;
        divide();
    }
    else if (operation == "sq" or operation == "2" or operation == "square") {          //compares the inputted string with commom values for 'square'
        typeoperation = 5;
        square(input1);                                                                 //calls the square function with the parameter input1
    }
    else if (operation == "sqrt" or operation == "square root" or operation == "root") {          //compares the inputted string with commom values for 'square root'
        typeoperation = 6;
        calcsqrt(input1);                                                                         //calls the calcsqrt function with the parameter input1
    }
    else if (operation == "sin" or operation == "sine" or operation == "s") {                     //compares the inputted string with commom values for 'sine'
        typeoperation = 7;
        calcsin(input1);                                                                          //calls the calcsin function with the parameter input1
    }
    else if (operation == "cos" or operation == "cosine" or operation == "c") {                   //compares the inputted string with commom values for 'cosine'
        typeoperation = 8;
        calccos(input1);                                                                          //calls the calccos function with the parameter input1
    }
    else if (operation == "tan" or operation == "tangent" or operation == "t") {                  //compares the inputted string with commom values for 'tan'
        typeoperation = 9;
        calctan(input1);                                                                          //calls the calctan function with the parameter input1
    }
    else if (operation == "power" or operation == "powers" or operation == "p") {                 //compares the inputted string with commom values for 'to the power of'
        typeoperation = 10;
        calcpowers();                                                                             //calls the calcpowers function with the parameter input1
    }
    else {
        cout<<"Invalid input";                                                           //returns "Invalid input" if a different answer is inputted
    }
}

int main() {                                            //starts the main program
    cout<<"Enter the first number: "<<endl;             //asks the user to input the first number
    cin>> input1;                                       //accepts input and stores it in the variable input1
    cin.ignore();                                       
    sign();                                             //calls the sign function to continue the program
}

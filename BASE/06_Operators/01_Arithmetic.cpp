#include <iostream>
using namespace std;
int main()
{
    /*
        Operator	Name	        Description	Example	Try it
        +	        Addition	    Adds together two values	x + y	
        -	        Subtraction	    Subtracts one value from another	x - y	
        *	        Multiplication	Multiplies two values	x * y	
        /	        Division	    Divides one value by another	x / y	
        %	        Modulus	        Returns the division remainder	x % y	
        ++	        Increment	    Increases the value of a variable by 1	++x	
        --	        Decrement	    Decreases the value of a variable by 1	--x 
    */
   
   int Val1=10 ,Val2=10,result;
   cout<<"Val1 + Val2 = "<<Val1+Val2<<endl;
   result=Val1+Val2;
   cout<<"Result "<<result<<endl;
   
   
   cout<<"Val1 - Val2 = "<<Val1-Val2<<endl;
   result=Val1-Val2;
   cout<<"Result "<<result<<endl;
   
   
   cout<<"Val1 / Val2 = "<<Val1/Val2<<endl;
   result=Val1/Val2;
   cout<<"Result "<<result<<endl;
   
   
   cout<<"Val1 * Val2 = "<<Val1*Val2<<endl;
   result=Val1*Val2;
   cout<<"Result "<<result<<endl;
  
  
   cout<<"Val1 % Val2 = "<<Val1%Val2<<endl;
   result=Val1%Val2;
   cout<<"Result "<<result<<endl;

   

    return 0;
}
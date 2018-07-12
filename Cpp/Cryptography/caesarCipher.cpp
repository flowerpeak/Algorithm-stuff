/ Implementation of Caesar cipher in c++
// Only works with alphabetic chars
// Time complexity of O(n)

#include <iostream>
using namespace std;


//encryption function
string ceasarCrypt(string input , int pad)
{

 for( int index = 0; index < input.length() ; index++)
 {
  //turns char into int
  int shift = input[ index ] + pad;

  if( shift > 122 || shift > 88)//edge cases
  {
   shift -= 26;
  }
  input[ index ] = shift  ;

 }

 return input ;
}

//decryption function
string caesarDecrypt(string input , int pad)
{
    
  for(int index=0; index < input.length(); index++ )
  {
  
   int shift = input[ index ] - pad;

   if(shift < 98 || shift < 65)//edge cases
   {
    shift += 26;
   }
   input[ index ] = shift ;

  }
  
return input;

}


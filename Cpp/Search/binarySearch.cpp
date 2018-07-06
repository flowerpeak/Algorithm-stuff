//implementation of binary search in c++
//time complexity of O(log n)

#include <iostream>
#include <array>
using namespace std;

int binarySearch(int seq[] , int len ,int target)
{
   int top = len;
   int low = 0;

  //if top-low is 1 the item is not in the list  
   while( top-low != 1 )
   {

    int mid = (top + low) / 2;

    if( seq[mid] == target)
    {
     return mid;
    }

    else if( seq[mid] < target)
    {
     low = mid ;
    }

    else
    {
     top = mid ;
    }
   }
   return 0; //return 0 if missing
}


int main()//check if it works
{

int arr[12] = {1,2,4,5,6,7,8,9,10,11,12};

int result = binarySearch(arr ,12, 4);


cout << result;


return 0;
}

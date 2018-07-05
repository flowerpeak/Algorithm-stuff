#include <iostream>
#include <vector>

using namespace std;

vector<int> bubleSort(vector<int> arr)
{
 int max = arr.size()-1;//checks one value less in each iteration

 int p = 0;
 while(p < arr.size())
 {

  int count = 0;
  while(count < max)
  {

   if(arr[count] > arr[count + 1])//swap values if unordered
   {
    int left = arr[count];
    int right = arr[count+1];

    arr[count] = right;
    arr[count+1] = left;
   }

   count++;
  }

  p++;
  max--;
 }
 return arr ;
}

int main()
{
vector<int> arr = {1,0,0,93,2,1334,0,567,66};

vector<int> result = bubleSort(arr);

for(int i = 0 ; i < arr.size(); i++)
{
 cout << result[i] << endl;
}

return 0;

}

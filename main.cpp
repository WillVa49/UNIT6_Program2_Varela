#include <iostream>
#include "accounts.h"

using namespace std;

void printArray(int[], int);
void sortArrayAsc(int[],int);

int main()
{
  //Bubble sort ASC method per Task 2 of Unit 6 Assignment
  cout << "\nStart: "  << cpuTime() << endl;
  //Call the sort function
   sortArrayAsc(accountBalances, maxAccounts);
   printArray(accountBalances, maxAccounts);
 

  cout << "\nEnd: " << cpuTime() << endl;
  return 0;
}

void printArray(int arrayVals[], int size)
{
  cout << "\nPrintes values in array: " << endl;
  for(int i =0; i < size; i++)
  {
    cout << arrayVals[i] << ",";
  }  
 

}

void sortArrayAsc (int arrayVals[], int size)
{
  //Bubble sort ASC a la Dr. Rajan Alex
  int temp = 0;
  for(int left = 0; left < size; left++)
  {
    for(int right=left+1; right < size; right++)
    {
      if(arrayVals[right] > arrayVals[left])
      {
        //Classic swap algorithm
        temp = arrayVals[left];
        arrayVals[left] = arrayVals[right];
        arrayVals[right] = temp;
      }
    }
  }


}
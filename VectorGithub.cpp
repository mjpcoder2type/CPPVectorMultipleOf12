// Author : Marlon J Peters 
// Email : mjpcoder_type@outlook.com
// Started 9.24.26 7:45 AM
// Completed 9.24.26 8:53 AM

#include <iostream>
#include <vector>

// Vector containing multiples of 12s up to 120
// I really like descriptive identifiers
std::vector<int> VectorMultipleOfTwelves = {12,24,36,48,60,72,84,96,108,120};

void CheckIfMultipleOfTwelve()
{


  int MultTwelveInput;

  std::cout << "In memory we have a vector that contains numbers ranging from 12 to " << VectorMultipleOfTwelves.back() << '\n';
  std::cout << "12,24,36..." << VectorMultipleOfTwelves.back() << '\n';
  std::cout << std::endl;
  std::cout << "Enter literally any number in this series after " << VectorMultipleOfTwelves.back() << '\n';

  std::cin >> MultTwelveInput;
  std::cout << '\n';
  if((MultTwelveInput%12) == 0 && MultTwelveInput > VectorMultipleOfTwelves.back())
  {
    std::cout << "Good job.  That entry has been added to the vector!" << '\n';
    VectorMultipleOfTwelves.push_back(MultTwelveInput);
    std::cout << "You can see for yourself:" << '\n';
    for(auto iter : VectorMultipleOfTwelves)
    {
      std::cout << iter << '\t' << '\t';
    }
    std::cout << '\n';
    CheckIfMultipleOfTwelve(); // recursion is always a thing of beauty!
  } else {
    std::cout << "Incorrect.  The entry has to be a multiple of 12 and be the next entry in a series of multiples of 12! Nothing added to vector!" << '\n';
    system("exit");
  }
}


int main()
{


  CheckIfMultipleOfTwelve();


   
  

  return 0;
}
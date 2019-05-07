/*
Anthony,
test
I have just checked your source files. So here are the steps I think you should do from this point on:

1. Change the private variables to double.
2. You should store all samples in the Nsamples object. That mean you should have some container e.g. vector as a member variable of your class which
will store all the samples from the file (ex. std::vector<std::pair<double, double>>), instead of the variables on the following screenshot:
Inline image 1

3. You should implement Nsamples::LoadFile() function that will load the input.dat file into the vector mentioned in previous step.
4. You should implement Nsamples::WriteFile() function which will write the results to the same file.
5. You should implement "double Nsamples::CalculateAmplitude(double real, double imag)" which will calculate the amplitude before writing to the file;
6. You should implement similar function for calculating the phase.
7. In main() function create object Nsamples and than call LoadFile() function from step 3 to load the file.
8. Then in main() call the WriteFile() function from step 4 which will first calculate and directly write the results to the file (note the function will write the results in the 3rd and 4th column - column 1 and 2 shouldn't be erased).
*/


#include <iostream>
#include <vector>
#include "Nsamples.h"

using namespace std;
//
int main()
{

  //double real1 = 10;
  //double imag1 = 20;
  Nsamples Samples;

  if (Samples.LoadFile()) // If the file is properly loaded
  {

    // Then calculate and write back to the file the column for phase and amplitude.
    // Here is enough to call:
    Samples.WriteFile();
    // Internally in WriteFile() function, first you calculate the phase and the amplitude and then you write back to the file.
    // That's why I put CalculateAmplitude() and CalculatePhase as private members of Nsamples.
  }

  return 0;
}

#ifndef NSAMPLES_H_INCLUDED
#define NSAMPLES_H_INCLUDED

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

class Nsamples
{
public:
  Nsamples()
  {
    // ???
    // This seems like a function which is never called. If you intented to initialize the vector during
    // construction than simply call LoadFile() function here:
    //LoadFile();

    //std::vector<std::pair<double, double>> VecComplex(double real, double imag)
  }

  ~Nsamples() {}

  // This 2 functions is better to return boolean indicating if the operation read/write was completed successfully.
  bool LoadFile();
  bool WriteFile();

private:
  double CalculateAmplitude(double real, double imag);
  double CalculatePhase(double real, double imag);

  //create vector
  std::vector<std::pair<double, double>> m_vecComplex;
};


#endif // NSAMPLES_H_INCLUDED

#include "Nsamples.h"
#include <complex>
#include <iomanip>

using namespace::std;
/*test*/

bool Nsamples::LoadFile()
{
  bool bRet = false;

  ifstream file("inputc.dat");
  string strLine;

  if(file.is_open(), ios::in)
  {
    // Loop through the file line by line and put the numbers in the vector
    while (getline(file, strLine))
    {
      pair<double, double> complexNumber;
      istringstream iss(strLine);
      iss >> complexNumber.first >> complexNumber.second;
      m_vecComplex.push_back(complexNumber);


    }

    file.close();
    bRet = true;
  }

  return bRet;
}

bool Nsamples::WriteFile()
{
  bool bRet = false;

  std::ofstream ofs;
  ofs.open ("output.txt", std::ofstream::out | std::ofstream::app);
  //create two columns Amplitude and Phase
  ofs << "Amplitude "  << setw(8) << "Phase " << '\n';


  for (unsigned int i = 0; i < m_vecComplex.size(); i++)
  {

    double dReal = m_vecComplex[i].first;
    double dImag = m_vecComplex[i].second;

    double dAmplitude = CalculateAmplitude(dReal, dImag);
    double dPhase = CalculatePhase(dReal, dImag);
    cout << "amplitude = " << dAmplitude << setw(10) << "phase = " << dPhase << endl;

    //output to the file output.txt
    ofs << dAmplitude << setw(10) << dPhase << '\n';

    //ofs.close();

  }
  ofs.close();
  return bRet;
}

double Nsamples::CalculateAmplitude(double real, double imag)
{

  //  amplitude = sqrt(real^2 + imag^2)
  std::complex<double> z(real,imag);
  double amplitude;
  amplitude = std::abs(z);

  return amplitude;

}

double Nsamples::CalculatePhase(double real, double imag)
{

  // Phase = arctan(imag/real)
  double phase;
  phase = atan (imag/real);
  return phase;

}




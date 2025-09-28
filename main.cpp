/*********************
* Автор: Дедушев П.А.*
* Вариант: 4         *
**********************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double a = 5.54;
  double b = 3.93; 
  double gamma = 1.45; 
  double T1 = 288; 
  double T2 = 675; 
  double K;

  K = (gamma - 1) / gamma;
 
  double eta1 = 1 - pow(1 / b, K);// Расчет КПД для цикла из двух изобар и двух адиабат
  double eta2 = (T2 - T1) / (T2 + (T2 - T1) / ((gamma - 1) * log(a)));// Расчет КПД для цикла из двух изохор и двух изотерм
  double eta3 = 1 - K * log(b) / (pow(b, K) - 1);// Расчет КПД для цикла из изотермы и адиабаты с изотермой

  cout << "Efficiency for a cycle with two isobars and two adiabats:      " << eta1 << endl
       << "Efficiency for a cycle of two isochores and two isotherms:     " << eta2 << endl
       << "Efficiency for a cycle of isotherm and adiabat with isotherm:  " << eta3 << endl;

  return 0;
}

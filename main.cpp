/*********************
* Автор: Дедушев П.А.*
* Вариант: 4         *
**********************/

#include <iostream>
#include <cmath>

int main() {
  double a = 5.54;
  double b = 3.93; 
  double gamma = 1.45; 
  double T1 = 288; 
  double T2 = 675; 
  
  double K = (gamma - 1) / gamma;
 
  double eta1 = 1 - pow(1 / b, K);// Расчет КПД для цикла из двух изобар и двух адиабат

  double eta2 = (T2 - T1) / (T2 + (T2 - T1) / ((gamma - 1) * log(a)));// Расчет КПД для цикла из двух изохор и двух изотерм

  double eta3 = 1 - K * log(b) / (pow(b, K) - 1);// Расчет КПД для цикла из изотермы и адиабаты с изотермой

  std::cout << "КПД для цикла из двух изобар и двух адиабат:      " << eta1 << std::endl;
  std::cout << "КПД для цикла из двух изохор и двух изотерм:      " << eta2 << std::endl;
  std::cout << "КПД для цикла из изотермы и адиабаты с изотермой: " << eta3 << std::endl;

  return 0;
}

#include <iostream>

int main(){
  float weight;
  float height;
  float bmi;

  std:: cout << "Enter your height(meter): " << std::endl;
  std:: cin >> height;
  std:: cout << "Enter your weight(KG): " << std:: endl;
  std:: cin >> weight;

  // bmi formula weight / height * height
  /*Underweight = <18.5
  Normal weight = 18.5–24.9
  Overweight = 25–29.9
  Obesity = BMI of 30 or greater */
  
  bmi = weight / (height * height);
  std:: cout <<"Your bmi is : " << bmi << ". " << std::endl;

  if(bmi<18.5){
    std::cout << "You're Underweight." << std::endl;
  } else if(bmi >= 30 ){
    std:: cout << "You have achieve the art of obesity :p" << std::endl;
  } else if(bmi >= 25 ){
    std:: cout << "You're overweght." << std::endl;
  } else{
    std:: cout << "You have normal weight." << std::endl;
  }



  return 0;
}

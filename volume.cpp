#include <iostream>

using std::cout; 
using std::cin;

double pi = 3.1415926;

double volume(double radius);//to calculate the area of a sphere 
double volume(double radius, double height); //to calculate the area of a cylinder



int main(){

  double radius = 0; 
  double height =0; 

  cout << "Type s if you want to calculate sphere. Type z if you want to calculate a cylinder: ";
  char input = '\0'; 
  cin >> input;
  
  if(input == 's'){
    cout << "\n"<< "Enter the radius of your sphere: "; 
    cin >> radius; 
    cout << "\n"<< "The volume of the sphere is: "<< volume(radius) << std::endl; 
  }else if(input == 'z'){
    cout << "\n"<< "Enter the radius of your cylinder face: "; 
    cin >> radius; 
    cout << "\n" << "Enter the height of your cylinder: ";
    cin >> height; 
    cout << "\n" << "The volume of the cylinder is: " << volume(radius, height) << std:: endl; 
  }else {
    cout << "Please input either s for sphere or z for cylinder"; 
  }

}

double volume(double radius){
  return (4*pi*radius*radius*radius)/4.0;
}

double volume(double radius, double height){
  return pi*radius*radius*height;
}


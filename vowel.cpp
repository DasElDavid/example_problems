#include <iostream> 

void vowel_check(char& ch){
  if(!std::isalpha(ch)){
    std::cout << "Character is not in the alphabet." << "\n"; 
  } else{
    switch (ch) {
      case 'a':
        std::cout << ch << " is a vowel" << "\n";
        break;
      case 'A':
        std::cout << ch << " is a vowel" << "\n";
        break;
      case 'e':
        std::cout << ch << " is a vowel" << "\n";
        break;
      case 'E':
        std::cout << ch << " is a vowel" << "\n";
        break;
      case 'i':
        std::cout << ch << " is a vowel" << "\n";
        break;
       case 'I':
        std::cout << ch << " is a vowel" << "\n";
        break;
       case 'o':
        std::cout << ch << " is a vowel" << "\n";
        break;
      case 'O':
        std::cout << ch << " is a vowel" << "\n";
        break;
      case 'u':
        std::cout << ch << " is a vowel" << "\n";
        break;
       case 'U':
        std::cout << ch << " is a vowel" << "\n";
        break;
     default:
        std::cout << ch << " is not a vowel" << "\n";
        break;
    }
  }
}
int main(){
  char ch = '\0';

  std::cout << "Please input an alphabet letter: ";
  std::cin >> ch;

 vowel_check(ch); 

  return 0;
}

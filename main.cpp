#include <iostream>
#include <string>

int main() {
//int num1, num2;


  //std::cout << "Introduce un numero!\n";
  //std::cin >> num1;
  //std::cout << "Introduce otro numero!\n";
  //std::cin >> num2;

  //std::cout << "sus numeros son ";
  //std::cout << num1 << "\n";
  //std::cout << " y ";
  //std::cout << num2;

  //  menu
  int op;
while(true){

  void menu();
  std::cin >> op;
  if (op < 5){
    break;
  }
  void opcionmenu(int op);
 }
}

void opcionmenu(int op){

switch (op){
  case 1:
  std::cout << "hola";
  case 2:
  std::cout << "hola";
  case 3:
  std::cout << "pop";
  case 4:
  std::cout << "lol";
}

}

void menu(){
  std::cout << "1. opcion 1\n";
  std::cout << "2. opcion 2\n";
  std::cout << "3. opcion 3\n";
  std::cout << "4. opcion 4\n";
}
#include <iostream>
#include <string>
#include <sstream>

std::string calcula_2_numeros_inteiros(int num1,int num2,const char * characterDaOperacao)
{
    const std::string operacaoInvalida = "operacao invalida\n";
    std::string resultado = " ";
    
    resultado += std::to_string(num1) + " ";
    resultado += characterDaOperacao;
    resultado += " " + std::to_string(num2) + " = ";

    switch (characterDaOperacao[0])
    {
        case '+':
            resultado += std::to_string(int(num1 + num2));
            break;
        
        case '-':
            resultado += std::to_string(num1 - num2);
            break;
        
        case '*':
            resultado += std::to_string(num1 * num2);
        break;
        
        case '/':
            resultado += std::to_string(num1 / num2);
            break;
        
        default:
            resultado += operacaoInvalida;
            break;
    }

    return resultado;
}
int main()
{
    std::string number1,number2;
    std::string operacao;

    std::cout<<"Digite um numero :\n";

    std::getline(std::cin, number1);


    std::cout<<"Digite o operando :\n";

    std::getline(std::cin, operacao);


    std::cout<<"Digite o segundo numero :\n";

    std::getline(std::cin, number2);


    std::cout<<"o resultado de " << calcula_2_numeros_inteiros(std::stoi(number1),std::stoi(number2),operacao.c_str())<<"\n";


    return 0;
}
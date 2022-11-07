#include <iostream>
#include <string>


std::string calcula_2_numeros_inteiros(int num1,int num2,char characterDaOperacao)
{
    const std::string operacaoInvalida = "operacao invalida\n";
    std::string resultado = " ";
    
    resultado += std::to_string(num1) + " ";
    resultado += characterDaOperacao;
    resultado +=  std::to_string(num2);

    switch (characterDaOperacao)
    {
        case '+':
            resultado = num1 + num2;
            break;
        
        case '-':
            resultado = num1 - num2;
            break;
        
        case '*':
        resultado = num1 * num2;
        break;
        
        case '/':
            resultado = num1 / num2;
            break;
        
        default:
            resultado = operacaoInvalida;
            break;
    }
    return resultado;
}
int main()
{
    int number1,number2;
    char operacao;

    std::cout<<"Digite um numero :\n";

    std::cin>>number1;

    std::cout<<"Digite o operando :\n";

    std::cin>>operacao;

    std::cout<<"Digite o segundo numero :\n";
    
    std::cin>>number2;


    std::cout<<"o resultado de " << calcula_2_numeros_inteiros(number1,number2,operacao);


    return 0;
}
#include <stdio.h>
#include <math.h>

void ex1 (){
    float a;

    printf("Digite o preco atual do produto:\n");
    scanf("%f",&a);

    a *= 0.9;

    printf("O valor promocional do produto e %f \n",a);  
}

void ex2(){
    float peso;

    printf("Digite o peso do conteudo:\n");
    scanf("%f",&peso);

    float gramas = peso * 1000;

    printf("O peso em gramas é igual a %.2f",gramas);



}

void ex3 () {
    float base_maior;
    float base_menor;
    float altura;

    printf("Digite a base maior: \n");
    scanf("%f",&base_maior);

    printf("Digite a base menor: \n");
    scanf("%f",&base_menor);

    printf("Digite a altura: \n");
    scanf("%f",&altura);

    float area = ((base_maior + base_menor)*altura)/2;

    printf("A area do trapezio e igual a %.2f", area);


}

void ex4 () {
    int ano_nascimento;
    int ano_atual;

    printf("Digite o seu ano de nascimento: \n");
    scanf("%d",&ano_nascimento);

    printf("Digite o ano em que estamos: \n");
    scanf("%d",&ano_atual);

    int idade_ano = ano_atual - ano_nascimento;
    int idade_mes = 12*(ano_atual - ano_nascimento);
    int idade_dia = 365*(ano_atual - ano_nascimento);

    printf("Você sobreviveu %d anos | Você sobreviveu %d meses | Você sobreviveu %d dias",idade_ano,idade_mes,idade_dia);


}

void ex5 () {
    float raio;

    printf("Digite o raio da esfera: \n");
    scanf("%f",&raio);

    float comprimento = 2 * M_PI * raio;
    float area = M_PI * pow(raio,2);
    float volume = (3 * M_PI * pow(raio,3))/4;

    printf("Comprimento = %.2f | area = %.2f | volume = %.2f",comprimento,area,volume);
}

int main(){

ex5();




}


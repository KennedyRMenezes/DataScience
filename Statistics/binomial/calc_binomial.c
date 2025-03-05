#include<stdio.h>
#include<math.h>

//Calcula fatorial
int factorial(int n) {

    int factorial = 1;

    for (int i = 2; i <= n; i++){
        factorial = factorial * i;
    }

    return factorial;
}

//Calcula Combinacoes
int nCr(int n, int r) {

    return factorial(n) / (factorial(r) * factorial(n - r));

}

int main(){

    int n;
    double p;
    int limite;

    printf("Insira um n: ");
    printf("\n");
    scanf("%d", &n);
    printf("Insira um p: ");
    printf("\n");

    scanf("%lf", &p);

    double q = (1 - p);

    int a = 0; 
    double b = n;
    double result = 0.0;

    while(a <= n){

        int combResult = nCr(n, a);

        double x = pow(p, a);
        double y = pow(q, b);

        double result = combResult * x * y;

        printf("P(X = %d) = C(%d %d) -- %d X %f X %f = %f\n", a,n,a,combResult,x,y,result);

        a = a + 1;
        b = b - 1;
        

    }

    printf("\n");

    return 0;
}
#include <stdio.h>

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a+b<=c || a+c<=b || b+c<=a)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if(a*a==(b*b)+(c*c) || b*b==(a*a)+(c*c) || c*c==(b*b)+(a*a)){printf("TRIANGULO RETANGULO\n");}
        else if(a*a>(b*b)+(c*c) || b*b>(a*a)+(c*c) || c*c>(b*b)+(a*a)){printf("TRIANGULO OBTUSANGULO\n");}
        else if(a*a<(b*b)+(c*c) || b*b<(a*a)+(c*c) || c*c<(b*b)+(a*a)){printf("TRIANGULO ACUTANGULO\n");}
        if(a==b && b==c){printf("TRIANGULO EQUILATERO\n");}
        else if(a==b || b==c || c==a){printf("TRIANGULO ISOSCELES\n");}
    }
    return 0;
}

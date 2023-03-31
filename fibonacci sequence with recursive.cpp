#include<stdio.h>
#include<conio.h>

int fibonacci(int n)  {
    int fib;
    
    if (n <= 1)
        fib = n;
    else
        fib = fibonacci(n - 1) + fibonacci(n - 2);
    return fib;
}
 
int main() {
    int sayi;
    int sonuc;
    printf("Please enter an integer : ");
    scanf("%d", &sayi);
//-----------------------------------------------------------
    sonuc = fibonacci(sayi);
    printf("Fibonacci(%d) = %ld", sayi, sonuc);
    getch();
    return 0;
}

// 1 1 2 3 5 8 13 21 34 55 = Sayý girme kýsmýna 10 yazarsak bize 55 sonucunu verir.

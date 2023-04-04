#include <stdio.h>
#include <math.h>

void SelectShape(char shape, int a, int r);
void Square(int a);
void Circle(int r);

void GetInput(char shape, int a, int r){
    printf("Select Shape, Enter 1 for Square or 2 for Circle: ");
    scanf("%c", &shape);
    SelectShape(shape, a, r);
    
}

void SelectShape(char shape, int a, int r){
    if (shape == '1')
        Square(a);

    else
        Circle(r);

}

void Square(int a){
    double area, per;
    printf("Enter only one side: ");
    scanf("%d", &a);

    area = a*a;
    per = 4*a;

    printf("Area of square is: %.2lf \nPerimeter of square is: %.2lf", area, per);
}

void Circle(int r){
    double area, per;
    printf("Enter radius: ");
    scanf("%d", &r);

    area = 3.14159 * (r*r);
    per = 2 * 3.14159 * r;

    printf("Area of circle is: %.2lf \nPerimeter of circle is: %.2lf", area, per);
}

int main()
{
    int a, r;
    char shape;

    GetInput(shape, a, r);

    return 0;
}
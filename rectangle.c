#include <stdio.h>

void calcPerimeter(double *perimeter, double height, double width) {
  *perimeter = (height + width) * 2;
}
void calcArea(double *area, double height, double width) {
  *area = height * width;
}

int main() {
  struct Rectangle {
    double width;
    double height;
    double perimeter;
    double area;
  };
  struct Rectangle rectangle;
  printf("enter rectangle width: ");
  scanf("%lf", &rectangle.width);
  printf("enter rectangle height: ");
  scanf("%lf", &rectangle.height);
  calcArea(&rectangle.area, rectangle.height, rectangle.width);
  calcPerimeter(&rectangle.perimeter, rectangle.height, rectangle.width);
  printf("width: %.2lf\n", rectangle.width);
  printf("height: %.2lf\n", rectangle.height);
  printf("area: %.2lf\n", rectangle.area);
  printf("perimeter: %.2lf\n", rectangle.perimeter);
  return 0;
}

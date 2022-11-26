#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
#include<ctype.h>

void name();
void product();
void square();
void rectangle();
void circle();
void roundOff();
void ascii();
void real();
void triangle();
void decimalT0Octal();
void toLowerCase();
void toUpperCase();
void grossSalary();


void main(){

    char ch;

    do{
        int choice;
        printf("\n1. Write a program to print your name.\n");
        printf("2. Write a program to find the multiplication of two Integer and three float numbers.\n");
        printf("3. Write a program to calculate the area & parameter of square.\n");
        printf("4. Write a program calculate the area & parameter of rectangle.\n");
        printf("5. Write a program calculate the area & parameter of circle.\n");
        printf("6. Write a program to read two numbers & display the numbers their sum rounded of 3 place after the decimal point.\n");
        printf("7. Write a program to read any character from the keyboard & display the ASCII number associated with it.\n");
        printf("8. Write a program to read three real numbers a, b & c and evaluate t1 and t2 and calculate t1-t2 where t1 and t2 are given by :\n");
        printf("\t\t\tt1 = a(b+c) + b(c+a) + c(a+b)\n");
        printf("\t\t\tt2 = sqrt ( a^2 (b^2 + c^2) + b^2 (c^2 + a^2) + c^2 (a^2 + b^2) )\n");
        printf("9. Write a program to find out the area of the triangle using the following formula.\n");
        printf("\t\t\tarea =  sqrt( s(s-a) (s-b) (s-c) )\n");
        printf("\t\t\twhere s = (a + b + c)/2 \n");
        printf("10. Write a program to convert the decimal number into an Ocatal Number.\n");
        printf("11. Write a program to convert lower case character to upper case character.\n");
        printf("12. Write a program to convert upper case character to lower case character.\n");
        printf("13. Ramesh's basic salary is taken as input from the keyboard, his dearness allowance is 40 percent of basic salary and house rent allowance is 20 percent of basic salary. Write a program to calculate his gross salary.\n");
        printf("\nEnter number from 1-13 respectively of the above programs : ");
        scanf("%d", &choice);

        switch(choice){
            case 1:  name();
                     break;
            case 2:  product();
                     break;
            case 3:  square();
                     break;
            case 4:  rectangle();
                     break;
            case 5:  circle();
                     break;
            case 6:  roundOff();
                     break;
            case 7:  ascii();
                     break;
            case 8:  real();
                     break;
            case 9:  triangle();
                     break;
            case 10: decimalT0Octal();
                     break;
            case 11: toLowerCase();
                     break;
            case 12: toUpperCase();
                     break;
            case 13: grossSalary();
                     break;
            default: printf("Wrong Choice!");
        }

    printf("\n\nDo you like to continue. Type (y/Y) for yes & (n/N) for no : ");
    scanf(" %c", &ch);

        
  }while(ch=='y' || ch == 'Y');
    
}

// Choice 1
void name(){
    printf("Hemant Kumar");
}

// Choice 2
void product(){
    int a, b;
    float x, y, z, total;
    printf("Enter two integers : ");
    scanf("%d %d", &a, &b);
    printf("Enter three float numbers: ");
    scanf("%f %f %f", &x, &y, &z);
    total = a*b*x*y*z;
    printf("Total is: %f", total);
}
// Choice 3
void square(){
    float side, area, perimeter;
    printf("Enter side of the square: ");
    scanf("%f", &side);
    area = side*side;
    perimeter = 4*side;
    printf("Area of the square : %f sq.m./sq.cm. \n", area);
    printf("Perimeter of the square : %f m./cm. ", perimeter);
}

// Choice 4
void rectangle(){
    float length, breadth, area, perimeter;
    printf("Enter length of the rectangle : ");
    scanf("%f", &length);
    printf("Enter breadth of the rectangle : ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2*(length + breadth);

    printf("Area of the rectangle is : %f sq.m./sq.cm.\n", area);
    printf("Perimeter of the rectangle is : %f m./cm.", perimeter);

}

// Choice 5
void circle(){
    float radius, area, perimeter;
    const float pi = 3.14;
    printf("Enter radius of the circle : ");
    scanf("%f", &radius);
    
    area = pi * radius * radius;
    perimeter = 2 * pi * radius;

    printf("Area of the Circle is : %f sq.m./sq.cm.\n", area);
    printf("Perimeter of the Circle is : %f m./cm.\n", perimeter);

}

// Choice 6
void roundOff(){
    float a, b, sum;
    printf("Enter a & b : ");
    scanf("%f %f", &a, &b);
    sum = a + b;
    sum = round(sum*1000)/1000;
    printf("Sum rounded off to three places after the decimal point is : %f", sum);
}

// Choice 7
void ascii(){
    char c;
    printf("Enter Character : ");
    scanf(" %c", &c);
    printf("The ASCII value of %c is : %d", c, c);
}

// Choice 8
void real(){
    
    double a, b, c, t1, t2;
    
    printf("Enter three real numbers: \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    t1 = a*(b+c) + b*(c+a) + c*(a+b);
    t2 = sqrt((a*a) * (b*b + c*c) + (b*b) * (c*c + a*a) + (c*c) * (a*a + b*b));

    printf("t1 : %lf \n", t1);
    printf("t2 : %lf \n", t2);
    printf("t1-t2 : %lf \n", t1-t2);

}

// Choice 9
void triangle(){

    float a, b, c, s, area;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    s = (a+b+c)/2;
    area = sqrt(s * (s-a) * (s-b) * (s-c));

    printf("Area of the triangle is : %f sq.m./sq.cm.", area);
}

// Choice 10
void decimalT0Octal(){
    int decimalNumber, octalNumber = 0, i=1;
    printf("Enter the decimal Number : ");
    scanf("%d", &decimalNumber);
    while(decimalNumber>0){
        octalNumber = octalNumber + (decimalNumber%8) * i;
        decimalNumber = decimalNumber/8;
        i = i*10;
    }
    printf("Ocatal number : %d", octalNumber);
}

// Choice 11
void toLowerCase(){
    char c;
    printf("Enter the character in Upper Case : ");
    scanf(" %c", &c);
    c = tolower(c);
    printf("Lower Case : %c", c);
}

// Choice 12
void toUpperCase(){
    char c;
    printf("Enter the character in Lower Case  : ");
    scanf(" %c", &c);
    c = toupper(c);
    printf("Upper Case : %c", c);
}

// Choice 13
void grossSalary(){
    float basic_salary, gross_salary;
    printf("Enter the basic salary of Ramesh : ");
    scanf("%f", &basic_salary);

    gross_salary = basic_salary - (basic_salary * 0.6);
    printf("Gross Salary of Ramesh : %f rupees.", gross_salary);
}
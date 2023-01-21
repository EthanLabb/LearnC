#include <stdio.h>
#include <stdlib.h>

//GPA Calculator - Ethan Labbe
//Input grades from 0-4
//A+ ---> 4.0
//A  ---> 4.0
//A- ---> 3.7
//B+ ---> 3.3
//B  ---> 3.0
//B- ---> 2.7
//C+ ---> 2.3
//C  ---> 2.0
//C- ---> 1.7
//D+ ---> 1.3
//D  ---> 1.0
//F  ---> 0

int main()
{
    int num;
    float weight, grade, GP, GPA, units;
    printf("Number of Courses enrolled: \n");
    scanf("%d", &num);
    GP = 0;
    units =0;
    for (int i = 1; i < num+1; i++)
    {
        printf("Grade in Course %d: \n", i);
        scanf("%f", &grade);
        printf("Unit Weight of Course %d: \n", i);
        scanf("%f", &weight);
        GP += (grade*weight);
        units += weight;
    }
    GPA= GP/units;
    printf("your GPA is: %0.1f", GPA);
    return 0;
}

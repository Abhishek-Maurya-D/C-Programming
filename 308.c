// Chapter = 22 
// Chapter = 22




// [A] = (a)
// [B] = (a)
// #include<stdio.h>
// #include<stdio.h>
// int main()
// int main()
// {
// {
//     enum status {pass, fail, atkt};
//     typedef struct patient
//     enum status stud1, stud2, stud3;
//     {
//     stud1 = pass;
//         char name[20];
//     stud2 = fail;
//         int age;
//     stud3 = atkt;
//         int systolic_bp;
//     printf("%d %d %d\n", stud1, stud2, stud3);
//         int diastolic_bp;
//     return 0;
//     } ptt;
// }
//     ptt p1 = {"anil", 23, 110, 220};

//     printf("%s %d\n",p1.name, p1.age);

//     printf("%d %d\n", p1.systolic_bp, p1.diastolic_bp);
// [A] = (b)
//     return 0;
#include<stdio.h>
// }
int main()

{

    printf("%f\n", (float)((int)3.5/2));
// [B] = (b)
    printf("%d\n",(int)(((float)3/2)*3));
// #include<stdio.h>
    return 0;
// void show();
}
// int main()

// {

//     void (*s)();

//     s=show;

//     (*s)();

//     s();

//     return 0;

// }

// void show()

// {

//     printf("Don't show off. It won't pay in the long run\n");

// }





// [B]  - (c)

#include<stdio.h>

void show(int, float);

int main()

{

    void (*s)(int, float);

    s=show;

    (*s)(10,3.14);

    return 0;

}

void show(int i, float f)

{

    printf("%d %f\n", i, f);

}

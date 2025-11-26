#include <stdio.h>
struct score{
    float marks;
    int Rank ;
};

void edit (struct score *s1)
{
    printf("Before change in fn: %f\n", s1->marks);
    s1->marks = 34.6;
    printf("After change in fn : %f\n", s1->marks);

}
void main()
{
    struct score s1 = {87.9, 4};
    edit(&s1);
    printf("After change in main %f\n", s1.marks);
}
#include <stdio.h>
int most_water (int height[], int n) // [4,3,5,6,1]
{
    int h, w, i, water, final=0;
    int left = 0;
    int right = n-1;
    while(left<right)
    {
        //choose height
        if ( height[left] < height[right])  // 4<1 false
        h = height[left];                  // 
        else
        h= height[right];  //1
        // calc width
        w = right - left; //4-0  = 4  index
        water = h*w; // 1*4 = 4
        // prev or current
        if (water> final) // 4>0     12>4     8>12
        final = water;    // 4        12       12
        //moving left or right
        if ( height[left] > height[right])
        right--;
        else
        left++; 
    }
    return final;
}
int main()
{
    int height[5] = {4,2,5,6,1};
    int n = 5;
    printf("Most water is %d\n", most_water(height,n));
}
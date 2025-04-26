//变种水仙花数
//找出5位数中所有的变种水仙花数
#include <stdio.h>


int main() {
    for (int i = 10000; i < 100000; i++) 
    {
        
        int part1 = (i / 10000) * (i % 10000);  
        int part2 = (i / 1000) * (i % 1000);     
        int part3 = (i / 100) * (i % 100);       
        int part4 = (i / 10) * (i % 10);        
        int sum = part1 + part2 + part3 + part4;

        if (i == sum) 
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
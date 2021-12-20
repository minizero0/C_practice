#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int isitsosu(int num){
    for(int i=2; i < num/2; i++){
        if(num%i == 0){
            return 0;
        }
    }
    return 1;
}

// nums_len은 배열 nums의 길이입니다.
int solution(int nums[], size_t nums_len) {
    size_t index, a ,b;
    int result, answer;
    result = 0;
    index = 0;
    answer = 0;
    
    while (index < nums_len - 2)
    {
        a = index + 1;
        while (a < nums_len - 1)
        {
            b = a + 1;
            while (b < nums_len)
            {
                result = nums[index] + nums[a] + nums[b];
                if (isitsosu(index) == 1)
                {
                    answer++;
                    printf("%d\n", result);
                }
                b++;
            }
            a++;
        }
        index++;
    }
    return answer;
}

int main(void)
{
    int nums[5] = {1,2,3,4};
    solution(nums, 4);
}
#include <stdio.h>
#include <string.h>

int main()
{
    char input[100]; 
    char output[100]; 
    int i, j, k; 
    int len; 
    int count; 

    printf("لطفا یک رشته به فرمت زیر وارد کنید:\n");
    printf("1234,1222,yuer\n");
    scanf("%s", input); 

    len = strlen(input); 
    count = 0; 
    j = 0; 

    for (i = 0; i < len; i++) 
    {
        if (input[i] == ',') 
        {
            count++; 
            output[j] = '@'; 
            j++;
            printf("index %d : ", count - 1); 
            for (k = j - count; k < j - 1; k++) 
            {
                printf("%c", output[k]); 
            }
            printf("\n"); 
        }
        else 
        {
            output[j] = input[i]; 
            j++; 
        }
    }

    count++; 
    printf("index %d : ", count - 1); 
    for (k = j - count; k < j; k++) 
    {
        printf("%c", output[k]); 
    }
    printf("\n"); 

    output[j] = '\0'; 
    printf("%s\n", output); 

    return 0;
}

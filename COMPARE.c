#include <stdio.h>

int main()
{
    int testNumbers; // declaration
    int fileNumbers;
    int count;

    printf("Enter the number of test cases : ");
    scanf("%d", &testNumbers);
    for (count = 0; count < testNumbers; ++count)
    {
        printf("\nEnter number of files to be tested : ");
        scanf("%d", &fileNumbers);
        struct file
        {
            char Name[100];
            int ID;
        } f[fileNumbers];
        int index;
        int index2;
        int lowest;
        printf("\nEnter the names of the files below\n");
        for (index = 0; index < fileNumbers; ++index)
        {
            printf("Enter the file's name : ");
            scanf("%s%d", f[index].Name, &f[index].ID);
        }
        
        for (index = 0; index < fileNumbers; ++index)
        {
            lowest = f[index].ID;
            for (index2 = index + 1; index2 < fileNumbers; ++index2)
            {
                if (f[index].Name == f[index2].Name)
                {
                    printf("\t%s\n\t%s 2\n", f[index].Name, f[index2].Name);
                    printf("\t%d%d 2\n", f[index].ID, f[index2].ID);
                    continue;
                } else {
                    printf("\t%d%d 3 idontknow\n", f[index].ID, f[index2].ID);
                    if(f[index].ID > f[index2].ID)
                    {
                        lowest = f[index2].ID;
                        printf("%d", lowest);
                    }
                    break;
                }
            }
            if (lowest == f[index].ID)
            {
                printf("%s %d", f[index].Name, f[index].ID);
            }
        }
       
    }
    return 0;
}


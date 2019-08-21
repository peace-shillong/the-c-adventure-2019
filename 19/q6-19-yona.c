    #include <stdio.h>
    int main()
    {
        int n, i;
        float num[100], sum , average;
        printf("Enter the numbers of elements: ");
        scanf("%d", &n);
        for(i = 0; i < n; ++i)
        {
            printf("%d. Enter number: ", i+1);
            scanf("%f", &num[i]);
            sum += num[i];
        }
        average = sum / n;
        printf("Average = %.2f", average);
        return 0;
    }


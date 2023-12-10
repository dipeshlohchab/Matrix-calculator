#include<stdio.h>
void add();
void subtract();
void upper_triangular();
void Lower_Triangular();
void transpose();
void multiplication();


int main()
{
    int choice;
    printf("Dipesh Lohchab\nCSE C\nMenu driven program for operations on matrix");

    while(1)
    {
    printf("\n\n\n   1.Addition of two matrices\n   2. Subtraction of two matrices\n");
    printf("   3. If the matrix is upper triangular\n   4. If the matrix is lower triangular\n");
    printf("   5. Transpose of a matrix\n   6. Product of two matrices\n\n");
    printf("Enter the number of operation:  ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        add();
        break;
    case 2:
        subtract();
        break;
    case 3:
        upper_triangular();
        break;
    case 4:
        Lower_Triangular();
        break;
    case 5:
        transpose();
        break;
    case 6:
        multiplication();
        break;
    default :
        printf("Invalid Choice!!");

    }
    }
}

void add()
{
    int a,i,j;
    printf("Enter a: ");
    scanf("%d",&a);
    int arr1[a][a],arr2[a][a],arr3[a][a];
    printf("Enter first array:\n");
    for(i=0;i<a;i++)
    {
        for (j=0;j<a;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter second array:\n");
    for(i=0;i<a;i++)
    {
        for (j=0;j<a;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for (j=0;j<a;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("First array is:\n");
    for(i=0;i<a;i++)
    {
        for (j=0;j<a;j++)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    printf("Second array is:\n");
    for(i=0;i<a;i++)
    {
        for (j=0;j<a;j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    printf("Sum of two arrays is:\n");
    for(i=0;i<a;i++)
    {
        for (j=0;j<a;j++)
        {
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
}

void subtract()
{
    int a,i,j;
    printf("Enter a: ");
    scanf("%d",&a);
    int arr1[a][a],arr2[a][a],arr3[a][a];
    printf("Enter first array:\n");
    for(i=0;i<a;i++)
    {
        for (j=0;j<a;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter second array:\n");
    for(i=0;i<a;i++)
    {
        for (j=0;j<a;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for (j=0;j<a;j++)
        {
            arr3[i][j]=arr1[i][j]-arr2[i][j];
        }
    }
    printf("First array is:\n");
    for(i=0;i<a;i++)
    {
        for (j=0;j<a;j++)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    printf("Second array is:\n");
    for(i=0;i<a;i++)
    {
        for (j=0;j<a;j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    printf("Sum of two arrays is:\n");
    for(i=0;i<a;i++)
    {
        for (j=0;j<a;j++)
        {
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
}

void upper_triangular()
{
    int row, col, isUpper,a;
    printf("Enter order of matrix: ");
    scanf("%d",&a);
    int array[a][a];


    /* Input elements in matrix from user */
    printf("Enter elements in matrix of size %d x%d: \n", a, a);
    for(row=0; row<a; row++)
    {
        for(col=0; col<a; col++)
        {
            scanf("%d", &array[row][col]);
        }
    }

    /* Check Upper triangular matrix condition */
    isUpper = 1;
    for(row=0; row<a; row++)
    {
        for(col=0; col<a; col++)
        {
            /*
             * If elements below the main diagonal (col<row)
             * is not equal to zero then it is not upper triangular matrix
             */
            if(col<row && array[row][col]!=0)
            {
                isUpper = 0;
            }
        }
    }

    /* Print elements of upper triangular matrix  */
    if(isUpper == 1)
    {
        printf("\nThe matrix is Upper triangular matrix.\n");

        for(row=0; row<a; row++)
        {
            for(col=0; col<a; col++)
            {
                printf("%d ", array[row][col]);
            }

            printf("\n");
        }
    }
    else
    {
        printf("\nThe matrix is not Upper triangular matrix.");
    }

}

void Lower_Triangular()
{
    int row, col, isUpper,a;
    printf("Enter order of matrix: ");
    scanf("%d",&a);
    int array[a][a];


    /* Input elements in matrix from user */
    printf("Enter elements in matrix of size %d x%d: \n", a, a);
    for(row=0; row<a; row++)
    {
        for(col=0; col<a; col++)
        {
            scanf("%d", &array[row][col]);
        }
    }

    /* Check Lower triangular matrix condition */
    isUpper = 1;
    for(row=0; row<a; row++)
    {
        for(col=0; col<a; col++)
        {
            /*
             * If elements below the main diagonal (col>row)
             * is not equal to zero then it is not Lower triangular matrix
             */
            if(col>row && array[row][col]!=0)
            {
                isUpper = 0;
            }
        }
    }

    /* Print elements of lower triangular matrix  */
    if(isUpper == 1)
    {
        printf("\nThe matrix is Lower triangular matrix.\n");

        for(row=0; row<a; row++)
        {
            for(col=0; col<a; col++)
            {
                printf("%d ", array[row][col]);
            }

            printf("\n");
        }
    }
    else
    {
        printf("\nThe matrix is not Lower triangular matrix.");
    }

}

void transpose()
{
    int c;
    printf("Enter c: ");
    scanf("%d",&c);
    int array[c][c];  // Original matrix
    int transpose[c][c];  // Transpose matrix

    int row, col;

    /* Input elements in matrix A from user */
    printf("Enter elements in matrix of size %dx%d: \n", c, c);
    for(row=0; row<c; row++)
    {
        for(col=0; col<c; col++)
        {
            scanf("%d", &array[row][col]);
        }
    }

    /*
     * Find transpose of matrix A
     */
    for(row=0; row<c; row++)
    {
        for(col=0; col<c; col++)
        {
            /* Store each row of matrix A to each column of matrix B */
            transpose[col][row] = array[row][col];
        }
    }

    /* Print the original matrix A */
    printf("\nOriginal matrix: \n");
    for(row=0; row<c; row++)
    {
        for(col=0; col<c; col++)
        {
            printf("%d ", array[row][col]);
        }

        printf("\n");
    }

    /* Print the transpose of matrix A */
    printf("Transpose of matrix A: \n");
    for(row=0; row<c; row++)
    {
        for(col=0; col<c; col++)
        {
            printf("%d ", transpose[row][col]);
        }

        printf("\n");
    }

}

// function to get matrix elements entered by the user
void getMatrixElements(int matrix [] [10], int row, int column)
{
    printf("\nEnter elements:\n");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix [i] [j]);
        }
    }
}

// function to multiply two matrices
void multiplyMatrices(int first [] [10], int second [] [10], int result [] [10], int r1, int c1, int r2, int c2)
{
    // Initializing elements of matrix mult to 0.
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            result [i] [j] = 0;
        }
    }

    // Multiplying first and second matrices and storing it in result
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) {
                result [i] [j] += first [i] [k] * second [k] [j];
            }
        }
    }
}

// function to display the matrix
void display(int result [] [10], int row, int column)
{
    printf("\nOutput Matrix:\n");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            printf("%d ", result [i] [j]);
            if (j == column - 1)
                printf("\n");
        }
    }
}

void multiplication()
{
    int first [10] [10], second [10] [10], result [10] [10], r1, c1, r2, c2;

    printf("Enter rows and column for the first matrix: \n");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and column for the second matrix: \n");
    scanf("%d %d", &r2, &c2);

    // Taking input until
    // 1st matrix columns is not equal to 2nd matrix row
    while (c1 != r2) {
        printf("Error! Enter rows and columns again.\n");
        printf("Enter rows and columns for the first matrix: \n");
        scanf("%d%d", &r1, &c1);
        printf("Enter rows and columns for the second matrix: \n");
        scanf("%d%d", &r2, &c2);
    }

    // get elements of the first matrix
    getMatrixElements (first, r1, c1);

    // get elements of the second matrix
    getMatrixElements (second, r2, c2);

    // multiply two matrices.
    multiplyMatrices (first, second, result, r1, c1, r2, c2);

    // display the result
    display (result, r1, c2);
}

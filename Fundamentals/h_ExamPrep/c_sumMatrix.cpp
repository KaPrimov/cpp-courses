#include <vector>
#include <iostream>

int CalculateSum( std::vector< std::vector< int > > matrix, int size)
{
    int sum = 0;
    
    for ( int i = 0; i < size; ++i )
    {
        for ( int j = i+1 ; j < size; j++ )
        {
            sum +=  matrix.at(i).at(j);
        }
    }
    
    return sum;
}

int main()
{
    
    std::vector< std::vector< int > > matrix;
    
    int size;
    std::cout << "Enter size of matrix: ";
    std::cin>>size;
    
    for ( int i = 0; i < size; ++i )
    {
        std::vector<int>temp;
        for ( int j = 0; j <size; ++j )
        {
            int number;
            std::cout <<"Enter matrix[" << i << "][" << j << "]= ";
            std::cin >> number;
            temp.push_back(number);
        }
        matrix.push_back(temp);
    }
    
    std::cout << "The MATRIX is : " << std::endl;
    
    for ( int i = 0; i < size; ++i )
    {
        for ( int j = 0; j <size; ++j )
        {
            std::cout << " " << matrix.at(i).at(j);
        }
        
        std::cout << std::endl;

    }
    
    std::cout << "Sum of numbers Above diagonal is: = " << CalculateSum(matrix, size) << std::endl;
    
    
    return 0;
}

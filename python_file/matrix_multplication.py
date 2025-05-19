def get_matrix(rows, cols):
    """Function to get matrix input from the user."""
    matrix = []
    print(f"Enter the elements of the matrix ({rows}x{cols}):")
    for i in range(rows):
        row = list(map(int, input(f"Row {i + 1}: ").split()))
        while len(row) != cols:
            print(f"Please enter exactly {cols} elements.")
            row = list(map(int, input(f"Row {i + 1}: ").split()))
        matrix.append(row)
    return matrix

def multiply_matrices(A, B):
    """Function to multiply two matrices A and B."""
    rows_A = len(A)
    cols_A = len(A[0])
    rows_B = len(B)
    cols_B = len(B[0])
    
    # Check if multiplication is possible
    if cols_A != rows_B:
        raise ValueError("Number of columns in A must be equal to number of rows in B.")
    
    # Create a result matrix with the appropriate dimensions
    result = [[0 for _ in range(cols_B)] for _ in range(rows_A)]
    
    # Perform multiplication
    for i in range(rows_A):
        for j in range(cols_B):
            for k in range(cols_A):
                result[i][j] += A[i][k] * B[k][j]
    
    return result

def print_matrix(matrix):
    """Function to print a matrix."""
    for row in matrix:
        print(" ".join(map(str, row)))

# Main program
if __name__ == "__main__":
    # Input for first matrix
    rows_A = int(input("Enter the number of rows for matrix A: "))
    cols_A = int(input("Enter the number of columns for matrix A: "))
    A = get_matrix(rows_A, cols_A)

    # Input for second matrix
    rows_B = int(input("Enter the number of rows for matrix B: "))
    cols_B = int(input("Enter the number of columns for matrix B: "))
    B = get_matrix(rows_B, cols_B)

    # Multiply matrices
    try:
        result = multiply_matrices(A, B)
        print("Result of matrix multiplication:")
        print_matrix(result)
    except ValueError as e:
        print(e)
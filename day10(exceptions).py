# Example of handling exceptions in Python

def divide_numbers(a, b):
    try:
        result = a / b  # Attempting division
    except ZeroDivisionError:
        print("Error: Division by zero is not allowed.")
        return None  # Return None if division fails
    except TypeError:
        print("Error: Invalid data type. Please enter numbers only.")
        return None  # Return None if incorrect type is used
    else:
        print("Division successful! Result:", result)
        return result  # Return the valid result
    finally:
        print("Execution of divide_numbers() is complete.")

# Testing the function with different cases
print(divide_numbers(10, 2))  # Expected output: 5.0
print(divide_numbers(10, 0))  # Expected output: Error message for division by zero
print(divide_numbers(10, 'a'))  # Expected output: Error message for incorrect type


# Custom Exception Class
class NegativeNumberError(Exception):
    """Custom exception for handling negative numbers."""
    pass

def check_positive_number(num):
    if num < 0:
        raise NegativeNumberError("Negative numbers are not allowed.")
    else:
        print("Valid number:", num)

# Testing custom exception
try:
    check_positive_number(-5)  # This should raise an exception
except NegativeNumberError as e:
    print("Caught exception:", e)

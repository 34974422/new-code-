def power(a, b):
    """Compute a raised to the power of b."""
    return a ** b

if __name__ == "__main__":
    base = 2
    exponent = 3
    result = power(base, exponent)
    print(f"{base} raised to the power of {exponent} is: {result}")
def testing_types():
    x5 = 5
    print(f"x5 = {x5}, type = {type(x5).__name__}")

    x5 = "five" # Like JavaScript, x5 can be dynamically changed as well, where it can switch between numbers and strings without having to declare the type
    print(f"x5 = {x5}, type = {type(x5).__name__}")

    # Let's try to mix a string with a number, and see how it throws an error because it doesn't know what to do
    try:
        result = "5" + 3
    except TypeError as e:
        print(f"ERROR: {e}")

    # To fix this, we must cast one or the other to match, so in this case, we are using str() to make the number 3 into a string to match "5"
    result = "5" + str(3)
    print(f"'5' + str(3) = {result}")

    # Similarly, we can cast the string into an integer to match the number 3 to allow mathematical addition
    result = int("5") + 3
    print(f"int(\"5\") + 3 = {result}")
    

if __name__ == "__main__":
    testing_types()
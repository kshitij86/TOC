def increment_binary_string(s):
    return '{:04b}'.format(1 + int(s, 2))
n=input()
print(increment_binary_string(n))
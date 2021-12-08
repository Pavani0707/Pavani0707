'''Read a given string, change the character at a given index and then
print the modified string.'''

def mutate_string(string : str, position: int, character : str) -> str :
    l = list(string)
    l[position] = character
    return ''.join(l)


s = str(input())
i, c = input().split()
s_new = mutate_string(s, int(i), c)
print(s_new)

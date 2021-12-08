'''You are given a string .
Your task is to find out if the string  contains: alphanumeric characters,
alphabetical characters, digits, lowercase and uppercase characters.'''

def perform_method(s : str, method : str):
    return any(eval('c.' + method) for c in s)


def perform_menu_of_tasks(s : str):
    lst = []
    for method in ['isalnum()', 'isalpha()', 'isdigit()', 'islower()', 'isupper()']:
        lst.append(print(perform_method(s, method)))
    return lst

s = str(input())
perform_menu_of_tasks(s)

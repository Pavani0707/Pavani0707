'''You are given three integers X, Y and Z and  representing the dimensions
of a cuboid along with an integer n. Print a list of all possible coordinates
given by [i,j,k] on a 3D grid where the sum of i+j+k is not equal to n.
Here,0<= i <= X,0<= j <= Y,0<= k <= Z . Please use list comprehensions.'''

def restricted_cupoid_dim(x, y, z, n):
    req_list = [[a, b, c] for a in range(x+1) for b in range(y+1) for c in range(z+1) if (a + b + c) != n]
    return req_list


print(restricted_cupoid_dim(1,1,2,3))

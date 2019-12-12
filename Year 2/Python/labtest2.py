import math


class Vector3D(object):
    """Vector with 3 coordinates"""

    def __init__(self, x, y, z):
        """Takes in coordinates for a 3d vector"""
        self.x = x
        self.y = y
        self.z = z
        self.magnitude = 0

    def __add__(self, v2):
        """Adds two 3D vectors
            (x+a, y+b, z+c)
            where x,y,z are from the first vector
            and a,b,c are from the second vector"""

        return self.x + v2.x, self.y + v2.y, self.z + v2.z

    def __sub__(self, v2):
        """Subtracts two 3D vectors
            (x-a, y-b, z-c)
            where x,y,z are from the first vector
            and a,b,c are from the second vector"""
        return self.x - v2.x, self.y - v2.y, self.z - v2.z

    def __mul__(self, n):
        """Multiplies the a 3d vector
        either by an integer in the form
        (x*n, y*n, z*n) or in the form
        (x*a + y*b + z*c) where
        x,y,z are from the first vector
        and a,b,c are from the second vector
        to get the dot product"""

        # Check which type of multiplication needs to be done
        if type(n) == int:
            return self.x * n, self.y * n, self.z * n
        else:
            return self.x * n.x + self.y * n.y + self.z * n.z

    def magnitude(self):
        """Finds the magnitude of a 3d vector
        The magnitude is gotten by:
        sqrt(x^2+y^2+z^2)"""
        self.magnitude = math.sqrt(self.x ** 2 + self.y ** 2 + self.z ** 2)

    def __str__(self):
        return "( {}, {}, {} )".format(self.x, self.y, self.z)


v1 = Vector3D(1, 2, 3)
v2 = Vector3D(5, 5, 5)

print("Printing v1")
print("v1 = ", v1)

print("Printing v2")
print("v2 = ", v2)

v3 = v1 + v2
print("Printing addition")
print("v1 + v2 = ", v3)

v4 = v1 - v2
print("Printing subtraction")
print("v1 - v2 = ", v4)

v5 = v1 * v2
print("Printing dot product")
print("v1 * v2 = ", v5)

print("Printing integer multiplication")
v6 = v1 * 2
print("v1 * 2 = ", v6)

# Not sure why this isn't working
# print("v1 magnitude is ", v1.magnitude())

def make_new_row(old_row):
    """Requires:
           -- list old_row that begins and ends with a 1 and has zero or more
              integers in between (has to have at least [1,1])
           Returns:
           -- list beginning and ending with a 1 and each interior (non 1)
              integer is the sum of the corresponding old_row elements
              For example if old_row = [1,4,6,4,1], then new_row = [1,5,10,10,5,1],
              i.e. 5=1+4, 10=4+6, 10=6+4, 5=4+1 """

    if old_row == []:
        return[1]
    if old_row == [1]:
        return[1,1]

    new_row = [1]
    for i in range(len(old_row)-1):
        new_row.append(old_row[i] + old_row[i+1])
    else:
        new_row.append(1)
    return new_row


def ask_height():
    """Prompts the user to input height of pascal triangle"""
    height = 0
    while height < 2:
        height_str = input("Please enter the desired height of Pascal's triangle: ")
        height = int(height_str)
    return height

#Calls function to ask for height of triangle
height = ask_height()

list_of_heights = []
row = []

#Creates a list of each row of the triangle
for i in range(height-2):
    list_of_heights.append(row)
    row = make_new_row(row)
else:
    list_of_heights.append(row)

print("The list of rows:")
print(list_of_heights)

#Sets i to each part of the list
print("Printing each row of triangle:")
for i in list_of_heights:
    print(i)

#Set each row as a strings
#Index each part of the individual row to spread out elements
#Print to centre of screen to look like triangle
print("Printing the triangle:")
for i in list_of_heights:
    row = ' '.join([str(j) for j in i])
    print(row.center(100))

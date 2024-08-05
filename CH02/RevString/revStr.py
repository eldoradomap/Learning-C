my_string = "This is my string that im reversing"
my_string = list(my_string)
my_reversed_string = []
i = -1

while len(my_reversed_string) != len(my_string):
    my_reversed_string.append(my_string[i])
    i-=1

print(''.join(my_reversed_string))

# make 2 lists, one for the rev string and one for the regular string
# define i as the last item in the list
# while the length of the reversed string is not equal to the length of the regular string append the ith element of the regular string to rev string
# subtract 1 from i
# join the list and output it
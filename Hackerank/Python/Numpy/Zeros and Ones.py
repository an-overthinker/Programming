import numpy
first_line=tuple(map(int, input().lstrip().rstrip().split()))
print(numpy.zeros(first_line,dtype='int'),numpy.ones(first_line,dtype='int'),sep='\n')
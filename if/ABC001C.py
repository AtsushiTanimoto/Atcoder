from bisect import *
deg,dis = map(int,input().split())
data1 = ("N","NNE","NE","ENE","E","ESE","SE","SSE","S","SSW","SW","WSW","W","WNW","NW","NNW","N")
data2 = (2,15,33,54,79,107,138,171,207,244,284,326)
level = bisect_left(data2,round(1e-8+dis/6))
direc = data1[int((deg+112.5)/225)] if 0<level else "C"
print(direc,level)
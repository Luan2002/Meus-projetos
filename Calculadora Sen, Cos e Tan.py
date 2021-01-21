import  math
n = float(input("Digite quantos graus você deseja:"))
sen = math.sin(math.radians(n))
cos = math.cos(math.radians(n))
tan = math.tan(math.radians(n))
print("O seno de {} é: {:.1f}".format(n , sen ))
print("O coseno de {} é: {:.1f}".format(n, cos))
print('A tangente de {} é: {:.1f}'.format(n , tan))


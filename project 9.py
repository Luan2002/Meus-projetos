p = float(input('Digite o preço do produto: '))
d = float(input('Digite a porcentagem do desconto: '))
s = p - (p * d/100)
print('O preço do produto com desconto é {}'.format(s))
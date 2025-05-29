for numero in range(5):
    print(numero, numero*'hola mundo ')

buscar = 4
for numero in range(5):
    print(numero)
    if numero == buscar:
        print("encontrado", buscar)
        break
else:
    print("No encontré el número :(")

for char in "Alaska":
    print(char)
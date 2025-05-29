def suma(*numeros):
    resultado = 0
    for numero in numeros:
        resultado += numero
    print(resultado)

suma(2,5,7)
suma(4,2)
suma(1,2,3,4,5,6,7,8,9,10)
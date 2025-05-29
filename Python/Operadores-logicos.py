# and,or,not

gas = False
encendido = True
edad = 18

if not gas and encendido and edad > 17:
    print("Puedes avanzar")

if (gas and encendido) or edad > 17:
    print("Puedes avanzar")

if gas and (encendido or edad > 17):
    print("Puedes avanzar")

#Operadores en python son de cortocircuito (si en un and, el de la izq no se cumple, no se evalua el de la derecha. SI en un or, rl de la izq se cumple, no se checa la derecha)

edad = 25

if 15 <= edad <= 65: #Esto sustituye a: if edad >= 15 and edad <= 65
    print("Puedes entrar a la piscina")
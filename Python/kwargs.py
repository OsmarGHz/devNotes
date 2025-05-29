# def get_products(**datos):
#     print(datos)

def get_products(**datos):
    print(datos["id"], datos["name"])

get_products(id="a",
            name="iphone",
            desc="Esto es un iPhone")
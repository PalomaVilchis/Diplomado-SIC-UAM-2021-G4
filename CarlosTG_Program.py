#Variables generales
edad = input("Cual es tu edad\n")
total_dias = 90 * 365
total_semanas = 90 *52
total_meses = 90 * 12
#Variables del usario
user_dias =  total_dias - (int (edad) * 365)
user_semanas = total_semanas - int (edad) * 52
user_meses = total_meses - int (edad) * 12
#Datos a imprimir
print(f"te quedan {user_dias} dias, {user_semanas} semanas y {user_meses} meses por vivir")
print("Considerando que vas a vivir hasta los 90")
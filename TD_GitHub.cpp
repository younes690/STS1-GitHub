//Fonctions réalisées par l'étudiant 1 :
def estMajeur(age):
    return age >= 18


def exposant(nombre, exp):
    result = 1
    for _ in range(abs(exp)):
        result *= nombre
    return result if exp >= 0 else 1 / result


def TVA(prix):
    taux = 0.196 if prix >= 1000 else 0.055
    return prix * (1 + taux)


def plusGrand(a, b, c):
    return max(a, b, c)


# Modifications demandées

def estPair(nombre):
    return nombre % 2 == 0 or nombre % 7 == 0  # Ajout de la divisibilité par 7


def reduction(prix, tva):
    return prix * (1 + tva)  # TVA passée en paramètre


def sommeNombre(liste, nombre):
    return sum(liste) + nombre  # Ajout du nombre passé en paramètre










//Fonctions réalisées par l'étudiant 2 :










//Fonctions réalisées par l'étudiant 3 :

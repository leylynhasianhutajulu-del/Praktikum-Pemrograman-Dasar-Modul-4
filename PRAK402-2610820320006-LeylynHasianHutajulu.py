# Input: batas maksimal. Tekan Enter pada baris kosong untuk berhenti.
while True:
    try:
        baris = input()
    except EOFError:
        break

    if baris.strip() == "":
        break

    n = int(baris)

    ganjil = []
    for i in range(1, n + 1, 2):
        ganjil.append(str(i))
    print(" ".join(ganjil))

    if n % 2 == 0:
        awal = n
    else:
        awal = n - 1

    genap = []
    for i in range(awal, 1, -2):
        genap.append(str(i))
    print(" ".join(genap))
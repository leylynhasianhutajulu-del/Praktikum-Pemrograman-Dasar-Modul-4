# Input: angka pertama dan angka kedua (contoh: 3 7). Tekan Enter pada baris kosong untuk berhenti.
while True:
    try:
        baris = input()
    except EOFError:
        break

    if baris.strip() == "":
        break

    data = baris.split()
    while len(data) < 2:
        try:
            data += input().split()
        except EOFError:
            break

    a = int(data[0])
    b = int(data[1])

    if a <= b:
        langkah = 1
    else:
        langkah = -1

    pasangan = []
    for x in range(a, b + langkah, langkah):
        y = a + b - x
        pasangan.append(str(x) + " " + str(y))

    print(" - ".join(pasangan))
# Input: n dan kelipatan (contoh: 3 2). Tekan Enter pada baris kosong untuk berhenti.
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

    n = int(data[0])
    k = int(data[1])

    total = 0
    for i in range(1, n + 1):
        suku = []
        jumlah = 0
        for j in range(i, 0, -1):
            suku.append("(" + str(j) + " * " + str(k) + ")")
            jumlah += j * k
        print(" + ".join(suku) + " = " + str(jumlah))
        total += jumlah

    print(total)
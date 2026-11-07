# Input: kelipatan dan simbol (contoh: 6 *). Tekan Enter pada baris kosong untuk berhenti.
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

    kelipatan = int(data[0])
    simbol = data[1]

    hasil = []
    for i in range(1, 51):
        if i % kelipatan == 0:
            hasil.append(simbol)
        else:
            hasil.append(str(i))

    print(" ".join(hasil))
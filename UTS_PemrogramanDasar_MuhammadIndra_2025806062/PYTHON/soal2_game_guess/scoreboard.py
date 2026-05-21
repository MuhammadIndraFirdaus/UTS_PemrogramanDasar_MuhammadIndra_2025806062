import json, os

FILE = "scores.json"

def muat_skor():
    if not os.path.exists(FILE):
        return {}
    with open(FILE) as f:
        isi = f.read().strip()
        if not isi:
            return {}
        return json.loads(isi)

def simpan_skor(data):
    with open(FILE, "w") as f:
        json.dump(data, f, indent=2)

def perbarui_skor(nama, tambahan):
    data = muat_skor()
    data[nama] = data.get(nama, 0) + tambahan
    simpan_skor(data)
    return data[nama]

def tampilkan_top5():
    data = muat_skor()
    print("\n=== TOP 5 SCORE ===")
    for i, (nama, skor) in enumerate(
            sorted(data.items(), key=lambda x: x[1], reverse=True)[:5], 1):
        print(f"{i}. {nama} – {skor} pts")
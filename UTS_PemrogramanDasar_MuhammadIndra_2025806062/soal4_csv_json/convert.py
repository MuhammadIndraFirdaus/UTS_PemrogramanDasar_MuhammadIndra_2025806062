# Python/soal4_csv_to_json/convert.py
import csv, json

def baca_csv(path):
    with open(path, newline='', encoding='utf-8') as f:
        reader = csv.DictReader(f)
        return list(reader)

def tampilkan_rapi(data):
    print(f"\n{'Nama':<20} {'NIM':<12} {'NilaiAkhir':>10} {'Mutu':>5}")
    print("-" * 52)
    total = 0
    for m in data:
        print(f"{m['Nama']:<20} {m['NIM']:<12} {float(m['NilaiAkhir']):>10.2f} {m['Mutu']:>5}")
        total += float(m['NilaiAkhir'])
    print("-" * 52)
    print(f"Rata-rata nilai akhir: {total/len(data):.2f}")

def simpan_json(data, path):
    hasil = []
    for m in data:
        hasil.append({
            "nama": m["Nama"],
            "nim": m["NIM"],
            "nilai_akhir": float(m["NilaiAkhir"]),
            "mutu": m["Mutu"]
        })
    with open(path, "w") as f:
        json.dump(hasil, f, indent=2, ensure_ascii=False)
    print(f"\nFile JSON disimpan ke {path}")

if __name__ == "__main__":
    data = baca_csv("data_mahasiswa.csv")
    tampilkan_rapi(data)
    simpan_json(data, "data_mahasiswa.json")
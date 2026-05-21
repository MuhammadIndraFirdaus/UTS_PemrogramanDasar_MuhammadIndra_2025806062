# Python/soal3_text_analyzer/analyzer.py
from collections import Counter
from utils import baca_file, bersihkan_kata, hitung_vokal_konsonan, grafik_ascii

def analisis(input_path, output_path):
    teks  = baca_file(input_path)
    baris = teks.splitlines()
    kata  = bersihkan_kata(teks)
    counter = Counter(kata)
    vokal, konsonan = hitung_vokal_konsonan(teks)

    laporan = f"""=== LAPORAN ANALISIS TEKS ===
Jumlah baris : {len(baris)}
Jumlah kata  : {len(kata)}
Huruf vokal  : {vokal}
Huruf konsonan: {konsonan}

=== 5 KATA TERBANYAK ===
{grafik_ascii(counter)}
"""
    print(laporan)
    with open(output_path, "w", encoding="utf-8") as f:
        f.write(laporan)
    print(f"Laporan disimpan ke {output_path}")
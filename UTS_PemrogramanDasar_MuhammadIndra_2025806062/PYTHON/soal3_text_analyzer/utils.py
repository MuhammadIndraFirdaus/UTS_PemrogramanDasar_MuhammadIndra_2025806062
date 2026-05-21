# Python/soal3_text_analyzer/utils.py
import re

def baca_file(path):
    with open(path, encoding="utf-8") as f:
        return f.read()

def bersihkan_kata(teks):
    return re.findall(r'\b[a-zA-Z]+\b', teks.lower())

def hitung_vokal_konsonan(teks):
    vokal     = sum(1 for c in teks.lower() if c in "aiueo")
    konsonan  = sum(1 for c in teks.lower() if c.isalpha() and c not in "aiueo")
    return vokal, konsonan

def grafik_ascii(counter, top_n=5):
    baris = []
    for kata, jumlah in counter.most_common(top_n):
        bar = "#" * jumlah
        baris.append(f"{kata:<15} {bar}  ({jumlah})")
    return "\n".join(baris)
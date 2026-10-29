#include <iostream>
#include <string>

using namespace std;

int main() {
    string seq = "ATGCGATCGATCGATCGAATTCG";
    int gc_count = 0;

    for (char base : seq) {
        for (char base : seq) {
    if (base != 'A' && base != 'T' && base != 'G' && base != 'C' && base != 'N') {
        cerr << "Warning: Non-canonical DNA character detected: " << base << endl;
        continue;
      
}
        if (base == 'G' || base == 'C') {
            gc_count++;
        }
    }

    double gc_percentage = (static_cast<double>(gc_count) / seq.length()) * 100.0;
    cout << "Sequence: " << seq << endl;
    cout << "GC Content: " << gc_percentage << "%" << endl;
    cout << "Total Sequence Length: " << seq.length() << " bp" << endl;

  return 0;
}

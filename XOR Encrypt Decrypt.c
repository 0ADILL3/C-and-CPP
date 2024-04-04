#include <stdio.h>
#include <string.h>

// Fungsi untuk melakukan operasi XOR pada teks dengan kunci
void xorEncryptDecrypt(char *text, char key)
{
    size_t len = strlen(text);

    for (size_t i = 0; i < len; ++i)
    {
        text[i] = text[i] ^ key;
    }
}

int main()
{
    char plaintext[] = "Adill Deswal Agifirmansyah";
    char key = 'X';

    // Menampilkan teks sebelum enkripsi
    printf("Plaintext: %s\n\n", plaintext);

    // Melakukan enkripsi
    xorEncryptDecrypt(plaintext, key);

    // Menampilkan teks setelah enkripsi
    printf("Ciphertext: %s\n\n", plaintext);

    // Melakukan dekripsi
    xorEncryptDecrypt(plaintext, key);

    // Menampilkan teks setelah dekripsi
    printf("Decrypted Text: %s\n\n", plaintext);

    return 0;
}

#include <stdio.h>

void encryptCaesarCipher(char *text, int shift)
{
    while (*text != '\0')
    {
        if (*text >= 'a' && *text <= 'z')
        {
            *text = *text + shift;
        } else if (*text >= 'A' && *text <= 'Z')
        {
            *text = *text + shift;
        }
        text++;
    }
}

int main() {
    char plaintext[] = "Hello, World!";
    int shift = 3;

    // Menampilkan teks sebelum enkripsi
    printf("Plaintext: %s\n", plaintext);

    // Melakukan enkripsi
    encryptCaesarCipher(plaintext, shift);

    // Menampilkan teks setelah enkripsi
    printf("Ciphertext: %s\n", plaintext);

    return 0;
}

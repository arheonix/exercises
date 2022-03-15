# Caesar Cipher

import pyperclip

# String to encrypt/decrypt
message = 'This is my secret message.'

# Key
key = 13

# Set operating mode: encrypt or decrypt
mode = 'encrypt'  # set 'encrypt' or 'decrypt'

# All characters that can be encrypted
SYMBOLS = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabdcefghijklmnopqrstuvwxyz1234567890 !?.'

# Variable storing the encrypted/decrypted form of the message
translated = ''

for symbol in message:
    # Note: only characters included in the SYMBOLS string can be encrypted/decrypted
    if symbol in SYMBOLS:
        symbolIndex = SYMBOLS.find(symbol)

        # Perform encryption/decryption
        if mode == 'encrypt':
            translatedIndex = symbolIndex + key
        elif mode == 'decrypt':
            translatedIndex = symbolIndex - key

        # Handle "wrapping" if necessary
        if translatedIndex >= len(SYMBOLS):
            translatedIndex = translatedIndex - len(SYMBOLS)
        elif translatedIndex < 0:
            translatedIndex = translatedIndex + len(SYMBOLS)

        translated = translated + SYMBOLS[translatedIndex]
    else:
        # Join symbol without encryption/decryption
        translated = translated + symbol

# Converted string output
print(translated)
pyperclip.copy(translated)

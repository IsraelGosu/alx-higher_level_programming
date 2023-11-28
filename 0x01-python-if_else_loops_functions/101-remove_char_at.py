#!/usr/bin/python3
# Always doing hard things

def remove_char_at(str, n):
    """this Create a copy of the string without the character at position n."""
    if n < 0:
        return (str)
    return (str[:n] + str[n+1:])

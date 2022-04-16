# TODO: Add detailed note about the example

def caesar_function(text, rot):

    alphabet = 'abcdefghijklmnopqrstuvwxyz'
    ctext = ''
    rot +=1

    for t in range(0, len(text)):
        position = alphabet.find(text[t])
        if position < 0:
            ctext = ctext + text[t]
        else:
            position += rot
            ctext = ctext + alphabet[position % len(alphabet)]

    return ctext


sample_text_file = "peter piper picked a peck of pickled peppers. pid peter piper pick a peck of pickled peppers"

print(caesar_function(sample_text_file, 2))


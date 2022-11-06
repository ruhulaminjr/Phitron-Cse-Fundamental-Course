""" 4.  Write a program to find anagrams in a given list of words. Two words are called anagrams if one word can be formed by rearranging letters of another. For example ‘eat’, ‘ate’ and ‘tea’ are anagrams.
>> > anagrams(['eat', 'ate', 'done', 'tea', 'soup', 'node'])
[['eat', 'ate', 'tea], ['done', 'node'], ['soup']]
 """


def anagrams(words):
    newList = []
    chklist = []
    for word in words:
        chk = ''.join(sorted(word))
        if chk in chklist:
            continue
        chklist.append(chk)
        newWords = []
        for w in words:
            chkW = ''.join(sorted(w))
            if chk == chkW:
                newWords.append(w)
        newList.append(newWords)
    return newList


print(anagrams(['eat', 'ate', 'done', 'tea', 'soup', 'node']))

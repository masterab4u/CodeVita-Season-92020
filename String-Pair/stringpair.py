import itertools

num2words1 = {0:'zero',1: 'One', 2: 'Two', 3: 'Three', 4: 'Four', 5: 'Five', 6: 'Six', 7: 'Seven', 8: 'Eight', 9: 'Nine', 10: 'Ten',11: 'Eleven', 12: 'Twelve', 13: 'Thirteen', 14: 'Fourteen', 15: 'Fifteen', 16: 'Sixteen', 17: 'Seventeen', 18: 'Eighteen', 19: 'Nineteen'}
num2words2 = ['Twenty', 'Thirty', 'Forty', 'Fifty', 'Sixty', 'Seventy', 'Eighty', 'Ninety']

def number(Number):
  
  if 0 <= Number <= 19:
    return num2words1[Number]
  
  elif 20 <= Number <= 99:
    tens, remainder = divmod(Number, 10)
    return num2words2[tens - 2] + '-' + num2words1[remainder] if remainder else num2words2[tens - 2]
  
  elif Number==100:
    return "hundred"

def main():
  t = int(input())
  a = list(map(int, input().split()))
  count = 0
  for i in a:
    s= (number(i)).lower()
    vowel = set("aeiou")
  for alphabet in s:
    if alphabet in vowel:
      count = count + 1
  s=0
  for result in itertools.combinations(a, 2):
    if result[0]+result[1]==count:
      s=s+1
    if (s)>100:
      print(str("greater 100"),end="")
    else:
      print(str(number((s)).lower()),end="")

main()
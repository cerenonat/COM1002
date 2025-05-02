def tablo(takimlar,sampiyonluklar):
    print(f'{"Takim Adi":<20}{"Sampiyonluk Sayisi":<20}{"Yildizlar"}')
    for i in range(len(takimlar)):
        takim = takimlar[i]
        sampiyon = sampiyonluklar[i] 
        yildiz = (sampiyon//7) * "*"
        print(f"{takim:<20}{sampiyon:<20}{yildiz:<20}")
        
        
takimlar = []
sampiyonluklar = []

team_count = int(input())

for i in range(team_count):
    team_name = input()
    champs = int(input())
    
    takimlar.append(team_name)
    sampiyonluklar.append(champs)

tablo(takimlar,sampiyonluklar)
    


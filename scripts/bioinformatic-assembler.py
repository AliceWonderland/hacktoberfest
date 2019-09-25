#Alunos: José Eduardo Almeida de Alencar (Computação)
#        Luis Carlos da Silva Filho (Computação)
#        Maria Lúcia  de Sousa Silva (Biologia)

def Assembler(filename):
    """
    Remonta uma sequência genética a partir de um arquivo texto contendo os 
    kdmers em ordem lexicográfica.

    :param k: tamanho da leitura
    :param d: distância entre as leituras

    """
    try:
        kdmers = None
        prefixs = list() #Armazena os prefixos
        sufixs = list() #Armazena os sufixos
        way1 = list() #Numera os prefixos de cada kdmers | way1[0] = 2, significa prefixs[0] tem sufixs[2]
        way2 = list() #Numera os sufixos de cada kdmers
        _f = filename.strip('kdmer.txt').split('d')
        k = int(_f[0])
        d = int(_f[1])

        with open(filename, "r") as file:
            for kds in file:
                kdmers = kds
            kdmers = kdmers.replace('\'', '')
            kdmers = kdmers.replace('\n', '')
            kdmers = kdmers.replace('[', '')
            kdmers = kdmers.replace(']', '')
            kdmers = kdmers.replace(' ', '')
            kdmers = kdmers.split(',')
            
            for i in kdmers: #Divide os kdmers [ABCD|EFGH] => prefixs = [ABC, EFG], sufixs = [BCD, FGH]
                vertice = i.split('|')
                prefixs.append([vertice[0][0:(k-1)], vertice[1][0:(k-1)]])
                sufixs.append([((vertice[0][::-1])[0:k-1])[::-1], ((vertice[1][::-1])[0:k-1])[::-1]])
                    
            for i in prefixs:
                try:
                    way1.append(sufixs.index(i))
                except ValueError:
                    way1.append(None)
            for i in sufixs:
                try:
                    way2.append(prefixs.index(i))
                except ValueError:
                    way2.append(None)
        print("Checkpoint")
        with open("output-k"+str(k)+"d"+str(d)+"mer.fasta", "w") as file:
            #file.write(">k="+str(k)+"d="+str(d)+"\n")

            start = way1.index(None) #Encontra o inicio
            tam = len(sufixs[start][0])-1 #Tamanho dos prefixos e sufixos
            file.write(prefixs[start][0])
            file.write(sufixs[start][0][tam])
            
            i = way2[start]
            while i != None:
                file.write(sufixs[i][0][tam])
                i = way2[i]

            h = 0
            while h <= d:
                i = way2.index(i)
                h += 1

            file.write(prefixs[i][1])
            while i != None:
                file.write(sufixs[i][1][tam])
                i = way2[i]
            print("Arquivo de saída "+"output-k"+str(k)+"d"+str(d)+"mer.fasta"+ " criado com sucesso!")
            return
    except Exception:
        print("Não foi possível criar o arquivo de saída!")
        print("Verifique se o nome do arquivo está correto.")
    
            
if __name__ == "__main__":
    filename = input("Digite o nome do arquivo de entrada: (Exemplo: k5d2mer.txt)\n")
    Assembler(filename)

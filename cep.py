import requests


class rede:

    def __init__(self,cep:str):
        self.cep = cep
        
        
    def TratarCep(self,cep):

        if cep.count('-')>0:
            cepnew = cep.replace('-','')
            print(cep)
            
        if cep.count('.')>0:
            cepnew = cep.replace('.','')
        
        if  cep.count(',')>0:
            cepnew = cep.replace(',','')
         
        return cepnew 
         
    
    def requisaoApi(self):
        print(self.TratarCep(self.cep))
        self.url = 'https://viacep.com.br/ws/'+self.cep+'/json/'
        requisao = requests.get(self.url)
        print(self.cep)
        print(requisao)
        print(requisao.json())
     

        


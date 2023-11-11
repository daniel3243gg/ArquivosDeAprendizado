import os
import time
import json
from random import random
from datetime import datetime
from sys import argv
import csv



import requests
import pandas as pd
import seaborn as sns


URL = 'https://www2.cetip.com.br/ConsultarTaxaDi/ConsultarTaxaDICetip.aspx'
for _ in range(5):
    time.sleep(2)
    data_hr = datetime.now()
    data = datetime.strftime(data_hr, '%Y/%m/%d')
    hora = datetime.strftime(data_hr, '%H:%M:%S')
    try:
        extracao = requests.get(URL)
        extracao.raise_for_status()
    except requests.HTTPError as exc:
        print(f'SITE NAO LOCALIZADO')
        extracao = None 
    except exceptions as exc:
        print(exc)
    else:
        dado = json.loads(extracao.text)
        cdi = float(dado['taxa'].replace(',', '.')) + random() * random()
        if not os.path.exists(f'./{argv[1]}.csv'):
            with open(file=f'./{argv[1]}.csv', mode='w', encoding='utf8') as fp:
                fp.write('DATA,HORA,TAXA\n')
        with open(file=f'./{argv[1]}.csv', mode='a', encoding='utf8') as fc:
            fc.write(f'{data},{hora},{cdi}\n')
df = pd.read_csv(f'./{argv[1]}.csv')
grafico = sns.lineplot(x=df['HORA'], y=df['TAXA'])
_ = grafico.set_xticklabels(labels=df['HORA'], rotation=90)
grafico.get_figure().savefig(f"{argv[1]}.png")
print('sucesso')
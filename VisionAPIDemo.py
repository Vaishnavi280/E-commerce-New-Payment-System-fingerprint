import os, io
from google.cloud import vision_v1
from google.cloud.vision_v1 import types 
import pandas as pd
import re
os.environ['GOOGLE_APPLICATION_CREDENTIALS'] = r'ServiceAccountToken.json'

client = vision_v1.ImageAnnotatorClient()

FILE_NAME = 'payee.png'
FOLDER_PATH = r'C:\Users\Yash\Desktop\Django\ecommerce\static\images'

with io.open(os.path.join(FOLDER_PATH, FILE_NAME), 'rb') as image_file:
    content = image_file.read()

image = vision_v1.types.Image(content = content)
response = client.text_detection(image = image)
texts = response.text_annotations
print(texts)
cardNum = ""
date = []
count = 1
regex1 = r"\d{4}"
regex2 = r"^(0[1-9]|1[0-2])/([0-9]{2})$"
for text in texts:
    if(count == 1):
        count = count - 1
        continue
    if(re.match(regex1, text.description)):
        print("11111111111", text.description)
        cardNum += text.description
    if(re.match(regex2, text.description)):
        date.append(text.description)
    print("--------------", text.description)
date.sort()
print("CARDNUMBER:", cardNum)
print("DATE:", date)

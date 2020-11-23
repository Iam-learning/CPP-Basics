#first install phonenumbers liberary

import phonenumbers

from phonenumbers import carrier

from phonenumbers import geocoder

a = input ("Enter your phone Number:")   #enter phone number with country code

phone_number = phonenumbers.parse(a)

print(geocoder.description_for_number(phone_number,"en"))

print(carrier.name_for_number(phone_number,"en"))


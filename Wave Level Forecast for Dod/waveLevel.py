from email.base64mime import header_length
from posixpath import splitext
from urllib.request import Request, urlopen
from bs4 import BeautifulSoup
import requests
url_to_scrape = 'https://magicseaweed.com/Betset-Surf-Report/4738/'
req = Request('https://magicseaweed.com/Betset-Surf-Report/4738/', headers={'User-Agent': 'Mozilla/5.0'})
request_page = urlopen(req)
page_html = request_page.read()
request_page.close()

html_soup = BeautifulSoup(page_html, 'html.parser')
firstDetails = html_soup.find('td',{'class': ' ac va-middle info'})
details = firstDetails.find('td',{'class': 'size16 ng-binding'})
something = details.find('div',{'class': ''})

#detailsForTime = html_soup.find('tr',{'data-timestamp': '1660100400'})

#something = detailsForTime.find('h4', {'class': 'nomargin font-sans-serif heavy'})
prettySomething = something.prettify()


#46 is 2 in the list
veryPrettySomething = [*prettySomething]
actualNumber = veryPrettySomething[47]
otherActualNumber = veryPrettySomething[45]
print(otherActualNumber+'.'+ actualNumber)
#splitText = str(headerText).split(' ')
#print(str(splitText).split("'"))
#for waveHeight in waveHeightDetails:
    #height = waveHeight.find_all('', class_ = 'nomargin font-sans-serif heavy')
    
    #print(height)
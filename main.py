from urllib.request import Request, urlopen
from bs4 import BeautifulSoup
import requests
import re

url_to_scrape = 'http://4surfers.co.il/#/beachArea?beachAreaId=10'
req = Request('http://4surfers.co.il/#/beachArea?beachAreaId=10', headers={'User-Agent': 'Mozilla/5.0'})
request_page = urlopen(req)
page_html = request_page.read()
request_page.close()

soup = BeautifulSoup(page_html, "html.parser")
html_soup = BeautifulSoup(page_html, 'html.parser')
soup.get_text()
# You are given a string str that contains some html text. In this html text is an image url that is in the tag . You need to extract the url. The image url is of the format .jpg
import regex
str = '''<html><head></head><body><img src='www.geeksforgeeks.org/sample/62.jpg'</body></html>'''

# reg = r'/[=]*[a-z]/[a-z]/[\d].(jpg){1}'
reg = r"www.+jpg"
print(regex.findall(reg,str))


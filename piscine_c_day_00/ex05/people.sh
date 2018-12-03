ldapsearch -LLL -Q "(uid=z*)" | grep "cn:" | sed "s/cn: //" | sort -r -b -f

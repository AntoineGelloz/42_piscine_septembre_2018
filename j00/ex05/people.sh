ldapsearch -x 'uid=z*' cn | grep '^cn:' | cut -c5- | sort -rf

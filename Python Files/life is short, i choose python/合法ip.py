import ipaddress
while True:
    try:
        assert(ipaddress.ip_address(input()))
        print("YES")
    except Exception as e:
        if isinstance(e, EOFError):
            break
        else:
            print("NO")
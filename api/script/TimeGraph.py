import datetime

def compute(data):
    res = {}
    res_list = []
    for epoch in data:
        month = datetime.datetime.fromtimestamp(epoch/1000).strftime('%Y-%m')
        res[month] = res.get(month, 0) + 1

    sort = dict(sorted(res.items()))
    for k,v in sort.items():
        res_list.append({'name': k, 'count': v})

    return res_list
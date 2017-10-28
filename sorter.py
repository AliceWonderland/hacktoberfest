import re
import operator
import collections

with open('CONTRIBUTORS.md', encoding="utf8") as f:
    c = 0
    def cmp(name):
        name = name[0]
        if name[0] == "Í":
            return ("i" + name[1:]).lower()
        return name.lower()
    pattern = re.compile(r'\s*####\s*Name\s*.?\s*\[(?P<name>[\w\W]+)\]')
    names = []
    lines = collections.defaultdict(list)
    for line in f:
        m = pattern.match(line)
        if m:
            c+=1
            names.append(m.groups('name')+ (c,))
            lines[c].append(line)
        else:
            lines[c].append(line)
    names = sorted(names, key=cmp)
    s = None
    file_name = 'CONTRIBUTORS/CONTRIBUTORS_%s.md'
    f = None
    done = {}
    for name, idx in names:
        if s != name.strip()[0].upper():
            s = name.strip()[0].upper()
            if f is not None:
                f.close()
            if s == "Í":
                s = "I"
            f = open(file_name % s, 'w+', encoding="utf8")
        if name not in done:
            f.writelines(lines[idx])
            done[name] = 1
    print(len(done))
    print(f"{c} names.")
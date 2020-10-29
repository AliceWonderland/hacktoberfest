def binarytree(r):
    return[r,[],[]]
def insertleft(root,newbranch):
    t=root.pop(1)
    if len(t)>1:
        root.insert(1,[newbranch,t,[]])
    else:
        root.insert(1,[newbranch,[],[]])
    return root
def insertright(root,newbranch):
    t=root.pop(2)
    if len(t)>1:
        root.insert(2,[newbranch,[],t])
    else:
        root.insert(2,[newbranch,[],[]])
    return root
def getroot(root,new):
    root[0]=new
def setnew(root):
    return root[0]
def getleft(root):
    return root[1]
def getright(root):
    return root[2]

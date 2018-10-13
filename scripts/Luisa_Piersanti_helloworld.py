from string import Template
tmpl = Template("Hello $name!")
tmpl.substitute(name='world')

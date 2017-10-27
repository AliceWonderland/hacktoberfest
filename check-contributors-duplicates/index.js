// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Julius Breckel
// GITHUB: https://github.com/jbreckel

const { isEmpty } = require('lodash')
const { readFile, writeFile } = require('fs-extra')

readFile('../CONTRIBUTORS.md', 'utf-8').then((contributers) => {
  const uniq = []
  contributers.split('\n\n').map(contributer =>
    contributer.split('\n').map(
      line =>
        line.replace(/^\s+/, '').replace('- ', '').replace(/^#+ /, '').split(': ')
    ).reduce(
      (prev, line) => {
        if (!line[1]) return prev
        return Object.assign({}, prev, { [line[0]]: line[1]})
      }, {}
    )
  )
    .filter(e => !isEmpty(e))
    .reduce(
      (prev, contrib) => {
        if(contrib && prev[JSON.stringify(contrib)]) {
          return prev
        }
        uniq.push(contrib)
        return Object.assign({}, prev, { [JSON.stringify(contrib)]: true })
      }, {}
    )
  const newFile = uniq.map(({ Name, ...rest }) => {
    return `#### Name: ${Name}
${Object.keys(rest).map(key => `- ${key}: ${rest[key]}`).join('\n')}
`
  }).join('\n')
  writeFile('../CONTRIBUTORS.md', newFile, 'utf-8').catch(reason => console.log(reason))
})

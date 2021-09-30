//apoorvcodes 

package main

import (
    "fmt"
    "net/http"
)

func main() {
    http.HandleFunc("/", HelloWorld)
    http.ListenAndServe(":8080", nil)
}

func HelloWorld(w http.ResponseWriter, r *http.Request) {
    fmt.Fprintf(w, "Hello World, %s!", r.URL.Path[1:])
}

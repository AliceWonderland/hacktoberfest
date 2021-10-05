import { useState, useEffect } from "react";

function useFetch(url) {
  const [data, setData] = useState(null);
  const [isPending, setIsPending] = useState(true);
  const [error, seterror] = useState(null);

  useEffect(() => {
    const abortCont = new AbortController();

    fetch(url, { signal: abortCont.signal })
      .then((res) => {
        if (!res.ok) {
          throw Error("Uh, OH ! Could not fetch the data for that resource!");
        }
        return res.json();
      })
      .then((data) => {
        setData(data);
        setIsPending(false);
        seterror(null);
      })
      .catch((err) => {
        if (err.name === "Abort Error") {
          console.log("Fetch Aborted!");
        } else {
          setIsPending(false);
          seterror(err.message);
        }
      });

    return () => abortCont.abort();
  }, [url]);

  return { data, isPending, error };
}

export default useFetch;

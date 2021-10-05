import React from "react";
import { Link } from "react-router-dom";

function NotFound() {
  return (
    <div className="not-found">
    <h1>404 Not Found</h1>
      <h2>Sorry</h2>
      <p>That page cannot be found </p>
      <Link to="/">Back to the home page..</Link>
    </div>
  );
}

export default NotFound;

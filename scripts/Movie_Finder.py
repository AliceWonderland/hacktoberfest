import requests
import json

def get_movie_data(movie_name, api_key="thewdb"):  # public OMDb API key for demo
    """
    Fetch movie information from OMDb API.
    """
    base_url = "http://www.omdbapi.com/"
    params = {
        "t": movie_name,
        "apikey": api_key
    }

    try:
        response = requests.get(base_url, params=params)
        response.raise_for_status()  # check for request errors
        data = response.json()

        if data["Response"] == "False":
            print(f"❌ Movie not found: {movie_name}")
            return None

        # Display movie info
        print("\n🎬 Movie Information:")
        print(f"Title: {data['Title']}")
        print(f"Year: {data['Year']}")
        print(f"Genre: {data['Genre']}")
        print(f"Director: {data['Director']}")
        print(f"IMDb Rating: {data['imdbRating']}")
        print(f"Plot: {data['Plot']}\n")

        # Save movie info locally
        with open(f"{movie_name}.txt", "w", encoding="utf-8") as file:
            json.dump(data, file, indent=4)
            print(f"✅ Movie details saved as {movie_name}.txt")

        return data

    except requests.exceptions.RequestException as e:
        print("⚠️ Network error:", e)
    except json.JSONDecodeError:
        print("⚠️ Error decoding JSON data.")


if __name__ == "__main__":
    print("🎥 Welcome to Movie Info Finder!")
    movie = input("Enter movie name: ").strip()
    get_movie_data(movie)

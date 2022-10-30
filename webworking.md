# How does a browser works ?

#### Components that make up a browser:

Figure 1.1

##### Explanation :

Bindings refers to different system calls
Rendering includes parsing, layout, painting etc, are discussed below.
JavaScript engines are referred to as virtual machines. It's basically all of the same thing. JavaScript engines are processed virtual machines, because they let you execute computer programs in a platform independent environment

## Basic Rendering Engine Flow:

![Components](https://i.postimg.cc/LsxZV9bM/Untitled-Diagram-drawio-6.png)
Figure 1.2

- HMTL is forgiving in nature, parsing isn’t straight forward, can be halted, will do speculative parsing. Once we used to do strict parsing XHTML strict and we used to get parsing error, hence JS HTML have forgiveness by default.
  - One of the nature we have is that even if we dont close any tag, closing tags would be automatically attached to the document

## Parsing

The Below diagram shows Parsing flow :

![Components](https://i.postimg.cc/wvPySWzf/Untitled-Diagram-drawio-8.png)
Figure 1.3

- Script Exection is responsible to run our js scripts, these <script>, <link> and <style> could halt the execution as it can alter the document and hence update the document and reconstruct tree.
- Tokeniser is responsible to pick up each tag and attach closing if not present, tokens for each tag would be created.
- Then parse tree is created according to the tags like html, head,body, and nested tags. This parse tree will be taken and converted into DOM tree.
- Render tree is generated while DOM tree is constructed. Elements in the render tree are called render objects, and it helps in displaying as per the elements order.

## Parsing a HTML Document, CSS

- CSSOM(CSS Object Model) is responsible to construct CSS tree while parsing and represented at Figure 1.4.
- DOM + CSS construct render tree, i.e combines the two object models, style resolution and hence this helps in the actual representation that what will show on screen.

![Components](https://i.postimg.cc/BvSKDLNg/Parsing-2.png)
Figure 1.4

## Layout in Browser Working

- It usually happens while interacting with website.
- It mostly calculates positon and size, and able to compute in one pass
- Its a recursive process, it keeps on traversing render tree for any change in nodes position/size or any change in children, traversal of its children.
- Follows Dirty bit system in layouts which says a system makes sure that browsers dont need to do the full layout on every interaction, only changed dom elements would be rendered again
- However, when we apply some font change and other style that affects the whole document that time it works in the incremental layout and batching is followed.

## Painting

- It takes information from render tree and gives us the visual output.
- It produces bitmaps from each each layer and bitmap is uploaded to the GPU as a texture
- It creates layers from rendered objects, positions for the elements like image, video, transparency etc to be applied paint accordingly
- Composites the texture into a final image to render to the screen
- Follows dirty bit system, incremental painting
- In a nutshell render tree is traversed and paint() method is used for the visual o/p
- Order of painting: background-color, background image, border

## Concluding how browser works

![Components](https://i.postimg.cc/bwHnsH0r/Untitled-Diagram-drawio-9.png)

We already covered about parsing, nw calls. Below we will discuss about few others already in short :

- Browser Engine: It is a core component of every web browser. The browser engine functions as an intermediary or a bridge between the user interface and the rendering engine. It queries and handles the rendering engine as per the inputs received from the user interface.

- Rendering Engine: As the name suggests, this component is responsible for rendering a specific web page requested by the user on their screen. It interprets HTML and XML documents along with images that are styled or formatted using CSS, and a final layout is generated, which is displayed on the user interface.

- Networking: This component is responsible for managing network calls using standard protocols like HTTP or FTP. It also looks after security issues associated with internet communication.

- JavaScript Interpreter: As the name suggests, it is responsible for parsing and executing the JavaScript code embedded in a website. Once the interpreted results are generated, they are forwarded to the rendering engine for displaying on the user interface.
- UI Backend: This component uses the user interface methods of the underlying operating system. It is mainly used for drawing basic widgets (windows and combo boxes).

- Data Storage/Persistence: It is a persistent layer. A web browser needs to store various types of data locally, for example, cookies. As a result, browsers must be compatible with data storage mechanisms such as WebSQL, IndexedDB, FileSystem, etc

###### Role of Rendering Engine from the above diagram:

Once a user requests a particular document, the rendering engine starts fetching the content of the requested document. This is done via the networking layer. The rendering engine starts receiving the content of that specific document in chunks of 8 KBs from the networking layer. After this, the basic flow of the rendering engine begins.

The four basic steps include:

- The requested HTML page is parsed in chunks, including the external CSS files and in style elements, by the rendering engine. The HTML elements are then converted into DOM nodes to form a “content tree” or “DOM tree.”
- Simultaneously, the browser also creates a render tree. This tree includes both the styling information as well as the visual instructions that define the order in which the elements will be displayed. The render tree ensures that the content is displayed in the desired order.
- Further, the render tree goes through the layout process. When a render tree is created, the position or size values are not assigned. The entire process of calculating values for evaluating the desired position is called a layout process. In this process, every node is assigned the exact coordinates. This ensures that every node appears at an accurate position on the screen.
- The final step is to paint the screen, wherein the render tree is traversed, and the renderer’s paint() method is invoked, which paints each node on the screen using the UI backend layer.
  Every browser has its own unique rendering engine. So naturally, every browser has its own way of interpreting web pages on a user’s screen. Here’s where a challenge arises for web developers regarding the cross-browser compatibility of their website.

[Link to study more about browser working from html5rocks](https://www.html5rocks.com/en/tutorials/internals/howbrowserswork/#Layout).

const wordTextArea=document.getElementById('word');
    const countBtn=document.querySelector('.count-btn');
    const wordCont=document.getElementById('w-cont');
    const chCont=document.getElementById('ch-cont');
    const charbtn=document.getElementById('char-btn');

        // let contchar= ()=>{
        //     let charpara=wordTextArea.value;
        //     chCont.innerHTML=charpara.length;
        // };
        // charbtn.addEventListener('click',contchar);
        wordTextArea.addEventListener('input',function(){
            let charpara=wordTextArea.value;
            chCont.innerHTML=charpara.length;
        });
        
        wordTextArea.addEventListener('input',function(){
            let wordpara=wordTextArea.value;// console.log(wordpara);
                    
                    let word=wordpara.trim();   // console.log(word);
                    let wordr=word.replace(/\s+/g, " ");// console.log(wordr);
                    let splitword=wordr.split(" ");
        
                    // console.log(splitword);
        
                    let numberOfWords=splitword.length;
                    if(splitword[0]=="")
                    {
                        numberOfWords=0;
                    }
        
        
                    wordCont.innerHTML=numberOfWords;
        });
        // let contWord= ()=>{
            
        // };

        // countBtn.addEventListener('click',contWord);

        // for copy clipboard
        const copyText=document.getElementById('word');
        const copybtn=document.getElementById('copy');
        const clearbtn=document.getElementById('clear');
        copybtn.addEventListener("click",function(){
            copyText.select();
            document.execCommand("copy");  
            alert("Copied Success...")
        });
        clearbtn.addEventListener("click",function(){
            copyText.select();
            document.execCommand("delete");
        });

        const rbtn=document.getElementById('extraspace');
        rbtn.addEventListener("click",function(){
            let wordpara=copyText.value;
            let word=wordpara.trim();
            let wordr=word.replace(/\s+/g, " ");
            // let splitword=wordr.split(" ");
            // console.log(wordr);
            // copyText.select();
            // document.execCommand("delete");
            // document.getElementById('word').innerHTML=splitword.length;
            document.getElementById('word').value=wordr;
        });
        document.getElementById('upar-btn').addEventListener("click",function(){
            let wordpara=copyText.value;
            document.getElementById('word').value=wordpara.toUpperCase();
        });
        document.getElementById('lower-btn').addEventListener("click",function(){
            let wordpara=copyText.value;
            document.getElementById('word').value=wordpara.toLowerCase();
        });
        // for download file
        
        document.getElementById('txt-btn').addEventListener("click",function(){
            let element=document.createElement('a');
            let textcontent=copyText.value;
            let blob=new Blob([textcontent],{type: 'text/plain'});
            let urlink=URL.createObjectURL(blob);
            // console.log(urlink);
            element.href=urlink;
            element.download="myfile.txt";
            element.click();
        });
        document.getElementById('word-btn').addEventListener("click",function(){
            let element=document.createElement('a');
            let textcontent=copyText.value;
            let blob=new Blob([textcontent],{type: 'application/msword'});
            let urlink=URL.createObjectURL(blob);
            // console.log(urlink);
            element.href=urlink;
            element.download="myfile.doc";
            element.click();
        });


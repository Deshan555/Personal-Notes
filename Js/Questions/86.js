/*function makeAlphabetSentenceSort(str) {
    const words = str.split(" "); // Split the sentence into an array of words
  
    // Sort the words based on character count in ascending order
    const sortedWords = words.sort((a, b) => a.length - b.length);
  
    // Sort the characters of each word in alphabetical order
    const sortedSentence = sortedWords
      .map((word) => word.split("").sort().join(""))
      .join(" "); // Join the sorted words back into a sentence
  
    return sortedSentence;
  }
  
  const inputSentence = "she lives with him in a small apartment";
  const sortedSentence = makeAlphabetSentenceSort(inputSentence);
  console.log(sortedSentence);
  // Output: "a ehim in hims aehnptart illsv ethw" (sorted sentence based on character count and alphabetical order within words)
  
*/

/*function makeAlphabetSentenceSort(text){

    let words = text.split(" ");

    for(let i = 0; i < words.length - 1; i++){

        for(let x = i + 1; x < words.length; x++){

            if(words[i].length > words[x].length){

                let temp_ver = words[i];

                words[i] = words[x];

                words[x] = temp_ver;
            }
        }
    }

    
    for(let i = 0; i < words.length; i++){

        words[i] = words[i].split("").sort().join("");
    }

    var sortedSentence = words.join(" ");
  
    return sortedSentence;
}*/

function makeAlphabetSentenceSort(str){
    
    const wordsArray = str.split(" "); 
  
    const sortedWords = wordsArray.sort((a, b) => a.length - b.length);

    console.log(sortedWords);

    //const sortedSentence = sortedWords.map((wordsArray) => wordsArray.split("").sort().join("")).join(" "); 

    for(let i = 0; i < sortedWords.length; i++){

        sortedWords[i] = sortedWords[i].split("").sort().join("");
    }

    var sortedSentence = sortedWords.join(" ");
  
    return sortedSentence;
}


console.log(makeAlphabetSentenceSort("she lives with him in a small apartment"));
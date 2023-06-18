function getPermutations(sentence, word) {
    const words = sentence.split(" "); // Split the sentence into an array of words
  
    // Filter words that contain the given character set
    const filteredWords = words.filter((w) => w.includes(word));
  
    // Generate permutations of the filtered words
    const permutations = generatePermutations(filteredWords);
  
    return { words: filteredWords, permutations };
  }
  
  function generatePermutations(words) {
    if (words.length === 0) {
      return [[]]; // Base case: an empty permutation set
    }
  
    const permutations = [];
  
    for (let i = 0; i < words.length; i++) {
      const currentWord = words[i];
      const remainingWords = words.filter((w, index) => index !== i);
  
      const subPermutations = generatePermutations(remainingWords);
  
      for (let j = 0; j < subPermutations.length; j++) {
        const subPermutation = subPermutations[j];
        subPermutation.unshift(currentWord); // Add the current word at the beginning of each sub-permutation
        permutations.push(subPermutation);
      }
    }
  
    return permutations;
  }
  
  const sentence = "THIS IS AN ISSUE FROM GIHAN";
  const word = "IS";
  
  const result = getPermutations(sentence, word);
  console.log(result);
  
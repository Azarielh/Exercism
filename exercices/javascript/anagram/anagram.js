//
// This is only a SKELETON file for the 'Anagram' exercise. It's been provided as a
// convenience to get you started writing code faster.
//

export const findAnagrams = (target, ana_set) => {
  let anagrams = [];
  let sorted_target = target.toLowerCase().split("").sort().join("");
  let sorted;
  for (let word of ana_set) {
      sorted = word.toLowerCase().split('').sort().join("");
    if (sorted == sorted_target && word.toLowerCase() != target.toLowerCase())
      anagrams.push(word);
  }
  return anagrams;
};

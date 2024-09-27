class Pangram
  def self.pangram?(input : String) : Bool
      alphabet = Set{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}

    input.each_char do |char|
    alphabet.delete(char.downcase) if alphabet.includes? (char.downcase)
    end
    alphabet.empty?
  end
end
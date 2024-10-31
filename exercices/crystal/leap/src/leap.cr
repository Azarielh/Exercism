module Year
  def self.leap?(year : Number) : Bool
    y = year.to_i

    if y % 400 == 0
      true
    elsif y % 100 == 0
      false
    else
      y % 4 == 0
    end
  end
end

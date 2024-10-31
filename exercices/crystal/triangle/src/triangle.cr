class Triangle
  def initialize(name : String)
  # Class method to check if the triangle is equilateral
  def equilateral?(a , b, c ) : Bool
    valid_triangle?(a, b, c) && (a == b && b == c)
  end

  # Class method to check if the triangle is isosceles
  def isosceles?(a , b, c) : Bool
    valid_triangle?(a, b, c) && (a == b || b == c || a == c)
  end

  # Class method to check if the triangle is scalene
  def scalene?(a, b , c) : Bool
    valid_triangle?(a, b, c) && (a != b && b != c && a != c)
  end
end
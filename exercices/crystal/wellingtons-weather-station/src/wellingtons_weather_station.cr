class Temperature
  def to_kelvin(celsius)
    celsius += 273.15
  end

  def round(celsius)
    celsius.round(1)
  end

  def to_fahrenheit(celsius)
    (9/5 * celsius).to_i + 32
  end

  def number_missing_sensors(number_of_sensors)
    if number_of_sensors < 4
      4 - number_of_sensors
    elsif number_of_sensors > 12
      1
    else
      number_of_sensors % 4
    end
  end
end

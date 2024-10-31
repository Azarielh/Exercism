class JuiceMaker  
  def self.debug_light_on?
    true
  end
  def initialize(qty : Int32)
    @running = false
    @fluid = qty
  end
  def  start
    @running = true
  end
  def running?
    @running
  end
  def add_fluid(qty : Int32)
    @fluid += qty
  end
  def stop(min : Int32)
    @running = false
    @fluid -= min * 5
    
  end
end

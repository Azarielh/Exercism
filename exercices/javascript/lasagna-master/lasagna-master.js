/// <reference path="./global.d.ts" />
// @ts-check

/**
 * Implement the functions needed to solve the exercise here.
 * Do not forget to export them so they are available for the
 * tests. Here an example of the syntax as reminder:
 *
 * export function yourFunction(...) {
 *   ...
 * }
 */
export function cookingStatus(remaining_time) {
    if (remaining_time > 0)
      return "Not done, please wait.";
   if (remaining_time === undefined)
      return "You forgot to set the timer.";
  if (remaining_time == 0)
      return "Lasagna is done.";
}

export function preparationTime(layers,time_per_layer) {
  let length_time = time_per_layer
  if (layers === null)
    return 0;
  else if (time_per_layer === undefined)
    length_time = 2;
  return layers.length * length_time;
}

export function quantities(layers) {
  let nood_n_sauce = {
    noodles : 0,
    sauce : 0,
  }
  for ( let ingredients of layers) {
    if (ingredients == "noodles")
      nood_n_sauce.noodles++;
    if (ingredients == "sauce")
      nood_n_sauce.sauce++;
  }
  nood_n_sauce.noodles *= 50;
  nood_n_sauce.sauce *= 0.2;
  return nood_n_sauce;
}

export function addSecretIngredient(friend_receip, own_receip) {
  let secret_ingredient = friend_receip.length - 1;
  own_receip.push(friend_receip[secret_ingredient]);
}

export function scaleRecipe(receip, person) {
  let scaled_receip = {};
  let coef = person / 2;
  for (let ingredients in receip) {
    scaled_receip[ingredients] = receip[ingredients] * coef;    
  }
  return scaled_receip;
}
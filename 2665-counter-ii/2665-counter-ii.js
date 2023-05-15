/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let counter = init;
    let resetVal = init;

    let obj = {
        increment : () => ++counter,
        decrement : () => --counter,
        reset : () => counter = resetVal
    }

    return obj;
};


/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
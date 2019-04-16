const leaguechecker = require('./leaguechecker');
const utils = require('./utils');
function main() {
    console.log(`Hello world`);
    leaguechecker.check()
        .then(function(result){console.log(result)});
}

main();
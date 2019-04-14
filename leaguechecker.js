const utils = require('./utils');
const findProcess = require('find-process');

this.leagueOnline = false;
this.getLeagueOnline = function () { return this.leagueOnline };
this.setLeagueOnline = function (mode) {
    if (utils.isBoolean(mode)) {
        this.leagueOnline = mode;
    }
    else {
        throw Error('Somehow got non boolean for league online, closing now');
    }
}
this.processes = findProcess("name", "discord", false)
    .then(function (list) {
        return utils.prettystring(list);
    });

function check() {
    findProcess("name", "Discord", false)
        .then(function (list) {
            return utils.prettystring(list);
        });
}

module.exports = {
    check
}
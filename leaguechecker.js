const utils = require('./utils.js');
const findProcess = require('find-process');


/**
 * Check if league of legends is running
 * @param {boolean} leagueOnline - If league of legends is online
 */
function LeagueChecker() {
  this.status = false;
}

LeagueChecker.prototype = {
  getStatus: function() {
    return utils.prettystring(this.status);
  },

  setStatus: function(mode) {
    if (utils.isBoolean(mode)) {
      this.status = mode;
    } else {
      throw typeError('Non boolean for league online, closing now');
    }
  },
  check: function() {
    findProcess('name', 'Discord', false)
        .then(function(result) {
          return utils.prettystring(result);
        });
  },
};

module.exports = LeagueChecker;

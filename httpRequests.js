const https = require('https');
const utils = require('./utils');
const yaml = require('yaml');
const fs = require('fs');

var file = fs.readFileSync('./config.yaml', 'utf8');
var config = yaml.parse(file)
https.get(`https://na1.api.riotgames.com/lol/summoner/v4/summoners/by-name/Kaloshade?api_key=${config['token']}`,
(res) => {console.log(res);
});

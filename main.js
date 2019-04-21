const LeagueChecker = require('./leagueChecker');
  
function main() {
  console.log(`Hello world`);
  const Hi = new LeagueChecker();
  console.log(Hi.status);
  Hi.setStatus(true);
  console.log(Hi.status);
}

main();

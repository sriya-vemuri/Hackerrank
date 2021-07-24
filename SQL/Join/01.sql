select sum(C.population) from city C,Country Co where C.countrycode = Co.code and Co.continent = "Asia"

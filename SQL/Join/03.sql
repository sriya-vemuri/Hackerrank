select Co.continent,round(avg(C.population)-0.5) from city C,Country Co where Co.code = C.countrycode group by Co.continent 

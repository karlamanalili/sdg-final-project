// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std; 

int main() {
    char country; //this is the constant made for calling the countries in the switch case expression
    
    cout << " A. Brunei \nB. Burma\nC. Cambodia\nD. Timor-Leste \nE. Indonesia \nF. Malaysia \nG. Philippines \nH. Singapore \nI. Thailand \nJ. Vietnam \n \n Choose a letter to pick a Country: "; //Basically what the users sees and can choose from
    
    cin >> country; 
    
    //I used switch statement so the user input is in the form of a single character even though the display is in uppercase, the program can accept both lower and upper-case characters
    
    switch ( country ){
        //you have to be careful, it doesn't accept too much characters 
        case 'A':
        case 'a':
        cout << "\n Brunei Darussalam \n Country Summary \n - Located on the northwest coast of the island of Borneo in SouthEast Asia. \n - The country has hilly lowlands and peat swamp forests in the west, rugged mountains in the east, and swampy, flat plain along the coast. \n - Brunei Darussalam has an equatorial climate influenced by the monsoon systems known as northeast monsoon and southwest monsoon. \n - The country generally experiences wet conditions throughout the year with average annual rainfall of 3,000 millimeters (2010-2014) - Being in an equatorial climate country, the temperature is hot throughout the year. The mean daily temperature is 28.04°C, with maximum mean of 32.4°C and minimum mean of 23.7°C (2010-2014) \n \n Temperature \n - The country experienced a rise in average temperature by 0.6°C between 1970 and 2014. \n \n Precipitation \n - An increase in average annual rainfall was also recorded between 2005 and 2015. \n - An irregularity in monthly rainfall trend was observed in 2019.";
        break;
        
        case 'B':
        case 'b':
        cout << "\n Burma (Myanmar) \n Country Summary \n - The Republic of the Union of Myanmar, herein Myanmar, (formally known as Burma) is situated on the western edge of Southeast Asia. Myanmaris the largest country in Southeast Asia, covering approximately 676,000 km2, extending 800 km east towest and 1,300 km north to south. \n - In Myanmar, storms, floods and waterlogging are identified as key drivers of poverty, and poverty is highest in rural areas. \n - These factors combined with Myanmar's high exposure to hazards such as floods and tropical cyclones make it one of the most vulnerable countries to climate change in the world \n \n Temperature \n - Based on the change between the periods 1900-1917 and 2000-2017 warming has been observed in the region of 1.0-1.1'C, with an apparent acceleration in the rate of since the 1990s. \n - Rises have been less geographically consistent, with some regions reporting stationary or declining temperatures \n \n Precipitation \n - Myanmar has typically been associated with years of low precipitation and drought, though an increase in annual precipitation totals over 1951-2007 by about 29 mm per decade was observed. "; 
        break;
        
        case 'C':
        case 'c':
        cout << "\n Cambodia \n Country Summary \n - Cambodia is part of mainland Southeast Asia, bordered by Laos, Thailand, and Vietnam and with a coastal region on the Gulf of Thailand \n - Cambodia remains highly vulnerable to the impacts of climate change due to its high dependency on climate-sensitive sectors such as agriculture, water resources, forestry, fisheries, tourism, etc., which form the critical foundation of its economic growth and support the livelihoods of a great significant majority of its population. \n \n Temperature \n - Temperature increases have been observed, with an approximate increase of 0.18℃ per decade since the 1960s \n - Temperature increases have increased most rapidly during the country's dry season (November to April), increasing by 0.20' to 0.23' per decade \n - Temperatures have increased during the rainy season (May to October), but not as significantly, with increases between 0.13' and 0.16' per decade. \n - The number of 'hot days' in the country has increased over the last century, by as much as 46 days per year. \n \n Precipitation \n - While rainfall was observed to increase in some areas since the 1960s, no statistically significant changes were detected over the 20th century, either in terms of annual rainfall or extreme events. \n - However, precipitation variability is linked to the El Niño Southern Oscillation phenomenon, with years of strong El Niño correlated with years of moderate and severe drought over the 20th century.";
        break;
        
        case 'D':
        case 'd':
        cout << "\n Timor-Leste \n Country Summary \n - Timor-Leste is a small country with a population of approximately 1.3 million in 2020 and a land area of 14,874 km2 comprises of the eastern half of Timor Island and the small enclave of Oecussi located within West Timor, situated between 8'15S - 10'30S latitude and 125'50E – 127'30E longitude. \n - The country is vulnerable to natural disasters, at high risk of cyclones, earthquakes, tsunamis and heavy rainfall, all exacerbated by limited and inadequate infrastructure and social welfare. \n \n Temperature \n - Limited meteorological data is available to sufficiently estimate historical temperature changes, although data availability is likely to improve in future years as more historical data are recovered and digitized from colonial archives. \n \n Precipitation \n - Inter-annual variability associated with ENSO is present in observed precipitation records, driving significant variation. However, annual rainfall trends have shown little climate change-driven change since 1952.";
        break;
        
        case 'E':
        case 'e':
        cout << "\n Indonesia \n Country Summary \n - The Republic of Indonesia is the world's largest archipelagic state, consisting of more than 17,500 islands with over 81,000 kilometers (km) of coastline. \n \n Temperature \n - Since 1990, mean annual temperature has increased by about 0.3'C. \n \n Precipitation \n - Overall annual rainfall has decreased by 2-3 percent since 1990. \n - Precipitation patterns have changed - particularly during the wet and dry seasons. There has been a decline in average annual rainfall in the southern regions (though this includes increases in wet season rainfall), while an average increase in precipitation in the northern regions is coupled with decreased dry season rainfall. ";
        break;
        
        case 'F':
        case 'f':
        cout << "\n Malaysia \n Country Summary \n - Malaysia has a tropical climate and experiences humid weather throughout the year. \n - Average daily temperature: 21'C and 32'C and its mean annual temperature is 25.4'C. \n - Little seasonal variability in average monthly temperature, ranging one degree Celsius between a minimum of 24.9'C in January and maximum of 25.9'C in May, April, May & June are the hottest months of the year.\n - Climate is influenced by the winds blowing from the Indian Ocean (Southwest Monsoon - May to September) and the South China Sea (North-Eastern Monsoon - November to March). Rainfall also remains high year-round. \n - They have high temperatures and humidities, heavy rainfall, and a climatic year patterned around the northeast and southwest monsoons. \n - Between 1970–2013, Peninsular Malaysia, Sabah and Sarawak regions experienced surface mean temperature increase of 0.14'C–0.25'C per decade. \n - Surface maximum temperatures increased by 0.17'C–0.22'C per decade during the same period, while surface minimum temperatures increased by 0.20'C–0.32'C per decade.";
        break;
        
        case 'G':
        case 'g':
        cout << "\n Philippines \n Country Summary \n - Based on the average of all weather stations in the Philippines, excluding Baguio, the mean annual temperature is 26.6o C. \n - The coolest months fall in January with a mean temperature of 25.5 degrees C while the warmest month occurs in May with a mean temperature of 28.3 degrees C. \n - The Philippines has a humid equatorial climate characterized by high temperatures and heavy rainfall. \n - Average annual rainfall is approximately 2,348 millimeters (mm), but this varies geographically, from 960 mm in southeast Mindanao to over 4,050 mm in central Luzon \n -Temperatures are generally high, particularly in the valleys and plains, averaging 27'C throughout the year.";
        break;
        
        case 'H':
        case 'h':
        cout << "\n Singapore \n Country Summary \n - Singapore is situated near the equator and has a typically tropical climate, with abundant rainfall, high and uniform temperatures, and high humidity all year round. \n - Singapore's climate is characterized by two monsoon seasons separated by inter-monsoonal periods.  \n - The Northeast Monsoon occurs from December to early March, and the Southwest Monsoon from June to September.\n \n Impacts \n - The major weather systems affecting Singapore that can lead to heavy rainfall are: Monsoon surges, or strong wind episodes bringing about major rainfall events; Sumatra squalls, an organized line of thunderstorms traveling eastward across Singapore. \n - Rainfall is plentiful in Singapore and it rains an average of 167 days of the year. Much of the rain is heavy and accompanied by thunder. The 1981-2010 long-term mean annual rainfall total is 2165.9mm. \n - Relative humidity shows a fairly uniform pattern throughout the year and does not vary much from month to month. \n -The most prominent winds in Singapore are from the northeast and the south, reflecting the dominance of the monsoons in Singapore. \n - On any given day, winds generally follow the prevailing monsoon flow except when light winds are being modified by terrain or weather systems (e.g., showers or thunderstorms and land or sea breezes). \n -The last 10 years from 2012 to 2021 is the warmest decade on record. The mean temperature from 2012 to 2021 was 27.97'C, 0.02'C higher than the previous record of 27.95'C for the decade from 2010 to 2019.";
        break;
        
        case 'I':
        case 'i':
        cout << "\n Thailand \n Country Summary \n - Observations show temperature increases across Thailand since the mid-20th century and an increase in annual precipitation. Most of this increase occurs during the wet season. \n- Thailand's hottest months are April and May, with the coldest months experienced during December and January. \n - The mean annual temperature is 26.3'C, with a seasonal temperature variation of 5.7'C (between lows of 23.2'C and highs of 28.9'C).\n - The months with the highest rainfall are August and September, with approximately 255 mm recorded during these months. \n - The months with the highest rainfall coincide with Thailand's monsoon season, May to October. Mean annual rainfall is 1,542 mm. \n - Climate had increases in daily maximum, mean and minimum temperatures at 65 meteorological stations between 1970–2006 (0.12–0.59'C, 0.10–0.40'C and 0.11–0.55'C per decade, respectively).";
        break;
        
        case 'J':
        case 'j':
        cout << "\n Vietnam \n Country Summary \n - Vietnam has both a tropical climate zone and a temperate climate zone, with all of the country experiencing the effects of the annual monsoon. \n - Rainy seasons correspond to monsoon circulations, which bring heavy rainfall in the north and south from May to October, and in the central regions from September to January. \n - The northern regions, average temperatures range from 22–27.5'C in summer to 15–20'C in winter, while the southern areas have a narrower range of 28–29'C in summer to 26–27'C in winter. \n - Climate is also impacted by the El Niño Southern Oscillation (ENSO), which influences monsoonal circulation, and drives complex shifts in rainfall and temperature patterns which vary spatially at a sub-national level. \n - Mean annual temperature has increased by 0.5–0.7'C since 1960, with the rate of increase most rapid in southern Vietnam and the Central Highlands.";
        break;
        //with switch cases, it doesn't accept more than one letter that's why I used one letter per country
        
    }
    return 0;
}

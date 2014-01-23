/*
 * ISS Live Qt
 * Copyright (C) 2014, John Pritchard, Syntelos
 *
 * This program is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * (LGPL and GPL) as published by the Free Software Foundation, either
 * version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the LGPL
 * and GPL for more details.
 *
 * You should have received a copy of the LGPL and GPL along with this
 * program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include <cstring>

#include "ISSLSchema.h"

#include "P1000001.h"
#include "P1000002.h"
#include "P1000003.h"
#include "P1000004.h"
#include "P1000005.h"
#include "P1000006.h"
#include "P1000007.h"
#include "P1000008.h"
#include "P1000009.h"
#include "P3000001.h"
#include "P3000002.h"
#include "P4000001.h"
#include "P4000002.h"
#include "P4000003.h"
#include "P4000004.h"
#include "P4000005.h"
#include "P4000006.h"
#include "P4000007.h"
#include "P4000008.h"
#include "P6000001.h"
#include "P6000002.h"
#include "P6000003.h"
#include "P6000004.h"
#include "P6000005.h"
#include "P6000006.h"
#include "P6000007.h"
#include "P6000008.h"
#include "S0000001.h"
#include "S0000002.h"
#include "S0000003.h"
#include "S0000004.h"
#include "S0000005.h"
#include "S0000006.h"
#include "S0000007.h"
#include "S0000008.h"
#include "S0000009.h"
#include "S0000010.h"
#include "S0000011.h"
#include "S0000012.h"
#include "S0000013.h"
#include "S1000001.h"
#include "S1000002.h"
#include "S1000003.h"
#include "S1000004.h"
#include "S1000005.h"
#include "S1000006.h"
#include "S1000007.h"
#include "S1000008.h"
#include "S1000009.h"
#include "S3000001.h"
#include "S3000002.h"
#include "S4000001.h"
#include "S4000002.h"
#include "S4000003.h"
#include "S4000004.h"
#include "S4000005.h"
#include "S4000006.h"
#include "S4000007.h"
#include "S4000008.h"
#include "S6000001.h"
#include "S6000002.h"
#include "S6000003.h"
#include "S6000004.h"
#include "S6000005.h"
#include "S6000006.h"
#include "S6000007.h"
#include "S6000008.h"
#include "Z1000001.h"
#include "Z1000002.h"
#include "Z1000003.h"
#include "Z1000004.h"
#include "Z1000005.h"
#include "Z1000006.h"
#include "Z1000007.h"
#include "Z1000008.h"
#include "Z1000009.h"
#include "Z1000010.h"
#include "Z1000011.h"
#include "Z1000012.h"
#include "Z1000013.h"
#include "Z1000014.h"
#include "Z1000015.h"
#include "NODE1000001.h"
#include "NODE1000002.h"
#include "NODE2000001.h"
#include "NODE2000002.h"
#include "NODE2000003.h"
#include "NODE2000004.h"
#include "NODE2000005.h"
#include "NODE2000006.h"
#include "NODE2000007.h"
#include "NODE3000001.h"
#include "NODE3000002.h"
#include "NODE3000003.h"
#include "NODE3000004.h"
#include "NODE3000005.h"
#include "NODE3000006.h"
#include "NODE3000007.h"
#include "NODE3000008.h"
#include "NODE3000009.h"
#include "NODE3000010.h"
#include "NODE3000011.h"
#include "NODE3000012.h"
#include "NODE3000013.h"
#include "NODE3000014.h"
#include "NODE3000015.h"
#include "NODE3000016.h"
#include "NODE3000017.h"
#include "NODE3000018.h"
#include "NODE3000019.h"
#include "NODE3000020.h"
#include "AIRLOCK000001.h"
#include "AIRLOCK000002.h"
#include "AIRLOCK000003.h"
#include "AIRLOCK000004.h"
#include "AIRLOCK000005.h"
#include "AIRLOCK000006.h"
#include "AIRLOCK000007.h"
#include "AIRLOCK000008.h"
#include "AIRLOCK000009.h"
#include "AIRLOCK000010.h"
#include "AIRLOCK000011.h"
#include "AIRLOCK000012.h"
#include "AIRLOCK000013.h"
#include "AIRLOCK000014.h"
#include "AIRLOCK000015.h"
#include "AIRLOCK000016.h"
#include "AIRLOCK000017.h"
#include "AIRLOCK000018.h"
#include "AIRLOCK000019.h"
#include "AIRLOCK000020.h"
#include "AIRLOCK000021.h"
#include "AIRLOCK000022.h"
#include "AIRLOCK000023.h"
#include "AIRLOCK000024.h"
#include "AIRLOCK000025.h"
#include "AIRLOCK000026.h"
#include "AIRLOCK000027.h"
#include "AIRLOCK000028.h"
#include "AIRLOCK000029.h"
#include "AIRLOCK000030.h"
#include "AIRLOCK000031.h"
#include "AIRLOCK000032.h"
#include "AIRLOCK000033.h"
#include "AIRLOCK000034.h"
#include "AIRLOCK000035.h"
#include "AIRLOCK000036.h"
#include "AIRLOCK000037.h"
#include "AIRLOCK000038.h"
#include "AIRLOCK000039.h"
#include "AIRLOCK000040.h"
#include "AIRLOCK000041.h"
#include "AIRLOCK000042.h"
#include "AIRLOCK000043.h"
#include "AIRLOCK000044.h"
#include "AIRLOCK000045.h"
#include "AIRLOCK000046.h"
#include "AIRLOCK000047.h"
#include "AIRLOCK000048.h"
#include "TIME_000001.h"
#include "TIME_000002.h"
#include "AIRLOCK000049.h"
#include "AIRLOCK000050.h"
#include "AIRLOCK000051.h"
#include "AIRLOCK000052.h"
#include "AIRLOCK000053.h"
#include "AIRLOCK000054.h"
#include "AIRLOCK000055.h"
#include "AIRLOCK000056.h"
#include "AIRLOCK000057.h"
#include "AIRLOCK000058.h"
#include "USLAB000001.h"
#include "USLAB000002.h"
#include "USLAB000003.h"
#include "USLAB000004.h"
#include "USLAB000005.h"
#include "USLAB000006.h"
#include "USLAB000007.h"
#include "USLAB000008.h"
#include "USLAB000009.h"
#include "USLAB000010.h"
#include "USLAB000011.h"
#include "USLAB000012.h"
#include "USLAB000013.h"
#include "USLAB000014.h"
#include "USLAB000015.h"
#include "USLAB000016.h"
#include "USLAB000017.h"
#include "USLAB000018.h"
#include "USLAB000019.h"
#include "USLAB000020.h"
#include "USLAB000021.h"
#include "USLAB000022.h"
#include "USLAB000023.h"
#include "USLAB000024.h"
#include "USLAB000025.h"
#include "USLAB000026.h"
#include "USLAB000027.h"
#include "USLAB000028.h"
#include "USLAB000029.h"
#include "USLAB000030.h"
#include "USLAB000031.h"
#include "USLAB000032.h"
#include "USLAB000033.h"
#include "USLAB000034.h"
#include "USLAB000035.h"
#include "USLAB000036.h"
#include "USLAB000037.h"
#include "USLAB000038.h"
#include "USLAB000039.h"
#include "USLAB000040.h"
#include "USLAB000041.h"
#include "USLAB000042.h"
#include "USLAB000043.h"
#include "USLAB000044.h"
#include "USLAB000045.h"
#include "USLAB000046.h"
#include "USLAB000047.h"
#include "USLAB000048.h"
#include "USLAB000049.h"
#include "USLAB000050.h"
#include "USLAB000051.h"
#include "USLAB000052.h"
#include "USLAB000053.h"
#include "USLAB000054.h"
#include "USLAB000055.h"
#include "USLAB000056.h"
#include "USLAB000057.h"
#include "USLAB000058.h"
#include "USLAB000059.h"
#include "USLAB000060.h"
#include "USLAB000061.h"
#include "USLAB000062.h"
#include "USLAB000063.h"
#include "USLAB000064.h"
#include "USLAB000065.h"
#include "USLAB000066.h"
#include "USLAB000067.h"
#include "USLAB000068.h"
#include "USLAB000069.h"
#include "USLAB000070.h"
#include "USLAB000071.h"
#include "USLAB000072.h"
#include "USLAB000073.h"
#include "USLAB000074.h"
#include "USLAB000075.h"
#include "USLAB000076.h"
#include "USLAB000077.h"
#include "USLAB000078.h"
#include "USLAB000079.h"
#include "USLAB000080.h"
#include "USLAB000081.h"
#include "USLAB000082.h"
#include "USLAB000083.h"
#include "USLAB000084.h"
#include "USLAB000085.h"
#include "USLAB000086.h"
#include "USLAB000087.h"
#include "USLAB000088.h"
#include "USLAB000089.h"
#include "USLAB000090.h"
#include "USLAB000091.h"
#include "USLAB000092.h"
#include "USLAB000093.h"
#include "USLAB000094.h"
#include "USLAB000095.h"
#include "USLAB000096.h"
#include "USLAB000097.h"
#include "USLAB000098.h"
#include "USLAB000099.h"
#include "USLAB000100.h"
#include "USLAB000101.h"
#include "USLAB000102.h"

ISSLSchema::Type ISSLSchema::TypeOf(const char* name){
    switch(name[0]){
    case 'U':{
        if (0 == strcmp("USLAB000001",name))
            return ISSLSchema::TypeUSLAB000001;
        else if (0 == strcmp("USLAB000002",name))
            return ISSLSchema::TypeUSLAB000002;
        else if (0 == strcmp("USLAB000003",name))
            return ISSLSchema::TypeUSLAB000003;
        else if (0 == strcmp("USLAB000004",name))
            return ISSLSchema::TypeUSLAB000004;
        else if (0 == strcmp("USLAB000005",name))
            return ISSLSchema::TypeUSLAB000005;
        else if (0 == strcmp("USLAB000006",name))
            return ISSLSchema::TypeUSLAB000006;
        else if (0 == strcmp("USLAB000007",name))
            return ISSLSchema::TypeUSLAB000007;
        else if (0 == strcmp("USLAB000008",name))
            return ISSLSchema::TypeUSLAB000008;
        else if (0 == strcmp("USLAB000009",name))
            return ISSLSchema::TypeUSLAB000009;
        else if (0 == strcmp("USLAB000010",name))
            return ISSLSchema::TypeUSLAB000010;
        else if (0 == strcmp("USLAB000011",name))
            return ISSLSchema::TypeUSLAB000011;
        else if (0 == strcmp("USLAB000012",name))
            return ISSLSchema::TypeUSLAB000012;
        else if (0 == strcmp("USLAB000013",name))
            return ISSLSchema::TypeUSLAB000013;
        else if (0 == strcmp("USLAB000014",name))
            return ISSLSchema::TypeUSLAB000014;
        else if (0 == strcmp("USLAB000015",name))
            return ISSLSchema::TypeUSLAB000015;
        else if (0 == strcmp("USLAB000016",name))
            return ISSLSchema::TypeUSLAB000016;
        else if (0 == strcmp("USLAB000017",name))
            return ISSLSchema::TypeUSLAB000017;
        else if (0 == strcmp("USLAB000018",name))
            return ISSLSchema::TypeUSLAB000018;
        else if (0 == strcmp("USLAB000019",name))
            return ISSLSchema::TypeUSLAB000019;
        else if (0 == strcmp("USLAB000020",name))
            return ISSLSchema::TypeUSLAB000020;
        else if (0 == strcmp("USLAB000021",name))
            return ISSLSchema::TypeUSLAB000021;
        else if (0 == strcmp("USLAB000022",name))
            return ISSLSchema::TypeUSLAB000022;
        else if (0 == strcmp("USLAB000023",name))
            return ISSLSchema::TypeUSLAB000023;
        else if (0 == strcmp("USLAB000024",name))
            return ISSLSchema::TypeUSLAB000024;
        else if (0 == strcmp("USLAB000025",name))
            return ISSLSchema::TypeUSLAB000025;
        else if (0 == strcmp("USLAB000026",name))
            return ISSLSchema::TypeUSLAB000026;
        else if (0 == strcmp("USLAB000027",name))
            return ISSLSchema::TypeUSLAB000027;
        else if (0 == strcmp("USLAB000028",name))
            return ISSLSchema::TypeUSLAB000028;
        else if (0 == strcmp("USLAB000029",name))
            return ISSLSchema::TypeUSLAB000029;
        else if (0 == strcmp("USLAB000030",name))
            return ISSLSchema::TypeUSLAB000030;
        else if (0 == strcmp("USLAB000031",name))
            return ISSLSchema::TypeUSLAB000031;
        else if (0 == strcmp("USLAB000032",name))
            return ISSLSchema::TypeUSLAB000032;
        else if (0 == strcmp("USLAB000033",name))
            return ISSLSchema::TypeUSLAB000033;
        else if (0 == strcmp("USLAB000034",name))
            return ISSLSchema::TypeUSLAB000034;
        else if (0 == strcmp("USLAB000035",name))
            return ISSLSchema::TypeUSLAB000035;
        else if (0 == strcmp("USLAB000036",name))
            return ISSLSchema::TypeUSLAB000036;
        else if (0 == strcmp("USLAB000037",name))
            return ISSLSchema::TypeUSLAB000037;
        else if (0 == strcmp("USLAB000038",name))
            return ISSLSchema::TypeUSLAB000038;
        else if (0 == strcmp("USLAB000039",name))
            return ISSLSchema::TypeUSLAB000039;
        else if (0 == strcmp("USLAB000040",name))
            return ISSLSchema::TypeUSLAB000040;
        else if (0 == strcmp("USLAB000041",name))
            return ISSLSchema::TypeUSLAB000041;
        else if (0 == strcmp("USLAB000042",name))
            return ISSLSchema::TypeUSLAB000042;
        else if (0 == strcmp("USLAB000043",name))
            return ISSLSchema::TypeUSLAB000043;
        else if (0 == strcmp("USLAB000044",name))
            return ISSLSchema::TypeUSLAB000044;
        else if (0 == strcmp("USLAB000045",name))
            return ISSLSchema::TypeUSLAB000045;
        else if (0 == strcmp("USLAB000046",name))
            return ISSLSchema::TypeUSLAB000046;
        else if (0 == strcmp("USLAB000047",name))
            return ISSLSchema::TypeUSLAB000047;
        else if (0 == strcmp("USLAB000048",name))
            return ISSLSchema::TypeUSLAB000048;
        else if (0 == strcmp("USLAB000049",name))
            return ISSLSchema::TypeUSLAB000049;
        else if (0 == strcmp("USLAB000050",name))
            return ISSLSchema::TypeUSLAB000050;
        else if (0 == strcmp("USLAB000051",name))
            return ISSLSchema::TypeUSLAB000051;
        else if (0 == strcmp("USLAB000052",name))
            return ISSLSchema::TypeUSLAB000052;
        else if (0 == strcmp("USLAB000053",name))
            return ISSLSchema::TypeUSLAB000053;
        else if (0 == strcmp("USLAB000054",name))
            return ISSLSchema::TypeUSLAB000054;
        else if (0 == strcmp("USLAB000055",name))
            return ISSLSchema::TypeUSLAB000055;
        else if (0 == strcmp("USLAB000056",name))
            return ISSLSchema::TypeUSLAB000056;
        else if (0 == strcmp("USLAB000057",name))
            return ISSLSchema::TypeUSLAB000057;
        else if (0 == strcmp("USLAB000058",name))
            return ISSLSchema::TypeUSLAB000058;
        else if (0 == strcmp("USLAB000059",name))
            return ISSLSchema::TypeUSLAB000059;
        else if (0 == strcmp("USLAB000060",name))
            return ISSLSchema::TypeUSLAB000060;
        else if (0 == strcmp("USLAB000061",name))
            return ISSLSchema::TypeUSLAB000061;
        else if (0 == strcmp("USLAB000062",name))
            return ISSLSchema::TypeUSLAB000062;
        else if (0 == strcmp("USLAB000063",name))
            return ISSLSchema::TypeUSLAB000063;
        else if (0 == strcmp("USLAB000064",name))
            return ISSLSchema::TypeUSLAB000064;
        else if (0 == strcmp("USLAB000065",name))
            return ISSLSchema::TypeUSLAB000065;
        else if (0 == strcmp("USLAB000066",name))
            return ISSLSchema::TypeUSLAB000066;
        else if (0 == strcmp("USLAB000067",name))
            return ISSLSchema::TypeUSLAB000067;
        else if (0 == strcmp("USLAB000068",name))
            return ISSLSchema::TypeUSLAB000068;
        else if (0 == strcmp("USLAB000069",name))
            return ISSLSchema::TypeUSLAB000069;
        else if (0 == strcmp("USLAB000070",name))
            return ISSLSchema::TypeUSLAB000070;
        else if (0 == strcmp("USLAB000071",name))
            return ISSLSchema::TypeUSLAB000071;
        else if (0 == strcmp("USLAB000072",name))
            return ISSLSchema::TypeUSLAB000072;
        else if (0 == strcmp("USLAB000073",name))
            return ISSLSchema::TypeUSLAB000073;
        else if (0 == strcmp("USLAB000074",name))
            return ISSLSchema::TypeUSLAB000074;
        else if (0 == strcmp("USLAB000075",name))
            return ISSLSchema::TypeUSLAB000075;
        else if (0 == strcmp("USLAB000076",name))
            return ISSLSchema::TypeUSLAB000076;
        else if (0 == strcmp("USLAB000077",name))
            return ISSLSchema::TypeUSLAB000077;
        else if (0 == strcmp("USLAB000078",name))
            return ISSLSchema::TypeUSLAB000078;
        else if (0 == strcmp("USLAB000079",name))
            return ISSLSchema::TypeUSLAB000079;
        else if (0 == strcmp("USLAB000080",name))
            return ISSLSchema::TypeUSLAB000080;
        else if (0 == strcmp("USLAB000081",name))
            return ISSLSchema::TypeUSLAB000081;
        else if (0 == strcmp("USLAB000082",name))
            return ISSLSchema::TypeUSLAB000082;
        else if (0 == strcmp("USLAB000083",name))
            return ISSLSchema::TypeUSLAB000083;
        else if (0 == strcmp("USLAB000084",name))
            return ISSLSchema::TypeUSLAB000084;
        else if (0 == strcmp("USLAB000085",name))
            return ISSLSchema::TypeUSLAB000085;
        else if (0 == strcmp("USLAB000086",name))
            return ISSLSchema::TypeUSLAB000086;
        else if (0 == strcmp("USLAB000087",name))
            return ISSLSchema::TypeUSLAB000087;
        else if (0 == strcmp("USLAB000088",name))
            return ISSLSchema::TypeUSLAB000088;
        else if (0 == strcmp("USLAB000089",name))
            return ISSLSchema::TypeUSLAB000089;
        else if (0 == strcmp("USLAB000090",name))
            return ISSLSchema::TypeUSLAB000090;
        else if (0 == strcmp("USLAB000091",name))
            return ISSLSchema::TypeUSLAB000091;
        else if (0 == strcmp("USLAB000092",name))
            return ISSLSchema::TypeUSLAB000092;
        else if (0 == strcmp("USLAB000093",name))
            return ISSLSchema::TypeUSLAB000093;
        else if (0 == strcmp("USLAB000094",name))
            return ISSLSchema::TypeUSLAB000094;
        else if (0 == strcmp("USLAB000095",name))
            return ISSLSchema::TypeUSLAB000095;
        else if (0 == strcmp("USLAB000096",name))
            return ISSLSchema::TypeUSLAB000096;
        else if (0 == strcmp("USLAB000097",name))
            return ISSLSchema::TypeUSLAB000097;
        else if (0 == strcmp("USLAB000098",name))
            return ISSLSchema::TypeUSLAB000098;
        else if (0 == strcmp("USLAB000099",name))
            return ISSLSchema::TypeUSLAB000099;
        else if (0 == strcmp("USLAB000100",name))
            return ISSLSchema::TypeUSLAB000100;
        else if (0 == strcmp("USLAB000101",name))
            return ISSLSchema::TypeUSLAB000101;
        else if (0 == strcmp("USLAB000102",name))
            return ISSLSchema::TypeUSLAB000102;
        else 
            return ISSLSchema::TypeUnknown;
    }
    case 'T':{
        if (0 == strcmp("TIME_000001",name))
            return ISSLSchema::TypeTIME_000001;
        else if (0 == strcmp("TIME_000002",name))
            return ISSLSchema::TypeTIME_000002;
        else 
            return ISSLSchema::TypeUnknown;
    }
    case 'A':{
        if (0 == strcmp("AIRLOCK000001",name))
            return ISSLSchema::TypeAIRLOCK000001;
        else if (0 == strcmp("AIRLOCK000002",name))
            return ISSLSchema::TypeAIRLOCK000002;
        else if (0 == strcmp("AIRLOCK000003",name))
            return ISSLSchema::TypeAIRLOCK000003;
        else if (0 == strcmp("AIRLOCK000004",name))
            return ISSLSchema::TypeAIRLOCK000004;
        else if (0 == strcmp("AIRLOCK000005",name))
            return ISSLSchema::TypeAIRLOCK000005;
        else if (0 == strcmp("AIRLOCK000006",name))
            return ISSLSchema::TypeAIRLOCK000006;
        else if (0 == strcmp("AIRLOCK000007",name))
            return ISSLSchema::TypeAIRLOCK000007;
        else if (0 == strcmp("AIRLOCK000008",name))
            return ISSLSchema::TypeAIRLOCK000008;
        else if (0 == strcmp("AIRLOCK000009",name))
            return ISSLSchema::TypeAIRLOCK000009;
        else if (0 == strcmp("AIRLOCK000010",name))
            return ISSLSchema::TypeAIRLOCK000010;
        else if (0 == strcmp("AIRLOCK000011",name))
            return ISSLSchema::TypeAIRLOCK000011;
        else if (0 == strcmp("AIRLOCK000012",name))
            return ISSLSchema::TypeAIRLOCK000012;
        else if (0 == strcmp("AIRLOCK000013",name))
            return ISSLSchema::TypeAIRLOCK000013;
        else if (0 == strcmp("AIRLOCK000014",name))
            return ISSLSchema::TypeAIRLOCK000014;
        else if (0 == strcmp("AIRLOCK000015",name))
            return ISSLSchema::TypeAIRLOCK000015;
        else if (0 == strcmp("AIRLOCK000016",name))
            return ISSLSchema::TypeAIRLOCK000016;
        else if (0 == strcmp("AIRLOCK000017",name))
            return ISSLSchema::TypeAIRLOCK000017;
        else if (0 == strcmp("AIRLOCK000018",name))
            return ISSLSchema::TypeAIRLOCK000018;
        else if (0 == strcmp("AIRLOCK000019",name))
            return ISSLSchema::TypeAIRLOCK000019;
        else if (0 == strcmp("AIRLOCK000020",name))
            return ISSLSchema::TypeAIRLOCK000020;
        else if (0 == strcmp("AIRLOCK000021",name))
            return ISSLSchema::TypeAIRLOCK000021;
        else if (0 == strcmp("AIRLOCK000022",name))
            return ISSLSchema::TypeAIRLOCK000022;
        else if (0 == strcmp("AIRLOCK000023",name))
            return ISSLSchema::TypeAIRLOCK000023;
        else if (0 == strcmp("AIRLOCK000024",name))
            return ISSLSchema::TypeAIRLOCK000024;
        else if (0 == strcmp("AIRLOCK000025",name))
            return ISSLSchema::TypeAIRLOCK000025;
        else if (0 == strcmp("AIRLOCK000026",name))
            return ISSLSchema::TypeAIRLOCK000026;
        else if (0 == strcmp("AIRLOCK000027",name))
            return ISSLSchema::TypeAIRLOCK000027;
        else if (0 == strcmp("AIRLOCK000028",name))
            return ISSLSchema::TypeAIRLOCK000028;
        else if (0 == strcmp("AIRLOCK000029",name))
            return ISSLSchema::TypeAIRLOCK000029;
        else if (0 == strcmp("AIRLOCK000030",name))
            return ISSLSchema::TypeAIRLOCK000030;
        else if (0 == strcmp("AIRLOCK000031",name))
            return ISSLSchema::TypeAIRLOCK000031;
        else if (0 == strcmp("AIRLOCK000032",name))
            return ISSLSchema::TypeAIRLOCK000032;
        else if (0 == strcmp("AIRLOCK000033",name))
            return ISSLSchema::TypeAIRLOCK000033;
        else if (0 == strcmp("AIRLOCK000034",name))
            return ISSLSchema::TypeAIRLOCK000034;
        else if (0 == strcmp("AIRLOCK000035",name))
            return ISSLSchema::TypeAIRLOCK000035;
        else if (0 == strcmp("AIRLOCK000036",name))
            return ISSLSchema::TypeAIRLOCK000036;
        else if (0 == strcmp("AIRLOCK000037",name))
            return ISSLSchema::TypeAIRLOCK000037;
        else if (0 == strcmp("AIRLOCK000038",name))
            return ISSLSchema::TypeAIRLOCK000038;
        else if (0 == strcmp("AIRLOCK000039",name))
            return ISSLSchema::TypeAIRLOCK000039;
        else if (0 == strcmp("AIRLOCK000040",name))
            return ISSLSchema::TypeAIRLOCK000040;
        else if (0 == strcmp("AIRLOCK000041",name))
            return ISSLSchema::TypeAIRLOCK000041;
        else if (0 == strcmp("AIRLOCK000042",name))
            return ISSLSchema::TypeAIRLOCK000042;
        else if (0 == strcmp("AIRLOCK000043",name))
            return ISSLSchema::TypeAIRLOCK000043;
        else if (0 == strcmp("AIRLOCK000044",name))
            return ISSLSchema::TypeAIRLOCK000044;
        else if (0 == strcmp("AIRLOCK000045",name))
            return ISSLSchema::TypeAIRLOCK000045;
        else if (0 == strcmp("AIRLOCK000046",name))
            return ISSLSchema::TypeAIRLOCK000046;
        else if (0 == strcmp("AIRLOCK000047",name))
            return ISSLSchema::TypeAIRLOCK000047;
        else if (0 == strcmp("AIRLOCK000048",name))
            return ISSLSchema::TypeAIRLOCK000048;
        else if (0 == strcmp("AIRLOCK000049",name))
            return ISSLSchema::TypeAIRLOCK000049;
        else if (0 == strcmp("AIRLOCK000050",name))
            return ISSLSchema::TypeAIRLOCK000050;
        else if (0 == strcmp("AIRLOCK000051",name))
            return ISSLSchema::TypeAIRLOCK000051;
        else if (0 == strcmp("AIRLOCK000052",name))
            return ISSLSchema::TypeAIRLOCK000052;
        else if (0 == strcmp("AIRLOCK000053",name))
            return ISSLSchema::TypeAIRLOCK000053;
        else if (0 == strcmp("AIRLOCK000054",name))
            return ISSLSchema::TypeAIRLOCK000054;
        else if (0 == strcmp("AIRLOCK000055",name))
            return ISSLSchema::TypeAIRLOCK000055;
        else if (0 == strcmp("AIRLOCK000056",name))
            return ISSLSchema::TypeAIRLOCK000056;
        else if (0 == strcmp("AIRLOCK000057",name))
            return ISSLSchema::TypeAIRLOCK000057;
        else if (0 == strcmp("AIRLOCK000058",name))
            return ISSLSchema::TypeAIRLOCK000058;
        else 
            return ISSLSchema::TypeUnknown;
    }
    case 'P':{
        if (0 == strcmp("P1000001",name))
            return ISSLSchema::TypeP1000001;
        else if (0 == strcmp("P1000002",name))
            return ISSLSchema::TypeP1000002;
        else if (0 == strcmp("P1000003",name))
            return ISSLSchema::TypeP1000003;
        else if (0 == strcmp("P1000004",name))
            return ISSLSchema::TypeP1000004;
        else if (0 == strcmp("P1000005",name))
            return ISSLSchema::TypeP1000005;
        else if (0 == strcmp("P1000006",name))
            return ISSLSchema::TypeP1000006;
        else if (0 == strcmp("P1000007",name))
            return ISSLSchema::TypeP1000007;
        else if (0 == strcmp("P1000008",name))
            return ISSLSchema::TypeP1000008;
        else if (0 == strcmp("P1000009",name))
            return ISSLSchema::TypeP1000009;
        else if (0 == strcmp("P3000001",name))
            return ISSLSchema::TypeP3000001;
        else if (0 == strcmp("P3000002",name))
            return ISSLSchema::TypeP3000002;
        else if (0 == strcmp("P4000001",name))
            return ISSLSchema::TypeP4000001;
        else if (0 == strcmp("P4000002",name))
            return ISSLSchema::TypeP4000002;
        else if (0 == strcmp("P4000003",name))
            return ISSLSchema::TypeP4000003;
        else if (0 == strcmp("P4000004",name))
            return ISSLSchema::TypeP4000004;
        else if (0 == strcmp("P4000005",name))
            return ISSLSchema::TypeP4000005;
        else if (0 == strcmp("P4000006",name))
            return ISSLSchema::TypeP4000006;
        else if (0 == strcmp("P4000007",name))
            return ISSLSchema::TypeP4000007;
        else if (0 == strcmp("P4000008",name))
            return ISSLSchema::TypeP4000008;
        else if (0 == strcmp("P6000001",name))
            return ISSLSchema::TypeP6000001;
        else if (0 == strcmp("P6000002",name))
            return ISSLSchema::TypeP6000002;
        else if (0 == strcmp("P6000003",name))
            return ISSLSchema::TypeP6000003;
        else if (0 == strcmp("P6000004",name))
            return ISSLSchema::TypeP6000004;
        else if (0 == strcmp("P6000005",name))
            return ISSLSchema::TypeP6000005;
        else if (0 == strcmp("P6000006",name))
            return ISSLSchema::TypeP6000006;
        else if (0 == strcmp("P6000007",name))
            return ISSLSchema::TypeP6000007;
        else if (0 == strcmp("P6000008",name))
            return ISSLSchema::TypeP6000008;
        else 
            return ISSLSchema::TypeUnknown;
    }
    case 'S':{
        if (0 == strcmp("S0000001",name))
            return ISSLSchema::TypeS0000001;
        else if (0 == strcmp("S0000002",name))
            return ISSLSchema::TypeS0000002;
        else if (0 == strcmp("S0000003",name))
            return ISSLSchema::TypeS0000003;
        else if (0 == strcmp("S0000004",name))
            return ISSLSchema::TypeS0000004;
        else if (0 == strcmp("S0000005",name))
            return ISSLSchema::TypeS0000005;
        else if (0 == strcmp("S0000006",name))
            return ISSLSchema::TypeS0000006;
        else if (0 == strcmp("S0000007",name))
            return ISSLSchema::TypeS0000007;
        else if (0 == strcmp("S0000008",name))
            return ISSLSchema::TypeS0000008;
        else if (0 == strcmp("S0000009",name))
            return ISSLSchema::TypeS0000009;
        else if (0 == strcmp("S0000010",name))
            return ISSLSchema::TypeS0000010;
        else if (0 == strcmp("S0000011",name))
            return ISSLSchema::TypeS0000011;
        else if (0 == strcmp("S0000012",name))
            return ISSLSchema::TypeS0000012;
        else if (0 == strcmp("S0000013",name))
            return ISSLSchema::TypeS0000013;
        else if (0 == strcmp("S1000001",name))
            return ISSLSchema::TypeS1000001;
        else if (0 == strcmp("S1000002",name))
            return ISSLSchema::TypeS1000002;
        else if (0 == strcmp("S1000003",name))
            return ISSLSchema::TypeS1000003;
        else if (0 == strcmp("S1000004",name))
            return ISSLSchema::TypeS1000004;
        else if (0 == strcmp("S1000005",name))
            return ISSLSchema::TypeS1000005;
        else if (0 == strcmp("S1000006",name))
            return ISSLSchema::TypeS1000006;
        else if (0 == strcmp("S1000007",name))
            return ISSLSchema::TypeS1000007;
        else if (0 == strcmp("S1000008",name))
            return ISSLSchema::TypeS1000008;
        else if (0 == strcmp("S1000009",name))
            return ISSLSchema::TypeS1000009;
        else if (0 == strcmp("S3000001",name))
            return ISSLSchema::TypeS3000001;
        else if (0 == strcmp("S3000002",name))
            return ISSLSchema::TypeS3000002;
        else if (0 == strcmp("S4000001",name))
            return ISSLSchema::TypeS4000001;
        else if (0 == strcmp("S4000002",name))
            return ISSLSchema::TypeS4000002;
        else if (0 == strcmp("S4000003",name))
            return ISSLSchema::TypeS4000003;
        else if (0 == strcmp("S4000004",name))
            return ISSLSchema::TypeS4000004;
        else if (0 == strcmp("S4000005",name))
            return ISSLSchema::TypeS4000005;
        else if (0 == strcmp("S4000006",name))
            return ISSLSchema::TypeS4000006;
        else if (0 == strcmp("S4000007",name))
            return ISSLSchema::TypeS4000007;
        else if (0 == strcmp("S4000008",name))
            return ISSLSchema::TypeS4000008;
        else if (0 == strcmp("S6000001",name))
            return ISSLSchema::TypeS6000001;
        else if (0 == strcmp("S6000002",name))
            return ISSLSchema::TypeS6000002;
        else if (0 == strcmp("S6000003",name))
            return ISSLSchema::TypeS6000003;
        else if (0 == strcmp("S6000004",name))
            return ISSLSchema::TypeS6000004;
        else if (0 == strcmp("S6000005",name))
            return ISSLSchema::TypeS6000005;
        else if (0 == strcmp("S6000006",name))
            return ISSLSchema::TypeS6000006;
        else if (0 == strcmp("S6000007",name))
            return ISSLSchema::TypeS6000007;
        else if (0 == strcmp("S6000008",name))
            return ISSLSchema::TypeS6000008;
        else 
            return ISSLSchema::TypeUnknown;
    }
    case 'N':{
        if (0 == strcmp("NODE1000001",name))
            return ISSLSchema::TypeNODE1000001;
        else if (0 == strcmp("NODE1000002",name))
            return ISSLSchema::TypeNODE1000002;
        else if (0 == strcmp("NODE2000001",name))
            return ISSLSchema::TypeNODE2000001;
        else if (0 == strcmp("NODE2000002",name))
            return ISSLSchema::TypeNODE2000002;
        else if (0 == strcmp("NODE2000003",name))
            return ISSLSchema::TypeNODE2000003;
        else if (0 == strcmp("NODE2000004",name))
            return ISSLSchema::TypeNODE2000004;
        else if (0 == strcmp("NODE2000005",name))
            return ISSLSchema::TypeNODE2000005;
        else if (0 == strcmp("NODE2000006",name))
            return ISSLSchema::TypeNODE2000006;
        else if (0 == strcmp("NODE2000007",name))
            return ISSLSchema::TypeNODE2000007;
        else if (0 == strcmp("NODE3000001",name))
            return ISSLSchema::TypeNODE3000001;
        else if (0 == strcmp("NODE3000002",name))
            return ISSLSchema::TypeNODE3000002;
        else if (0 == strcmp("NODE3000003",name))
            return ISSLSchema::TypeNODE3000003;
        else if (0 == strcmp("NODE3000004",name))
            return ISSLSchema::TypeNODE3000004;
        else if (0 == strcmp("NODE3000005",name))
            return ISSLSchema::TypeNODE3000005;
        else if (0 == strcmp("NODE3000006",name))
            return ISSLSchema::TypeNODE3000006;
        else if (0 == strcmp("NODE3000007",name))
            return ISSLSchema::TypeNODE3000007;
        else if (0 == strcmp("NODE3000008",name))
            return ISSLSchema::TypeNODE3000008;
        else if (0 == strcmp("NODE3000009",name))
            return ISSLSchema::TypeNODE3000009;
        else if (0 == strcmp("NODE3000010",name))
            return ISSLSchema::TypeNODE3000010;
        else if (0 == strcmp("NODE3000011",name))
            return ISSLSchema::TypeNODE3000011;
        else if (0 == strcmp("NODE3000012",name))
            return ISSLSchema::TypeNODE3000012;
        else if (0 == strcmp("NODE3000013",name))
            return ISSLSchema::TypeNODE3000013;
        else if (0 == strcmp("NODE3000014",name))
            return ISSLSchema::TypeNODE3000014;
        else if (0 == strcmp("NODE3000015",name))
            return ISSLSchema::TypeNODE3000015;
        else if (0 == strcmp("NODE3000016",name))
            return ISSLSchema::TypeNODE3000016;
        else if (0 == strcmp("NODE3000017",name))
            return ISSLSchema::TypeNODE3000017;
        else if (0 == strcmp("NODE3000018",name))
            return ISSLSchema::TypeNODE3000018;
        else if (0 == strcmp("NODE3000019",name))
            return ISSLSchema::TypeNODE3000019;
        else if (0 == strcmp("NODE3000020",name))
            return ISSLSchema::TypeNODE3000020;
        else 
            return ISSLSchema::TypeUnknown;
    }
    case 'Z':{
        if (0 == strcmp("Z1000001",name))
            return ISSLSchema::TypeZ1000001;
        else if (0 == strcmp("Z1000002",name))
            return ISSLSchema::TypeZ1000002;
        else if (0 == strcmp("Z1000003",name))
            return ISSLSchema::TypeZ1000003;
        else if (0 == strcmp("Z1000004",name))
            return ISSLSchema::TypeZ1000004;
        else if (0 == strcmp("Z1000005",name))
            return ISSLSchema::TypeZ1000005;
        else if (0 == strcmp("Z1000006",name))
            return ISSLSchema::TypeZ1000006;
        else if (0 == strcmp("Z1000007",name))
            return ISSLSchema::TypeZ1000007;
        else if (0 == strcmp("Z1000008",name))
            return ISSLSchema::TypeZ1000008;
        else if (0 == strcmp("Z1000009",name))
            return ISSLSchema::TypeZ1000009;
        else if (0 == strcmp("Z1000010",name))
            return ISSLSchema::TypeZ1000010;
        else if (0 == strcmp("Z1000011",name))
            return ISSLSchema::TypeZ1000011;
        else if (0 == strcmp("Z1000012",name))
            return ISSLSchema::TypeZ1000012;
        else if (0 == strcmp("Z1000013",name))
            return ISSLSchema::TypeZ1000013;
        else if (0 == strcmp("Z1000014",name))
            return ISSLSchema::TypeZ1000014;
        else if (0 == strcmp("Z1000015",name))
            return ISSLSchema::TypeZ1000015;
        else 
            return ISSLSchema::TypeUnknown;
    }
    default:
        return ISSLSchema::TypeUnknown;
    }
}

const ISSLSchematic& ISSLSchema::For(ISSLSchema::Type type){
    switch(type){
    case ISSLSchema::TypeP1000001:
        return P1000001::I;
    case ISSLSchema::TypeP1000002:
        return P1000002::I;
    case ISSLSchema::TypeP1000003:
        return P1000003::I;
    case ISSLSchema::TypeP1000004:
        return P1000004::I;
    case ISSLSchema::TypeP1000005:
        return P1000005::I;
    case ISSLSchema::TypeP1000006:
        return P1000006::I;
    case ISSLSchema::TypeP1000007:
        return P1000007::I;
    case ISSLSchema::TypeP1000008:
        return P1000008::I;
    case ISSLSchema::TypeP1000009:
        return P1000009::I;
    case ISSLSchema::TypeP3000001:
        return P3000001::I;
    case ISSLSchema::TypeP3000002:
        return P3000002::I;
    case ISSLSchema::TypeP4000001:
        return P4000001::I;
    case ISSLSchema::TypeP4000002:
        return P4000002::I;
    case ISSLSchema::TypeP4000003:
        return P4000003::I;
    case ISSLSchema::TypeP4000004:
        return P4000004::I;
    case ISSLSchema::TypeP4000005:
        return P4000005::I;
    case ISSLSchema::TypeP4000006:
        return P4000006::I;
    case ISSLSchema::TypeP4000007:
        return P4000007::I;
    case ISSLSchema::TypeP4000008:
        return P4000008::I;
    case ISSLSchema::TypeP6000001:
        return P6000001::I;
    case ISSLSchema::TypeP6000002:
        return P6000002::I;
    case ISSLSchema::TypeP6000003:
        return P6000003::I;
    case ISSLSchema::TypeP6000004:
        return P6000004::I;
    case ISSLSchema::TypeP6000005:
        return P6000005::I;
    case ISSLSchema::TypeP6000006:
        return P6000006::I;
    case ISSLSchema::TypeP6000007:
        return P6000007::I;
    case ISSLSchema::TypeP6000008:
        return P6000008::I;
    case ISSLSchema::TypeS0000001:
        return S0000001::I;
    case ISSLSchema::TypeS0000002:
        return S0000002::I;
    case ISSLSchema::TypeS0000003:
        return S0000003::I;
    case ISSLSchema::TypeS0000004:
        return S0000004::I;
    case ISSLSchema::TypeS0000005:
        return S0000005::I;
    case ISSLSchema::TypeS0000006:
        return S0000006::I;
    case ISSLSchema::TypeS0000007:
        return S0000007::I;
    case ISSLSchema::TypeS0000008:
        return S0000008::I;
    case ISSLSchema::TypeS0000009:
        return S0000009::I;
    case ISSLSchema::TypeS0000010:
        return S0000010::I;
    case ISSLSchema::TypeS0000011:
        return S0000011::I;
    case ISSLSchema::TypeS0000012:
        return S0000012::I;
    case ISSLSchema::TypeS0000013:
        return S0000013::I;
    case ISSLSchema::TypeS1000001:
        return S1000001::I;
    case ISSLSchema::TypeS1000002:
        return S1000002::I;
    case ISSLSchema::TypeS1000003:
        return S1000003::I;
    case ISSLSchema::TypeS1000004:
        return S1000004::I;
    case ISSLSchema::TypeS1000005:
        return S1000005::I;
    case ISSLSchema::TypeS1000006:
        return S1000006::I;
    case ISSLSchema::TypeS1000007:
        return S1000007::I;
    case ISSLSchema::TypeS1000008:
        return S1000008::I;
    case ISSLSchema::TypeS1000009:
        return S1000009::I;
    case ISSLSchema::TypeS3000001:
        return S3000001::I;
    case ISSLSchema::TypeS3000002:
        return S3000002::I;
    case ISSLSchema::TypeS4000001:
        return S4000001::I;
    case ISSLSchema::TypeS4000002:
        return S4000002::I;
    case ISSLSchema::TypeS4000003:
        return S4000003::I;
    case ISSLSchema::TypeS4000004:
        return S4000004::I;
    case ISSLSchema::TypeS4000005:
        return S4000005::I;
    case ISSLSchema::TypeS4000006:
        return S4000006::I;
    case ISSLSchema::TypeS4000007:
        return S4000007::I;
    case ISSLSchema::TypeS4000008:
        return S4000008::I;
    case ISSLSchema::TypeS6000001:
        return S6000001::I;
    case ISSLSchema::TypeS6000002:
        return S6000002::I;
    case ISSLSchema::TypeS6000003:
        return S6000003::I;
    case ISSLSchema::TypeS6000004:
        return S6000004::I;
    case ISSLSchema::TypeS6000005:
        return S6000005::I;
    case ISSLSchema::TypeS6000006:
        return S6000006::I;
    case ISSLSchema::TypeS6000007:
        return S6000007::I;
    case ISSLSchema::TypeS6000008:
        return S6000008::I;
    case ISSLSchema::TypeZ1000001:
        return Z1000001::I;
    case ISSLSchema::TypeZ1000002:
        return Z1000002::I;
    case ISSLSchema::TypeZ1000003:
        return Z1000003::I;
    case ISSLSchema::TypeZ1000004:
        return Z1000004::I;
    case ISSLSchema::TypeZ1000005:
        return Z1000005::I;
    case ISSLSchema::TypeZ1000006:
        return Z1000006::I;
    case ISSLSchema::TypeZ1000007:
        return Z1000007::I;
    case ISSLSchema::TypeZ1000008:
        return Z1000008::I;
    case ISSLSchema::TypeZ1000009:
        return Z1000009::I;
    case ISSLSchema::TypeZ1000010:
        return Z1000010::I;
    case ISSLSchema::TypeZ1000011:
        return Z1000011::I;
    case ISSLSchema::TypeZ1000012:
        return Z1000012::I;
    case ISSLSchema::TypeZ1000013:
        return Z1000013::I;
    case ISSLSchema::TypeZ1000014:
        return Z1000014::I;
    case ISSLSchema::TypeZ1000015:
        return Z1000015::I;
    case ISSLSchema::TypeNODE1000001:
        return NODE1000001::I;
    case ISSLSchema::TypeNODE1000002:
        return NODE1000002::I;
    case ISSLSchema::TypeNODE2000001:
        return NODE2000001::I;
    case ISSLSchema::TypeNODE2000002:
        return NODE2000002::I;
    case ISSLSchema::TypeNODE2000003:
        return NODE2000003::I;
    case ISSLSchema::TypeNODE2000004:
        return NODE2000004::I;
    case ISSLSchema::TypeNODE2000005:
        return NODE2000005::I;
    case ISSLSchema::TypeNODE2000006:
        return NODE2000006::I;
    case ISSLSchema::TypeNODE2000007:
        return NODE2000007::I;
    case ISSLSchema::TypeNODE3000001:
        return NODE3000001::I;
    case ISSLSchema::TypeNODE3000002:
        return NODE3000002::I;
    case ISSLSchema::TypeNODE3000003:
        return NODE3000003::I;
    case ISSLSchema::TypeNODE3000004:
        return NODE3000004::I;
    case ISSLSchema::TypeNODE3000005:
        return NODE3000005::I;
    case ISSLSchema::TypeNODE3000006:
        return NODE3000006::I;
    case ISSLSchema::TypeNODE3000007:
        return NODE3000007::I;
    case ISSLSchema::TypeNODE3000008:
        return NODE3000008::I;
    case ISSLSchema::TypeNODE3000009:
        return NODE3000009::I;
    case ISSLSchema::TypeNODE3000010:
        return NODE3000010::I;
    case ISSLSchema::TypeNODE3000011:
        return NODE3000011::I;
    case ISSLSchema::TypeNODE3000012:
        return NODE3000012::I;
    case ISSLSchema::TypeNODE3000013:
        return NODE3000013::I;
    case ISSLSchema::TypeNODE3000014:
        return NODE3000014::I;
    case ISSLSchema::TypeNODE3000015:
        return NODE3000015::I;
    case ISSLSchema::TypeNODE3000016:
        return NODE3000016::I;
    case ISSLSchema::TypeNODE3000017:
        return NODE3000017::I;
    case ISSLSchema::TypeNODE3000018:
        return NODE3000018::I;
    case ISSLSchema::TypeNODE3000019:
        return NODE3000019::I;
    case ISSLSchema::TypeNODE3000020:
        return NODE3000020::I;
    case ISSLSchema::TypeAIRLOCK000001:
        return AIRLOCK000001::I;
    case ISSLSchema::TypeAIRLOCK000002:
        return AIRLOCK000002::I;
    case ISSLSchema::TypeAIRLOCK000003:
        return AIRLOCK000003::I;
    case ISSLSchema::TypeAIRLOCK000004:
        return AIRLOCK000004::I;
    case ISSLSchema::TypeAIRLOCK000005:
        return AIRLOCK000005::I;
    case ISSLSchema::TypeAIRLOCK000006:
        return AIRLOCK000006::I;
    case ISSLSchema::TypeAIRLOCK000007:
        return AIRLOCK000007::I;
    case ISSLSchema::TypeAIRLOCK000008:
        return AIRLOCK000008::I;
    case ISSLSchema::TypeAIRLOCK000009:
        return AIRLOCK000009::I;
    case ISSLSchema::TypeAIRLOCK000010:
        return AIRLOCK000010::I;
    case ISSLSchema::TypeAIRLOCK000011:
        return AIRLOCK000011::I;
    case ISSLSchema::TypeAIRLOCK000012:
        return AIRLOCK000012::I;
    case ISSLSchema::TypeAIRLOCK000013:
        return AIRLOCK000013::I;
    case ISSLSchema::TypeAIRLOCK000014:
        return AIRLOCK000014::I;
    case ISSLSchema::TypeAIRLOCK000015:
        return AIRLOCK000015::I;
    case ISSLSchema::TypeAIRLOCK000016:
        return AIRLOCK000016::I;
    case ISSLSchema::TypeAIRLOCK000017:
        return AIRLOCK000017::I;
    case ISSLSchema::TypeAIRLOCK000018:
        return AIRLOCK000018::I;
    case ISSLSchema::TypeAIRLOCK000019:
        return AIRLOCK000019::I;
    case ISSLSchema::TypeAIRLOCK000020:
        return AIRLOCK000020::I;
    case ISSLSchema::TypeAIRLOCK000021:
        return AIRLOCK000021::I;
    case ISSLSchema::TypeAIRLOCK000022:
        return AIRLOCK000022::I;
    case ISSLSchema::TypeAIRLOCK000023:
        return AIRLOCK000023::I;
    case ISSLSchema::TypeAIRLOCK000024:
        return AIRLOCK000024::I;
    case ISSLSchema::TypeAIRLOCK000025:
        return AIRLOCK000025::I;
    case ISSLSchema::TypeAIRLOCK000026:
        return AIRLOCK000026::I;
    case ISSLSchema::TypeAIRLOCK000027:
        return AIRLOCK000027::I;
    case ISSLSchema::TypeAIRLOCK000028:
        return AIRLOCK000028::I;
    case ISSLSchema::TypeAIRLOCK000029:
        return AIRLOCK000029::I;
    case ISSLSchema::TypeAIRLOCK000030:
        return AIRLOCK000030::I;
    case ISSLSchema::TypeAIRLOCK000031:
        return AIRLOCK000031::I;
    case ISSLSchema::TypeAIRLOCK000032:
        return AIRLOCK000032::I;
    case ISSLSchema::TypeAIRLOCK000033:
        return AIRLOCK000033::I;
    case ISSLSchema::TypeAIRLOCK000034:
        return AIRLOCK000034::I;
    case ISSLSchema::TypeAIRLOCK000035:
        return AIRLOCK000035::I;
    case ISSLSchema::TypeAIRLOCK000036:
        return AIRLOCK000036::I;
    case ISSLSchema::TypeAIRLOCK000037:
        return AIRLOCK000037::I;
    case ISSLSchema::TypeAIRLOCK000038:
        return AIRLOCK000038::I;
    case ISSLSchema::TypeAIRLOCK000039:
        return AIRLOCK000039::I;
    case ISSLSchema::TypeAIRLOCK000040:
        return AIRLOCK000040::I;
    case ISSLSchema::TypeAIRLOCK000041:
        return AIRLOCK000041::I;
    case ISSLSchema::TypeAIRLOCK000042:
        return AIRLOCK000042::I;
    case ISSLSchema::TypeAIRLOCK000043:
        return AIRLOCK000043::I;
    case ISSLSchema::TypeAIRLOCK000044:
        return AIRLOCK000044::I;
    case ISSLSchema::TypeAIRLOCK000045:
        return AIRLOCK000045::I;
    case ISSLSchema::TypeAIRLOCK000046:
        return AIRLOCK000046::I;
    case ISSLSchema::TypeAIRLOCK000047:
        return AIRLOCK000047::I;
    case ISSLSchema::TypeAIRLOCK000048:
        return AIRLOCK000048::I;
    case ISSLSchema::TypeTIME_000001:
        return TIME_000001::I;
    case ISSLSchema::TypeTIME_000002:
        return TIME_000002::I;
    case ISSLSchema::TypeAIRLOCK000049:
        return AIRLOCK000049::I;
    case ISSLSchema::TypeAIRLOCK000050:
        return AIRLOCK000050::I;
    case ISSLSchema::TypeAIRLOCK000051:
        return AIRLOCK000051::I;
    case ISSLSchema::TypeAIRLOCK000052:
        return AIRLOCK000052::I;
    case ISSLSchema::TypeAIRLOCK000053:
        return AIRLOCK000053::I;
    case ISSLSchema::TypeAIRLOCK000054:
        return AIRLOCK000054::I;
    case ISSLSchema::TypeAIRLOCK000055:
        return AIRLOCK000055::I;
    case ISSLSchema::TypeAIRLOCK000056:
        return AIRLOCK000056::I;
    case ISSLSchema::TypeAIRLOCK000057:
        return AIRLOCK000057::I;
    case ISSLSchema::TypeAIRLOCK000058:
        return AIRLOCK000058::I;
    case ISSLSchema::TypeUSLAB000001:
        return USLAB000001::I;
    case ISSLSchema::TypeUSLAB000002:
        return USLAB000002::I;
    case ISSLSchema::TypeUSLAB000003:
        return USLAB000003::I;
    case ISSLSchema::TypeUSLAB000004:
        return USLAB000004::I;
    case ISSLSchema::TypeUSLAB000005:
        return USLAB000005::I;
    case ISSLSchema::TypeUSLAB000006:
        return USLAB000006::I;
    case ISSLSchema::TypeUSLAB000007:
        return USLAB000007::I;
    case ISSLSchema::TypeUSLAB000008:
        return USLAB000008::I;
    case ISSLSchema::TypeUSLAB000009:
        return USLAB000009::I;
    case ISSLSchema::TypeUSLAB000010:
        return USLAB000010::I;
    case ISSLSchema::TypeUSLAB000011:
        return USLAB000011::I;
    case ISSLSchema::TypeUSLAB000012:
        return USLAB000012::I;
    case ISSLSchema::TypeUSLAB000013:
        return USLAB000013::I;
    case ISSLSchema::TypeUSLAB000014:
        return USLAB000014::I;
    case ISSLSchema::TypeUSLAB000015:
        return USLAB000015::I;
    case ISSLSchema::TypeUSLAB000016:
        return USLAB000016::I;
    case ISSLSchema::TypeUSLAB000017:
        return USLAB000017::I;
    case ISSLSchema::TypeUSLAB000018:
        return USLAB000018::I;
    case ISSLSchema::TypeUSLAB000019:
        return USLAB000019::I;
    case ISSLSchema::TypeUSLAB000020:
        return USLAB000020::I;
    case ISSLSchema::TypeUSLAB000021:
        return USLAB000021::I;
    case ISSLSchema::TypeUSLAB000022:
        return USLAB000022::I;
    case ISSLSchema::TypeUSLAB000023:
        return USLAB000023::I;
    case ISSLSchema::TypeUSLAB000024:
        return USLAB000024::I;
    case ISSLSchema::TypeUSLAB000025:
        return USLAB000025::I;
    case ISSLSchema::TypeUSLAB000026:
        return USLAB000026::I;
    case ISSLSchema::TypeUSLAB000027:
        return USLAB000027::I;
    case ISSLSchema::TypeUSLAB000028:
        return USLAB000028::I;
    case ISSLSchema::TypeUSLAB000029:
        return USLAB000029::I;
    case ISSLSchema::TypeUSLAB000030:
        return USLAB000030::I;
    case ISSLSchema::TypeUSLAB000031:
        return USLAB000031::I;
    case ISSLSchema::TypeUSLAB000032:
        return USLAB000032::I;
    case ISSLSchema::TypeUSLAB000033:
        return USLAB000033::I;
    case ISSLSchema::TypeUSLAB000034:
        return USLAB000034::I;
    case ISSLSchema::TypeUSLAB000035:
        return USLAB000035::I;
    case ISSLSchema::TypeUSLAB000036:
        return USLAB000036::I;
    case ISSLSchema::TypeUSLAB000037:
        return USLAB000037::I;
    case ISSLSchema::TypeUSLAB000038:
        return USLAB000038::I;
    case ISSLSchema::TypeUSLAB000039:
        return USLAB000039::I;
    case ISSLSchema::TypeUSLAB000040:
        return USLAB000040::I;
    case ISSLSchema::TypeUSLAB000041:
        return USLAB000041::I;
    case ISSLSchema::TypeUSLAB000042:
        return USLAB000042::I;
    case ISSLSchema::TypeUSLAB000043:
        return USLAB000043::I;
    case ISSLSchema::TypeUSLAB000044:
        return USLAB000044::I;
    case ISSLSchema::TypeUSLAB000045:
        return USLAB000045::I;
    case ISSLSchema::TypeUSLAB000046:
        return USLAB000046::I;
    case ISSLSchema::TypeUSLAB000047:
        return USLAB000047::I;
    case ISSLSchema::TypeUSLAB000048:
        return USLAB000048::I;
    case ISSLSchema::TypeUSLAB000049:
        return USLAB000049::I;
    case ISSLSchema::TypeUSLAB000050:
        return USLAB000050::I;
    case ISSLSchema::TypeUSLAB000051:
        return USLAB000051::I;
    case ISSLSchema::TypeUSLAB000052:
        return USLAB000052::I;
    case ISSLSchema::TypeUSLAB000053:
        return USLAB000053::I;
    case ISSLSchema::TypeUSLAB000054:
        return USLAB000054::I;
    case ISSLSchema::TypeUSLAB000055:
        return USLAB000055::I;
    case ISSLSchema::TypeUSLAB000056:
        return USLAB000056::I;
    case ISSLSchema::TypeUSLAB000057:
        return USLAB000057::I;
    case ISSLSchema::TypeUSLAB000058:
        return USLAB000058::I;
    case ISSLSchema::TypeUSLAB000059:
        return USLAB000059::I;
    case ISSLSchema::TypeUSLAB000060:
        return USLAB000060::I;
    case ISSLSchema::TypeUSLAB000061:
        return USLAB000061::I;
    case ISSLSchema::TypeUSLAB000062:
        return USLAB000062::I;
    case ISSLSchema::TypeUSLAB000063:
        return USLAB000063::I;
    case ISSLSchema::TypeUSLAB000064:
        return USLAB000064::I;
    case ISSLSchema::TypeUSLAB000065:
        return USLAB000065::I;
    case ISSLSchema::TypeUSLAB000066:
        return USLAB000066::I;
    case ISSLSchema::TypeUSLAB000067:
        return USLAB000067::I;
    case ISSLSchema::TypeUSLAB000068:
        return USLAB000068::I;
    case ISSLSchema::TypeUSLAB000069:
        return USLAB000069::I;
    case ISSLSchema::TypeUSLAB000070:
        return USLAB000070::I;
    case ISSLSchema::TypeUSLAB000071:
        return USLAB000071::I;
    case ISSLSchema::TypeUSLAB000072:
        return USLAB000072::I;
    case ISSLSchema::TypeUSLAB000073:
        return USLAB000073::I;
    case ISSLSchema::TypeUSLAB000074:
        return USLAB000074::I;
    case ISSLSchema::TypeUSLAB000075:
        return USLAB000075::I;
    case ISSLSchema::TypeUSLAB000076:
        return USLAB000076::I;
    case ISSLSchema::TypeUSLAB000077:
        return USLAB000077::I;
    case ISSLSchema::TypeUSLAB000078:
        return USLAB000078::I;
    case ISSLSchema::TypeUSLAB000079:
        return USLAB000079::I;
    case ISSLSchema::TypeUSLAB000080:
        return USLAB000080::I;
    case ISSLSchema::TypeUSLAB000081:
        return USLAB000081::I;
    case ISSLSchema::TypeUSLAB000082:
        return USLAB000082::I;
    case ISSLSchema::TypeUSLAB000083:
        return USLAB000083::I;
    case ISSLSchema::TypeUSLAB000084:
        return USLAB000084::I;
    case ISSLSchema::TypeUSLAB000085:
        return USLAB000085::I;
    case ISSLSchema::TypeUSLAB000086:
        return USLAB000086::I;
    case ISSLSchema::TypeUSLAB000087:
        return USLAB000087::I;
    case ISSLSchema::TypeUSLAB000088:
        return USLAB000088::I;
    case ISSLSchema::TypeUSLAB000089:
        return USLAB000089::I;
    case ISSLSchema::TypeUSLAB000090:
        return USLAB000090::I;
    case ISSLSchema::TypeUSLAB000091:
        return USLAB000091::I;
    case ISSLSchema::TypeUSLAB000092:
        return USLAB000092::I;
    case ISSLSchema::TypeUSLAB000093:
        return USLAB000093::I;
    case ISSLSchema::TypeUSLAB000094:
        return USLAB000094::I;
    case ISSLSchema::TypeUSLAB000095:
        return USLAB000095::I;
    case ISSLSchema::TypeUSLAB000096:
        return USLAB000096::I;
    case ISSLSchema::TypeUSLAB000097:
        return USLAB000097::I;
    case ISSLSchema::TypeUSLAB000098:
        return USLAB000098::I;
    case ISSLSchema::TypeUSLAB000099:
        return USLAB000099::I;
    case ISSLSchema::TypeUSLAB000100:
        return USLAB000100::I;
    case ISSLSchema::TypeUSLAB000101:
        return USLAB000101::I;
    default:
        return USLAB000102::I;
    }
}

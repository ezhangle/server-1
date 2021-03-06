DELETE FROM script_texts WHERE entry BETWEEN -1532130 AND -1532125;
INSERT INTO script_texts (entry,content_default,sound,type,language,emote,comment) VALUES
(-1532125,'An ancient being awakens in the distance...',0,2,0,0,'nightbane EMOTE_AWAKEN'),
(-1532126,'What fools! I shall bring a quick end to your suffering!',0,1,0,0,'nightbane SAY_AGGRO'),
(-1532127,'Miserable vermin. I shall exterminate you from the air!',0,1,0,0,'nightbane SAY_AIR_PHASE'),
(-1532128,'Enough! I shall land and crush you myself!',0,1,0,0,'nightbane SAY_LAND_PHASE_1'),
(-1532129,'Insects! Let me show you my strength up close!',0,1,0,0,'nightbane SAY_LAND_PHASE_2'),
(-1532130,'%s takes a deep breath.',0,3,0,0,'nightbane EMOTE_DEEP_BREATH');
DELETE FROM script_waypoint WHERE entry=17225;
INSERT INTO script_waypoint VALUES
(17225, 0, -11033.51, -1784.65, 182.284, 3000, ''),
(17225, 1, -11107.57, -1873.36, 136.878, 0, ''),
(17225, 2, -11118.71, -1883.65, 132.441, 0, ''),
(17225, 3, -11132.92, -1888.12, 128.969, 0, ''),
(17225, 4, -11150.31, -1890.54, 126.557, 0, ''),
(17225, 5, -11160.64, -1891.63, 124.793, 0, ''),
(17225, 6, -11171.52, -1889.45, 123.417, 0, ''),
(17225, 7, -11183.46, -1884.09, 119.754, 0, ''),
(17225, 8, -11196.25, -1874.01, 115.227, 0, ''),
(17225, 9, -11205.59, -1859.66, 110.216, 0, ''),
(17225, 10, -11236.53, -1818.03, 97.3972, 0, ''),
(17225, 11, -11253.11, -1794.48, 93.3101, 0, ''),
(17225, 12, -11254.86, -1787.13, 92.5174, 0, ''),
(17225, 13, -11253.32, -1777.08, 91.7739, 0, ''),
(17225, 14, -11247.48, -1770.27, 92.4183, 0, ''),
(17225, 15, -11238.61, -1766.51, 94.6417, 0, ''),
(17225, 16, -11227.56, -1767.22, 100.256, 0, ''),
(17225, 17, -11218.41, -1770.55, 107.859, 0, ''),
(17225, 18, -11204.81, -1781.77, 110.383, 0, ''),
(17225, 19, -11195.77, -1801.07, 110.833, 0, ''),
(17225, 20, -11195.81, -1824.66, 113.936, 0, ''),
(17225, 21, -11197.11, -1860.01, 117.945, 0, ''),
(17225, 22, -11194.60, -1884.23, 121.401, 0, ''),
(17225, 23, -11184.21, -1894.78, 120.326, 0, ''),
(17225, 24, -11176.91, -1899.84, 119.844, 0, ''),
(17225, 25, -11168.13, -1901.77, 118.958, 0, ''),
(17225, 26, -11154.91, -1901.66, 117.218, 0, ''),
(17225, 27, -11143.15, -1901.22, 115.885, 0, ''),
(17225, 28, -11131.19, -1897.59, 113.722, 0, ''),
(17225, 29, -11121.31, -1890.25, 111.643, 0, ''),
(17225, 30, -11118.22, -1883.83, 110.595, 3000, ''),
(17225, 31, -11118.45, -1883.68, 91.473, 0, 'start combat');

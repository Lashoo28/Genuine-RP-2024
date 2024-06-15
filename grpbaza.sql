-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jun 15, 2024 at 04:50 PM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.0.30

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `test`
--

-- --------------------------------------------------------

--
-- Table structure for table `accounts`
--

CREATE TABLE `accounts` (
  `ID` int(11) NOT NULL,
  `Name` varchar(128) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `Password` varchar(64) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `Level` int(3) NOT NULL,
  `pKeyip` varchar(32) NOT NULL,
  `pCheckip` int(11) NOT NULL,
  `EXP` int(11) NOT NULL,
  `Quest1` int(11) NOT NULL,
  `Quest2` int(11) NOT NULL,
  `Quest3` int(11) NOT NULL,
  `Quest4` int(11) NOT NULL,
  `Quest5` int(11) NOT NULL,
  `Quest6` int(11) NOT NULL,
  `Quest7` int(11) NOT NULL,
  `Quest8` int(11) NOT NULL,
  `Quest9` int(11) NOT NULL,
  `Quest10` int(11) NOT NULL,
  `Quest11` int(11) NOT NULL,
  `Quest12` int(11) NOT NULL,
  `Money` int(11) NOT NULL,
  `Bank` int(11) NOT NULL,
  `VIP` int(11) NOT NULL,
  `VIPDays` int(11) NOT NULL,
  `Admin` int(11) NOT NULL,
  `AdminKey` int(11) NOT NULL,
  `Support` int(11) NOT NULL,
  `Mute` int(11) NOT NULL,
  `MuteTime` int(11) NOT NULL,
  `Warns` int(11) NOT NULL,
  `WarnsTime` int(11) NOT NULL,
  `Ban` int(11) NOT NULL,
  `BanDays` int(11) NOT NULL,
  `Wanted` int(11) NOT NULL,
  `Email` varchar(50) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `Sex` int(1) NOT NULL,
  `SkinOne` int(3) NOT NULL,
  `SkinTwo` int(11) NOT NULL,
  `SkinThree` int(11) NOT NULL,
  `SkinFour` int(11) NOT NULL,
  `SkinSlot` int(11) NOT NULL,
  `Leader` int(11) NOT NULL,
  `Member` int(11) NOT NULL,
  `Rank` int(11) NOT NULL,
  `FracSkin` int(11) NOT NULL,
  `FracStatus` int(11) NOT NULL,
  `FamilyMember` int(11) NOT NULL,
  `FamilyRank` int(11) NOT NULL,
  `FamilyMansion` int(11) NOT NULL,
  `Bullet` int(11) NOT NULL,
  `Drugs` int(11) NOT NULL,
  `Addiction` int(11) NOT NULL,
  `Healme` int(11) NOT NULL,
  `Kills` int(11) NOT NULL,
  `Deaths` int(11) NOT NULL,
  `RegIp` varchar(17) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `ChangePassData` varchar(13) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `ChangePassTime` varchar(11) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `ChangePassIP` varchar(16) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `Health` int(3) NOT NULL,
  `VehicleLic` int(11) NOT NULL,
  `WeaponLic` int(11) NOT NULL,
  `BuisnessLic` int(11) NOT NULL,
  `PromoCodeUsed` int(11) NOT NULL,
  `Satiety` int(11) NOT NULL,
  `Passport` int(11) NOT NULL,
  `Damage` int(11) NOT NULL,
  `ShowNick` int(11) NOT NULL,
  `FamilyChat` int(11) NOT NULL,
  `GreenZone` int(11) NOT NULL,
  `VIPChat` int(11) NOT NULL,
  `SatietyStatus` int(11) NOT NULL,
  `Mobile` int(11) NOT NULL,
  `Number` int(11) NOT NULL,
  `NumberBalance` int(11) NOT NULL,
  `VehicleInfo` int(11) NOT NULL,
  `Buisness` int(11) NOT NULL,
  `SpawnType` int(11) NOT NULL,
  `House` int(11) NOT NULL,
  `Resident` int(11) NOT NULL,
  `Hotel` int(11) NOT NULL,
  `HotelRoom` int(11) NOT NULL,
  `TrailerCar` int(11) NOT NULL,
  `TrailerCarDeagle` int(11) NOT NULL,
  `TrailerCarShotgun` int(11) NOT NULL,
  `TrailerCarM4` int(11) NOT NULL,
  `TrailerCarAK47` int(11) NOT NULL,
  `TrailerCarDrugs` int(11) NOT NULL,
  `TrailerCarMats` int(11) NOT NULL,
  `TrailerCarPosX` float NOT NULL,
  `TrailerCarPosY` float NOT NULL,
  `TrailerCarPosZ` float NOT NULL,
  `TrailerCarPosC` float NOT NULL,
  `TrailerCarColor1` int(11) NOT NULL,
  `TrailerCarColor2` int(11) NOT NULL,
  `TrailerCarNitro` int(11) NOT NULL,
  `TrailerCarWheels` int(11) NOT NULL,
  `TrailerCarHydraulics` int(11) NOT NULL,
  `CarStatus` int(11) NOT NULL,
  `Jail` int(11) NOT NULL,
  `JailCell` int(11) NOT NULL,
  `JailTime` int(11) NOT NULL,
  `PlayerPosX` float NOT NULL,
  `PlayerPosY` float NOT NULL,
  `PlayerPosZ` float NOT NULL,
  `PlayerPosC` float NOT NULL,
  `PlayerPosInt` int(11) NOT NULL,
  `PlayerPosVirt` int(11) NOT NULL,
  `AdminWarning` int(11) NOT NULL,
  `Djetx` int(11) NOT NULL,
  `DaeswroPaydays` int(11) NOT NULL,
  `RouletMoney` int(11) NOT NULL,
  `Accessories1` int(11) NOT NULL,
  `Accessories2` int(11) NOT NULL,
  `Accessories3` int(11) NOT NULL,
  `Accessories4` int(11) NOT NULL,
  `Accessories5` int(11) NOT NULL,
  `Accessories6` int(11) NOT NULL,
  `Accessories7` int(11) NOT NULL,
  `Accessories8` int(11) NOT NULL,
  `Accessories9` int(11) NOT NULL,
  `Accessories10` int(11) NOT NULL,
  `Accessories11` int(11) NOT NULL,
  `Accessories12` int(11) NOT NULL,
  `Accessories13` int(11) NOT NULL,
  `Accessories14` int(11) NOT NULL,
  `Accessories15` int(11) NOT NULL,
  `Accessories16` int(11) NOT NULL,
  `Accessories17` int(11) NOT NULL,
  `Accessories18` int(11) NOT NULL,
  `Accessories19` int(11) NOT NULL,
  `Accessories20` int(11) NOT NULL,
  `Accessories21` int(11) NOT NULL,
  `Accessories22` int(11) NOT NULL,
  `Accessories23` int(11) NOT NULL,
  `Accessories24` int(11) NOT NULL,
  `Accessories25` int(11) NOT NULL,
  `pLogin` int(11) NOT NULL,
  `HouseMoney` int(11) NOT NULL,
  `Bonus` int(11) NOT NULL,
  `pGhostRider` int(11) NOT NULL,
  `pDemon` int(11) NOT NULL,
  `pSparta` int(11) NOT NULL,
  `pAxaliskini` int(11) NOT NULL,
  `pNewModskin` int(11) NOT NULL,
  `pPubgSkin` int(11) NOT NULL,
  `pDeath` int(11) NOT NULL,
  `pDartWaider` int(11) NOT NULL,
  `pAngel` int(11) NOT NULL,
  `pKiborg` int(11) NOT NULL,
  `pDancec` int(11) NOT NULL,
  `pDeadPool` int(11) NOT NULL,
  `pMagida` int(11) NOT NULL,
  `CaseSilver` int(11) NOT NULL,
  `CaseMagic` int(11) NOT NULL,
  `CaseTitany` int(11) NOT NULL,
  `WorkProgress0` int(11) NOT NULL,
  `WorkProgress1` int(11) NOT NULL,
  `WorkProgress2` int(11) NOT NULL,
  `WorkProgress3` int(11) NOT NULL,
  `WorkProgress4` int(11) NOT NULL,
  `WorkProgress5` int(11) NOT NULL,
  `WorkLevel0` int(11) NOT NULL,
  `WorkLevel1` int(11) NOT NULL,
  `WorkLevel2` int(11) NOT NULL,
  `WorkLevel3` int(11) NOT NULL,
  `WorkLevel4` int(11) NOT NULL,
  `WorkLevel5` int(11) NOT NULL,
  `pArmyBilet` int(11) NOT NULL,
  `pArmyTime` int(11) NOT NULL,
  `Accessories26` int(11) NOT NULL,
  `Accessories27` int(11) NOT NULL,
  `Accessories28` int(11) NOT NULL,
  `Accessories29` int(11) NOT NULL,
  `Accessories30` int(11) NOT NULL,
  `Accessories31` int(11) NOT NULL,
  `Accessories32` int(11) NOT NULL,
  `Accessories33` int(11) NOT NULL,
  `Accessories34` int(11) NOT NULL,
  `Accessories35` int(11) NOT NULL,
  `Accessories36` int(11) NOT NULL,
  `Accessories37` int(11) NOT NULL,
  `Accessories38` int(11) NOT NULL,
  `Accessories39` int(11) NOT NULL,
  `Accessories40` int(11) NOT NULL,
  `Accessories41` int(11) NOT NULL,
  `Accessories42` int(11) NOT NULL,
  `Accessories43` int(11) NOT NULL,
  `Accessories44` int(11) NOT NULL,
  `Accessories45` int(11) NOT NULL,
  `Accessories46` int(11) NOT NULL,
  `Accessories47` int(11) NOT NULL,
  `Accessories48` int(11) NOT NULL,
  `Accessories49` int(11) NOT NULL,
  `Accessories50` int(11) NOT NULL,
  `pElections` int(11) NOT NULL,
  `Authorization` varchar(50) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `GiftTime` int(11) NOT NULL,
  `CasinoBlock` int(11) NOT NULL,
  `Addicted` int(11) NOT NULL,
  `FightSkillBox` int(11) NOT NULL,
  `FightSkillKungFu` int(11) NOT NULL,
  `FightSkillKickBox` int(11) NOT NULL,
  `AlreadyRobbed` int(11) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=cp1251 COLLATE=cp1251_bin;

-- --------------------------------------------------------

--
-- Table structure for table `anticheat_settings`
--

CREATE TABLE `anticheat_settings` (
  `ac_code` int(2) NOT NULL,
  `ac_code_trigger_type` int(1) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

--
-- Dumping data for table `anticheat_settings`
--

INSERT INTO `anticheat_settings` (`ac_code`, `ac_code_trigger_type`) VALUES
(0, 1),
(1, 2),
(2, 1),
(3, 1),
(4, 1),
(5, 1),
(6, 1),
(7, 1),
(8, 1),
(9, 0),
(10, 0),
(11, 0),
(12, 0),
(13, 1),
(14, 0),
(15, 0),
(16, 0),
(17, 0),
(18, 0),
(19, 1),
(20, 1),
(21, 2),
(22, 2),
(23, 2),
(24, 2),
(25, 1),
(26, 1),
(27, 1),
(28, 1),
(29, 2),
(30, 2),
(31, 2),
(32, 2),
(33, 2),
(34, 0),
(35, 1),
(36, 2),
(37, 2),
(38, 0),
(39, 0),
(40, 0),
(41, 0),
(42, 2),
(43, 1),
(44, 0),
(45, 0),
(46, 0),
(47, 0),
(48, 0),
(49, 0),
(50, 0),
(51, 2),
(52, 0);

-- --------------------------------------------------------

--
-- Table structure for table `autosalon`
--

CREATE TABLE `autosalon` (
  `ID` int(11) NOT NULL,
  `CarPosX` float NOT NULL,
  `CarPosY` float NOT NULL,
  `CarPosZ` float NOT NULL,
  `CarPosC` float NOT NULL,
  `CarOwner` varchar(32) NOT NULL,
  `CarID` int(11) NOT NULL,
  `CarPrice` int(11) NOT NULL,
  `CarStatus` int(11) NOT NULL,
  `CarSlot` int(11) NOT NULL,
  `CarTime` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

--
-- Dumping data for table `autosalon`
--

INSERT INTO `autosalon` (`ID`, `CarPosX`, `CarPosY`, `CarPosZ`, `CarPosC`, `CarOwner`, `CarID`, `CarPrice`, `CarStatus`, `CarSlot`, `CarTime`) VALUES
(1, 2100.73, 1398.29, 10.5287, -180, 'None', 462, 0, 0, 0, 1),
(2, 2103.93, 1398.49, 10.5287, -180, 'None', 462, 0, 0, 0, 1),
(3, 2107.13, 1398.51, 10.5287, -180, 'None', 462, 0, 0, 0, 1),
(4, 2110.35, 1398.52, 10.5287, -180, 'None', 462, 0, 0, 0, 1),
(5, 2113.55, 1398.53, 10.5287, -180, 'None', 462, 0, 0, 0, 1),
(6, 2116.73, 1398.54, 10.5287, -180, 'None', 462, 0, 0, 0, 1),
(7, 2119.95, 1398.56, 10.5287, -180, 'None', 462, 0, 0, 0, 1),
(8, 2123.19, 1398.57, 10.5287, -180, 'None', 462, 0, 0, 0, 1),
(9, 2126.35, 1398.58, 10.5287, -180, 'None', 462, 0, 0, 0, 1),
(10, 2129.57, 1398.59, 10.5287, -180, 'None', 462, 0, 0, 0, 1),
(11, 2132.79, 1398.61, 10.5287, -180, 'None', 462, 0, 0, 0, 0),
(12, 2136.03, 1398.62, 10.5287, -180, 'None', 462, 0, 0, 0, 1),
(13, 2139.17, 1398.63, 10.5287, -180, 'None', 462, 0, 0, 0, 1),
(14, 2142.31, 1398.64, 10.5287, -180, 'None', 462, 0, 0, 0, 1),
(15, 2145.49, 1398.65, 10.5287, -180, 'None', 462, 0, 0, 0, 1),
(16, 2148.71, 1398.66, 10.5287, -180, 'None', 462, 0, 0, 0, 1),
(17, 2148.71, 1408.71, 10.5287, 0, 'None', 462, 0, 0, 0, 1),
(18, 2145.49, 1408.7, 10.5287, 0, 'None', 462, 0, 0, 0, 1),
(19, 2142.31, 1408.69, 10.5287, 0, 'None', 462, 0, 0, 0, 1),
(20, 2139.17, 1408.69, 10.5287, 0, 'None', 462, 0, 0, 0, 1),
(21, 2136.03, 1408.68, 10.5287, 0, 'None', 462, 0, 0, 0, 1),
(22, 2132.79, 1408.67, 10.5287, 0, 'None', 462, 0, 0, 0, 1),
(23, 2129.57, 1408.67, 10.5287, 0, 'None', 462, 0, 0, 0, 1),
(24, 2126.35, 1408.66, 10.5287, 0, 'None', 462, 0, 0, 0, 1),
(25, 2123.19, 1408.66, 10.5287, 0, 'None', 462, 0, 0, 0, 1),
(26, 2119.95, 1408.65, 10.5287, 0, 'None', 462, 0, 0, 0, 1),
(27, 2116.73, 1408.63, 10.5287, 0, 'None', 462, 0, 0, 0, 1),
(28, 2113.55, 1408.62, 10.5287, 0, 'None', 462, 0, 0, 0, 1),
(29, 2110.35, 1408.61, 10.5287, 0, 'None', 462, 0, 0, 0, 1),
(30, 2107.13, 1408.6, 10.5287, 0, 'None', 462, 0, 0, 0, 1),
(31, 2103.93, 1408.59, 10.5287, 0, 'None', 462, 0, 0, 0, 1),
(32, 2100.73, 1408.58, 10.5287, 0, 'None', 462, 0, 0, 0, 0);

-- --------------------------------------------------------

--
-- Table structure for table `autosalonlimit`
--

CREATE TABLE `autosalonlimit` (
  `ID` int(11) NOT NULL,
  `Car1` int(11) NOT NULL,
  `Car2` int(11) NOT NULL,
  `Car3` int(11) NOT NULL,
  `Car4` int(11) NOT NULL,
  `Car5` int(11) NOT NULL,
  `Car6` int(11) NOT NULL,
  `Car7` int(11) NOT NULL,
  `Car8` int(11) NOT NULL,
  `Car9` int(11) NOT NULL,
  `Car10` int(11) NOT NULL,
  `Car11` int(11) NOT NULL,
  `Car12` int(11) NOT NULL,
  `Car13` int(11) NOT NULL,
  `Car14` int(11) NOT NULL,
  `Car15` int(11) NOT NULL,
  `Car16` int(11) NOT NULL,
  `Car17` int(11) NOT NULL,
  `Car18` int(11) NOT NULL,
  `Car19` int(11) NOT NULL,
  `Car20` int(11) NOT NULL,
  `Car21` int(11) NOT NULL,
  `Car22` int(11) NOT NULL,
  `Car23` int(11) NOT NULL,
  `Car24` int(11) NOT NULL,
  `Car25` int(11) NOT NULL,
  `Car26` int(11) NOT NULL,
  `Car27` int(11) NOT NULL,
  `Car28` int(11) NOT NULL,
  `Car29` int(11) NOT NULL,
  `Car30` int(11) NOT NULL,
  `Car31` int(11) NOT NULL,
  `Car32` int(11) NOT NULL,
  `Car33` int(11) NOT NULL,
  `Car34` int(11) NOT NULL,
  `Car35` int(11) NOT NULL,
  `Car36` int(11) NOT NULL,
  `Car37` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `autosalonlimit`
--

INSERT INTO `autosalonlimit` (`ID`, `Car1`, `Car2`, `Car3`, `Car4`, `Car5`, `Car6`, `Car7`, `Car8`, `Car9`, `Car10`, `Car11`, `Car12`, `Car13`, `Car14`, `Car15`, `Car16`, `Car17`, `Car18`, `Car19`, `Car20`, `Car21`, `Car22`, `Car23`, `Car24`, `Car25`, `Car26`, `Car27`, `Car28`, `Car29`, `Car30`, `Car31`, `Car32`, `Car33`, `Car34`, `Car35`, `Car36`, `Car37`) VALUES
(1, 2, 2, 2, 2, 2, 1, 1, 1, 2, 2, 2, 2, 2, 0, 2, 1, 2, 2, 2, 2, 2, 1, 2, 0, 2, 2, 2, 0, 2, 0, 2, 2, 0, 1, 1, 1, 2);

-- --------------------------------------------------------

--
-- Table structure for table `banlog`
--

CREATE TABLE `banlog` (
  `Name` varchar(32) NOT NULL,
  `Admin` varchar(32) NOT NULL,
  `Reason` varchar(32) NOT NULL,
  `Data` varchar(32) NOT NULL,
  `Time` varchar(32) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=cp1251 COLLATE=cp1251_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `bizz`
--

CREATE TABLE `bizz` (
  `bID` int(11) NOT NULL,
  `bOwned` int(11) NOT NULL,
  `bOwner` varchar(32) NOT NULL,
  `bName` varchar(64) NOT NULL,
  `bEntranceX` float NOT NULL,
  `bEntranceY` float NOT NULL,
  `bEntranceZ` float NOT NULL,
  `bEnterPosX` float NOT NULL,
  `bEnterPosY` float NOT NULL,
  `bEnterPosZ` float NOT NULL,
  `bEnterPosC` float NOT NULL,
  `bExitX` float NOT NULL,
  `bExitY` float NOT NULL,
  `bExitZ` float NOT NULL,
  `bExitPosX` int(11) NOT NULL,
  `bExitPosY` int(11) NOT NULL,
  `bExitPosZ` int(11) NOT NULL,
  `bExitPosC` int(11) NOT NULL,
  `bBuyPrice` int(11) NOT NULL,
  `bEntranceCost` int(11) NOT NULL,
  `bTill` int(11) NOT NULL,
  `bTax` int(11) NOT NULL,
  `bLocked` int(11) NOT NULL,
  `bInterior` int(11) NOT NULL,
  `bProducts` int(11) NOT NULL,
  `bPrice` int(11) NOT NULL,
  `bType` int(11) NOT NULL,
  `bLockTime` int(11) NOT NULL,
  `bVirtualWorld` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

--
-- Dumping data for table `bizz`
--

INSERT INTO `bizz` (`bID`, `bOwned`, `bOwner`, `bName`, `bEntranceX`, `bEntranceY`, `bEntranceZ`, `bEnterPosX`, `bEnterPosY`, `bEnterPosZ`, `bEnterPosC`, `bExitX`, `bExitY`, `bExitZ`, `bExitPosX`, `bExitPosY`, `bExitPosZ`, `bExitPosC`, `bBuyPrice`, `bEntranceCost`, `bTill`, `bTax`, `bLocked`, `bInterior`, `bProducts`, `bPrice`, `bType`, `bLockTime`, `bVirtualWorld`) VALUES
(1, 0, 'The State', 'ldewood 24/7', 1928.58, -1776.32, 13.5469, 1931.36, -1776.23, 13.5469, 0.526, -27.4142, -58.2753, 1003.55, -27, -56, 1004, 360, 100000, 0, 1650, 2500, 0, 6, 1000, 10, 1, 0, 1),
(2, 0, 'The State', 'Nikora 24/7', 1352.38, -1759.25, 13.5078, 1352.3, -1757.34, 13.5078, 2.9165, -27.4142, -58.2753, 1003.55, -27, -56, 1004, 360, 1500000, 0, 37750, 2500, 0, 6, 1000, 10, 1, 0, 2),
(3, 0, 'The State', 'Magniti 24/7', 1365.86, -1438.38, 13.5469, 1363.64, -1438.26, 13.5391, 86.4059, -27.4142, -58.2753, 1003.55, -27, -56, 1004, 360, 100000, 0, 2000, 2500, 0, 6, 1000, 10, 1, 0, 3),
(4, 0, 'The State', 'Subway 24/7', 2481.72, -1758.02, 13.5469, 2481.65, -1755.88, 13.5469, 2.1746, -27.4142, -58.2753, 1003.55, -27, -56, 1004, 360, 1500000, 0, 37410, 2500, 0, 6, 1000, 10, 1, 0, 4),
(5, 0, 'The State', 'Rompetrol', 1940.93, -1772.94, 13.6406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1500000, 100, 239240, 30000, 0, 0, 1000, 10, 2, 0, 0),
(6, 1, 'Maik_Scofild', 'LS SkinShop', 461.703, -1500.78, 31.0454, 460.069, -1500.98, 31.0565, 97.3787, 207.075, -140.376, 1003.51, 207, -139, 1004, 1, 2000000, 0, 5369400, 4000, 0, 3, 20000, 100, 1, 0, 0),
(7, 0, 'The State', 'LS Bank', 1495.2, -1279.93, 14.5749, 1495.25, -1281.9, 14.5658, 183.411, 304.788, 1329.33, 2023.84, 304, 1331, 2024, 41, 1500000, 0, 1630749, 10000, 0, 1, 0, 0, 3, 0, 15),
(8, 0, 'The State', 'Casino Adjara', 2019.32, 1007.72, 10.8203, 2021.28, 1007.64, 10.8203, 269.301, 1133.15, -15.8326, 1000.68, 1133, -14, 1001, 359, 1500000, 0, 0, 10000, 0, 12, 1000, 10, 3, 0, 16),
(9, 1, 'Giorgi_Gurgenishvili', 'LS GunShop', 1368.89, -1279.84, 13.5469, 1366.56, -1279.81, 13.5469, 91.1726, 296.847, -112.071, 1001.52, 297, -110, 1002, 0, 250000, 0, 3277086, 3000, 0, 6, 20000, 10, 4, 0, 9),
(10, 0, 'The State', 'Gulf', 2113.71, 925.541, 10.9609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1500000, 100, 27400, 3000, 0, 0, 1000, 10, 2, 0, 0),
(11, 0, 'The State', 'Modern 24/7', 2117.47, 896.775, 11.1797, 2117.48, 898.554, 11.1797, 359.162, -27.4142, -58.2753, 1003.55, -27, -56, 1004, 360, 1500000, 0, 5370, 2500, 0, 6, 1000, 10, 1, 0, 5),
(12, 0, 'The State', 'MiniMarket 24/7', 370.272, -1602.15, 31.6133, 370.004, -1600.39, 31.6227, 8.0137, -27.4142, -58.2753, 1003.55, -27, -56, 1004, 360, 1500000, 0, 250, 2500, 0, 6, 1000, 10, 1, 0, 6),
(13, 0, 'The State', '24/7 Mercadona', 661.363, -573.373, 16.3359, 658.713, -574.34, 16.3359, 96.1058, -27.4142, -58.2753, 1003.55, -27, -56, 1004, 360, 1500000, 0, 3230, 2500, 0, 6, 20000, 10, 1, 0, 7),
(14, 0, 'The State', 'Alhambra', 1836.51, -1682.58, 13.345, 1835.2, -1681.93, 13.3995, 85.9116, 493.48, -24.9613, 1000.67, 494, -23, 1001, 359, 1500000, 100, 1000, 5000, 0, 17, 20000, 1000, 5, 0, 1);

-- --------------------------------------------------------

--
-- Table structure for table `carkeys`
--

CREATE TABLE `carkeys` (
  `id` int(11) NOT NULL,
  `Owner` varchar(70) NOT NULL,
  `Player` varchar(70) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `cars`
--

CREATE TABLE `cars` (
  `ID` int(11) NOT NULL,
  `CarOwner` varchar(32) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `Car1` int(11) NOT NULL,
  `Car1PosX` float NOT NULL,
  `Car1PosY` float NOT NULL,
  `Car1PosZ` float NOT NULL,
  `Car1PosC` float NOT NULL,
  `Car1Color1` int(11) NOT NULL,
  `Car1Color2` int(11) NOT NULL,
  `Car1PaintJob` int(11) NOT NULL,
  `Car1FrontBumper` int(11) NOT NULL,
  `Car1RearBumper` int(11) NOT NULL,
  `Car1Spoiler` int(11) NOT NULL,
  `Car1Wheels` int(11) NOT NULL,
  `Car1RoofAir` int(11) NOT NULL,
  `Car1LowerAir` int(11) NOT NULL,
  `Car1Nitro` int(11) NOT NULL,
  `Car1Hydraulics` int(11) NOT NULL,
  `Car2` int(11) NOT NULL,
  `Car2PosX` float NOT NULL,
  `Car2PosY` float NOT NULL,
  `Car2PosZ` float NOT NULL,
  `Car2PosC` float NOT NULL,
  `Car2Color1` int(11) NOT NULL,
  `Car2Color2` int(11) NOT NULL,
  `Car2PaintJob` int(11) NOT NULL,
  `Car2FrontBumper` int(11) NOT NULL,
  `Car2RearBumper` int(11) NOT NULL,
  `Car2Spoiler` int(11) NOT NULL,
  `Car2Wheels` int(11) NOT NULL,
  `Car2RoofAir` int(11) NOT NULL,
  `Car2LowerAir` int(11) NOT NULL,
  `Car2Nitro` int(11) NOT NULL,
  `Car2Hydraulics` int(11) NOT NULL,
  `Car3` int(11) NOT NULL,
  `Car3PosX` float NOT NULL,
  `Car3PosY` float NOT NULL,
  `Car3PosZ` float NOT NULL,
  `Car3PosC` float NOT NULL,
  `Car3Color1` int(11) NOT NULL,
  `Car3Color2` int(11) NOT NULL,
  `Car3PaintJob` int(11) NOT NULL,
  `Car3FrontBumper` int(11) NOT NULL,
  `Car3RearBumper` int(11) NOT NULL,
  `Car3Spoiler` int(11) NOT NULL,
  `Car3Wheels` int(11) NOT NULL,
  `Car3RoofAir` int(11) NOT NULL,
  `Car3LowerAir` int(11) NOT NULL,
  `Car3Nitro` int(11) NOT NULL,
  `Car3Hydraulics` int(11) NOT NULL,
  `Car4` int(11) NOT NULL,
  `Car4PosX` float NOT NULL,
  `Car4PosY` float NOT NULL,
  `Car4PosZ` float NOT NULL,
  `Car4PosC` float NOT NULL,
  `Car4Color1` int(11) NOT NULL,
  `Car4Color2` int(11) NOT NULL,
  `Car4PaintJob` int(11) NOT NULL,
  `Car4FrontBumper` int(11) NOT NULL,
  `Car4RearBumper` int(11) NOT NULL,
  `Car4Spoiler` int(11) NOT NULL,
  `Car4Wheels` int(11) NOT NULL,
  `Car4RoofAir` int(11) NOT NULL,
  `Car4LowerAir` int(11) NOT NULL,
  `Car4Nitro` int(11) NOT NULL,
  `Car4Hydraulics` int(11) NOT NULL,
  `Car5` int(11) NOT NULL,
  `Car5PosX` float NOT NULL,
  `Car5PosY` float NOT NULL,
  `Car5PosZ` float NOT NULL,
  `Car5PosC` float NOT NULL,
  `Car5Color1` int(11) NOT NULL,
  `Car5Color2` int(11) NOT NULL,
  `Car5PaintJob` int(11) NOT NULL,
  `Car5FrontBumper` int(11) NOT NULL,
  `Car5RearBumper` int(11) NOT NULL,
  `Car5Spoiler` int(11) NOT NULL,
  `Car5Wheels` int(11) NOT NULL,
  `Car5RoofAir` int(11) NOT NULL,
  `Car5LowerAir` int(11) NOT NULL,
  `Car5Nitro` int(11) NOT NULL,
  `Car5Hydraulics` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `casino`
--

CREATE TABLE `casino` (
  `ID` int(11) NOT NULL,
  `Casino` varchar(16) NOT NULL,
  `MangerOne` varchar(32) NOT NULL,
  `MangerTwo` varchar(32) NOT NULL,
  `MangerThree` varchar(32) NOT NULL,
  `DealerOne` varchar(32) NOT NULL,
  `DealerTwo` varchar(32) NOT NULL,
  `DealerThree` varchar(32) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

--
-- Dumping data for table `casino`
--

INSERT INTO `casino` (`ID`, `Casino`, `MangerOne`, `MangerTwo`, `MangerThree`, `DealerOne`, `DealerTwo`, `DealerThree`) VALUES
(1, 'Adjara', 'Ana_Wright', 'Tom_Hardd', 'Nika_Xacha', 'None', 'Red_Bull', 'None');

-- --------------------------------------------------------

--
-- Table structure for table `family`
--

CREATE TABLE `family` (
  `ID` int(11) NOT NULL,
  `Name` varchar(25) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `Leader` varchar(128) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `Type` int(11) NOT NULL,
  `Color` varchar(10) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `Mansion` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `fracbank`
--

CREATE TABLE `fracbank` (
  `BallasBank` int(11) NOT NULL,
  `VagosBank` int(11) NOT NULL,
  `GroveBank` int(11) NOT NULL,
  `AztecaBank` int(11) NOT NULL,
  `RifaBank` int(11) NOT NULL,
  `LCNBank` int(11) NOT NULL,
  `YakuzaBank` int(11) NOT NULL,
  `RMBank` int(11) NOT NULL,
  `LSNewsBank` int(11) NOT NULL,
  `CityHallBank` int(11) NOT NULL,
  `HealthPrice1` int(11) NOT NULL,
  `HealthPrice2` int(11) NOT NULL,
  `RepairPrice` int(11) NOT NULL,
  `RadarPrice` int(11) NOT NULL,
  `GovermentTax` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `fracbank`
--

INSERT INTO `fracbank` (`BallasBank`, `VagosBank`, `GroveBank`, `AztecaBank`, `RifaBank`, `LCNBank`, `YakuzaBank`, `RMBank`, `LSNewsBank`, `CityHallBank`, `HealthPrice1`, `HealthPrice2`, `RepairPrice`, `RadarPrice`, `GovermentTax`) VALUES
(68400, 100800, 11700, 31850, 75600, 0, 0, 0, 0, 81086484, 1000, 1500, 1500, 15, 500);

-- --------------------------------------------------------

--
-- Table structure for table `fracdrugs`
--

CREATE TABLE `fracdrugs` (
  `BallasDrug` int(11) NOT NULL,
  `VagosDrug` int(11) NOT NULL,
  `GroveDrug` int(11) NOT NULL,
  `AztecaDrug` int(11) NOT NULL,
  `RifaDrug` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `fracdrugs`
--

INSERT INTO `fracdrugs` (`BallasDrug`, `VagosDrug`, `GroveDrug`, `AztecaDrug`, `RifaDrug`) VALUES
(115, 2846, -2520, 2435, 1759);

-- --------------------------------------------------------

--
-- Table structure for table `fracmats`
--

CREATE TABLE `fracmats` (
  `BallasMat` int(11) NOT NULL,
  `VagosMat` int(11) NOT NULL,
  `GroveMat` int(11) NOT NULL,
  `AztecaMat` int(11) NOT NULL,
  `RifaMat` int(11) NOT NULL,
  `LCNMat` int(11) NOT NULL,
  `YakuzaMat` int(11) NOT NULL,
  `RMMat` int(11) NOT NULL,
  `BandidosMat` int(11) NOT NULL,
  `BloodsMat` int(11) NOT NULL,
  `BikerMat` int(11) NOT NULL,
  `GreenMat` int(11) NOT NULL,
  `GGFMAT` int(11) NOT NULL,
  `LSPD` int(11) NOT NULL,
  `FBI` int(11) NOT NULL,
  `ARMY` int(11) NOT NULL,
  `GSHMAT` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `fracmats`
--

INSERT INTO `fracmats` (`BallasMat`, `VagosMat`, `GroveMat`, `AztecaMat`, `RifaMat`, `LCNMat`, `YakuzaMat`, `RMMat`, `BandidosMat`, `BloodsMat`, `BikerMat`, `GreenMat`, `GGFMAT`, `LSPD`, `FBI`, `ARMY`, `GSHMAT`) VALUES
(3194472, 3551055, 2832802, 3159168, 2933199, 3669487, 3723671, 3585773, 2922760, 2551138, 3563804, 831403, 2977135, 4563, 4743, 5013, 78201);

-- --------------------------------------------------------

--
-- Table structure for table `greenzone`
--

CREATE TABLE `greenzone` (
  `ZoneID` int(11) NOT NULL,
  `ZoneName` varchar(64) CHARACTER SET cp1251 COLLATE cp1251_general_ci NOT NULL,
  `ZonePosX` float NOT NULL,
  `ZonePosY` float NOT NULL,
  `ZonePosZ` float NOT NULL,
  `ZoneDistance` int(11) NOT NULL,
  `ZoneVirtualWorld` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `house`
--

CREATE TABLE `house` (
  `HouseID` int(11) NOT NULL,
  `HouseOwned` int(11) NOT NULL,
  `HouseOwner` varchar(32) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `HouseSpawnX` float NOT NULL,
  `HouseSpawnY` float NOT NULL,
  `HouseSpawnZ` float NOT NULL,
  `HouseSpawnC` float NOT NULL,
  `HouseEnterX` float NOT NULL,
  `HouseEnterY` float NOT NULL,
  `HouseEnterZ` float NOT NULL,
  `HouseEnterC` float NOT NULL,
  `HouseExitX` float NOT NULL,
  `HouseExitY` float NOT NULL,
  `HouseExitZ` float NOT NULL,
  `HouseCarX` float NOT NULL,
  `HouseCarY` float NOT NULL,
  `HouseCarZ` float NOT NULL,
  `HouseCarC` float NOT NULL,
  `HousePrice` int(11) NOT NULL,
  `HouseTax` int(11) NOT NULL,
  `HouseBalance` int(11) NOT NULL,
  `HouseClass` int(11) NOT NULL,
  `HouseVirtualWorld` int(11) NOT NULL,
  `HouseInterior` int(11) NOT NULL,
  `HouseLock` int(11) NOT NULL,
  `HousePick` int(11) NOT NULL,
  `HouseIcon` int(11) NOT NULL,
  `HouseResidentOne` varchar(32) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `HouseResidentTwo` varchar(32) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `HouseResidentThree` varchar(32) CHARACTER SET utf32 COLLATE utf32_general_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `house`
--

INSERT INTO `house` (`HouseID`, `HouseOwned`, `HouseOwner`, `HouseSpawnX`, `HouseSpawnY`, `HouseSpawnZ`, `HouseSpawnC`, `HouseEnterX`, `HouseEnterY`, `HouseEnterZ`, `HouseEnterC`, `HouseExitX`, `HouseExitY`, `HouseExitZ`, `HouseCarX`, `HouseCarY`, `HouseCarZ`, `HouseCarC`, `HousePrice`, `HouseTax`, `HouseBalance`, `HouseClass`, `HouseVirtualWorld`, `HouseInterior`, `HouseLock`, `HousePick`, `HouseIcon`, `HouseResidentOne`, `HouseResidentTwo`, `HouseResidentThree`) VALUES
(1, 1, 'Azelart_Ocdarva', 416.881, 2536.6, 10, 269.462, 2696.35, -1990.36, 14.2229, 179.536, 422.573, 2536.53, 10, 2694.07, -1997.95, 13.2052, 269.719, 50000, 5, 430, 0, 1, 10, 1, 118, 30, 'None', 'Davit_Dumbadze', 'None'),
(2, 1, 'BAGRATA', 416.881, 2536.6, 10, 269.462, 2695.42, -2020.55, 14.0223, 0.578998, 422.573, 2536.53, 10, 2690.16, -2010.07, 13.2141, 269.427, 50000, 5, 435, 0, 2, 10, 1, 120, 31, 'None', 'Giorgi_Chimento', 'None'),
(3, 0, 'The State', 416.881, 2536.6, 10, 269.462, 2152.22, -1446.51, 26.1051, 0.628898, 422.573, 2536.53, 10, 2673.47, -2010.08, 13.2137, 270.475, 50000, 5, 770, 0, 3, 10, 1, 122, 32, 'Giorgi_Choxonelidze', 'None', 'None'),
(4, 1, 'Datuna_Asabashvili', 416.881, 2536.6, 10, 269.462, 1370.81, -1320.3, 13.5469, 180.094, 422.573, 2536.53, 10, 2673.29, -1997.83, 13.2112, 271.629, 50000, 5, 615, 0, 4, 10, 0, 124, 33, 'Shavi_Gangstar', 'Luka_Tete', 'Nick_Stiler'),
(5, 0, 'The State', 416.881, 2536.6, 10, 269.462, 1370.81, -1341.38, 13.5469, 90.7752, 422.573, 2536.53, 10, 2745.2, -1208.83, 66.366, 179.161, 50000, 5, 0, 0, 5, 10, 1, 126, 34, 'None', 'Nikka_Yifshidze', 'Gigi_Vendeta'),
(6, 0, 'The State', 416.881, 2536.6, 10, 269.462, 1370.81, -1361.35, 13.5469, 92.146, 422.573, 2536.53, 10, 2745, -1224.99, 63.4439, 179.446, 50000, 5, 0, 0, 6, 10, 1, 128, 35, 'None', 'None', 'Ganabi_GIorgi'),
(7, 0, 'The State', 416.881, 2536.6, 10, 269.462, 2750.39, -1238.72, 61.5245, 90.8928, 422.573, 2536.53, 10, 2744.81, -1242.15, 60.409, 179.345, 50000, 5, 745, 0, 7, 10, 1, 130, 36, 'None', 'None', 'None'),
(8, 0, 'The State', 416.881, 2536.6, 10, 269.462, 2486.39, -1644.53, 14.0772, 178.886, 422.573, 2536.53, 10, 2486.43, -1652.7, 13.1313, 89.7054, 50000, 5, 0, 0, 8, 10, 1, 132, 37, 'Mate_Grigalashvili', 'Nicholas_Karianis', 'None'),
(9, 0, 'The State', 416.881, 2536.6, 10, 269.462, 1105.78, -358.38, 73.9922, 179.671, 422.573, 2536.53, 10, 2450.47, -1652.5, 13.0332, 88.939, 50000, 5, 680, 0, 9, 10, 1, 134, 38, 'Tomi_Marcano', 'Panwklo_Florente', 'None'),
(10, 1, 'Davit_Lomidze', 416.881, 2536.6, 10, 269.462, 1310.11, -1366.8, 13.5064, 0.894599, 422.573, 2536.53, 10, 2466.41, -1688.05, 13.1763, 269.254, 50000, 5, 700, 0, 10, 10, 0, 136, 39, 'ggrisha_onianiiiiii', 'None', 'None'),
(11, 0, 'The State', 416.881, 2536.6, 10, 269.462, 1711.56, -2101.23, 14.021, 179.468, 422.573, 2536.53, 10, 1711.89, -2106.67, 13.2055, 270.764, 50000, 5, 0, 0, 11, 10, 1, 138, 40, 'None', 'None', 'None'),
(12, 0, 'The State', 416.881, 2536.6, 10, 269.462, 1715.12, -2125.45, 14.0566, 358.07, 422.573, 2536.53, 10, 1714.68, -2118.94, 13.2055, 268.933, 50000, 5, 0, 0, 12, 10, 1, 140, 41, 'Guga_Ganabski', 'None', 'None'),
(13, 0, 'The State', 416.881, 2536.6, 10, 269.462, 1734.7, -2130.36, 14.021, 358.404, 422.573, 2536.53, 10, 1730.67, -2118.89, 13.2061, 270.273, 50000, 5, 600, 0, 13, 10, 1, 142, 42, 'None', 'None', 'None'),
(14, 0, 'The State', 416.881, 2536.6, 10, 269.462, 1734.11, -2097.98, 14.0366, 179.281, 422.573, 2536.53, 10, 1734.8, -2106.59, 13.2054, 270.099, 50000, 5, 0, 0, 14, 10, 1, 144, 43, 'Guruli_Lanchkhuti', 'Nika_Kalashnikov', 'None'),
(15, 0, 'The State', 416.881, 2536.6, 10, 269.462, 2150.7, -1418.99, 25.9219, 0.8402, 422.573, 2536.53, 10, 2175.78, -1808.49, 13.0331, 1.3649, 50000, 5, 545, 0, 15, 10, 1, 146, 44, 'Nika_Utalishvili', 'Temuka_Lapiashvili', 'None'),
(16, 1, 'Sexmachine_Kalashov', 416.881, 2536.6, 10, 269.462, 2151.05, -1807.92, 13.5463, 271.748, 422.573, 2536.53, 10, 2156.94, -1808.39, 13.0424, 0.028898, 50000, 5, 80, 0, 16, 10, 0, 148, 45, 'Nekrushka_Kalashov', 'Luka_Marxu', 'None'),
(17, 0, 'The State', 416.881, 2536.6, 10, 269.462, 2151.18, -1401.07, 26.1285, 269.764, 422.573, 2536.53, 10, 2156.92, -1793.1, 13.0152, 180.506, 50000, 5, 0, 0, 17, 10, 1, 150, 46, 'None', 'None', 'None'),
(18, 1, 'Zuka_Castello', -69.803, 1366.01, 1080.21, 177.616, 1540.47, -851.446, 64.3361, 90.4002, -68.8466, 1351.2, 1080.21, 1534.5, -841.703, 64.6632, 90.1798, 70000, 7, 690, 1, 18, 6, 1, 152, 47, 'Nika_Xacha', 'Akira_Cassidy', 'Giorgi_Terranova'),
(19, 1, 'Davit_Ganabsky', -69.803, 1366.01, 1080.21, 177.616, 1535.03, -800.137, 72.8495, 91.2136, -68.8466, 1351.2, 1080.21, 1529.88, -813.393, 71.5807, 89.2896, 70000, 7, 978, 1, 19, 6, 1, 154, 48, 'G_PLAYZ', 'John_Fernandez', 'GURI_CHAD'),
(20, 0, 'The State', -69.803, 1366.01, 1080.21, 177.616, 1527.8, -772.565, 80.5781, 134.094, -68.8466, 1351.2, 1080.21, 1513.82, -768.217, 80.0846, 140.047, 70000, 7, 0, 1, 20, 6, 1, 156, 49, 'Daco_Bero', 'None', 'None'),
(21, 1, 'Gon_Freeces', -69.803, 1366.01, 1080.21, 177.616, 989.805, -828.653, 95.4686, 28.638, -68.8466, 1351.2, 1080.21, 976.934, -825.207, 96.0761, 26.7609, 70000, 7, 573, 1, 21, 6, 1, 158, 50, 'Giorgi_Cxvitava', 'None', 'None'),
(22, 1, 'Luka_Shaqarashvili', -69.803, 1366.01, 1080.21, 177.616, 937.822, -848.736, 93.5772, 25.7119, -68.8466, 1351.2, 1080.21, 942.983, -839.929, 94.0741, 30.0947, 70000, 7, 609, 1, 22, 6, 1, 160, 51, 'None', 'None', 'Dato_Zoidze'),
(23, 1, 'Giorgi_Agmashenebeli', -69.803, 1366.01, 1080.21, 177.616, 724.714, -999.386, 52.7344, 331.566, -68.8466, 1351.2, 1080.21, 725.314, -995.132, 52.3006, 58.5525, 70000, 7, 1022, 1, 23, 6, 1, 162, 52, 'None', 'None', 'None'),
(24, 0, 'The State', -69.803, 1366.01, 1080.21, 177.616, 700.257, -1060.34, 49.4217, 60.7153, -68.8466, 1351.2, 1080.21, 686.186, -1072.69, 49.2089, 60.5646, 70000, 7, 0, 1, 24, 6, 1, 164, 53, 'Amiran_Gabidzashvil', 'Giorgi_Chimento', 'None'),
(25, 1, 'Michael_Robinson', -69.803, 1366.01, 1080.21, 177.616, 646.032, -1117.38, 44.207, 47.6487, -68.8466, 1351.2, 1080.21, 634.104, -1119.68, 45.2318, 42.8674, 70000, 7, 583, 1, 25, 6, 0, 166, 54, 'Patiko_Robinson', 'Brad_Stoker', 'None'),
(26, 1, 'George_Willsone', -69.803, 1366.01, 1080.21, 177.616, 416.761, -1154.12, 76.6876, 146.105, -68.8466, 1351.2, 1080.21, 404.878, -1155.04, 77.1799, 149.661, 70000, 7, 7, 1, 26, 6, 0, 168, 55, 'Eazy_Accardo', 'None', 'None'),
(27, 1, 'Xashlam_Costello', -69.803, 1366.01, 1080.21, 177.616, 1442.61, -628.832, 95.7186, 180.136, -68.8466, 1351.2, 1080.21, 1460.35, -634.918, 95.5015, 179.834, 70000, 7, 641, 1, 27, 6, 1, 170, 56, 'None', 'None', 'None'),
(28, 1, 'Liam_Chaki', -69.803, 1366.01, 1080.21, 177.616, 1112.64, -742.112, 100.133, 88.686, -68.8466, 1351.2, 1080.21, 1105.8, -732.28, 100.589, 91.1525, 70000, 7, 442, 1, 28, 6, 1, 172, 57, 'None', 'None', 'None'),
(29, 1, 'Tokaa_Gruzinski', -69.803, 1366.01, 1080.21, 177.616, 423.91, 2536.64, 16.1484, 293.815, -68.8466, 1351.2, 1080.21, 932.041, -856.854, 93.1396, 25.9149, 70000, 7, 294, 1, 29, 6, 0, 174, 58, 'Nodo_Axvlediani', 'None', 'None'),
(30, 1, 'Zarbo_Ancelotti', 140.262, 1385.13, 1088.37, 180.238, 1332.17, -633.485, 109.135, 18.1027, 140.28, 1365.92, 1083.86, 1355.02, -630.637, 108.792, 19.5848, 150000, 13, 1817, 4, 30, 5, 1, 176, 59, 'Jerry_Ancelotti', 'Gio_Baxutashvili', 'Luka_Wifiani'),
(31, 1, 'Nika_Smith', 140.262, 1385.13, 1088.37, 180.238, 835.952, -894.855, 68.7689, 325.309, 140.28, 1365.92, 1083.86, 833.043, -889.135, 68.4326, 326.152, 150000, 13, 332, 4, 31, 5, 0, 178, 60, 'Dito_Xucishvilii', 'Ziraka_Smith', 'Gio_Ziraka'),
(32, 1, 'Mishka_Lanski', 2337.43, -1138.73, 1054.3, 90.5195, 827.794, -857.989, 70.3308, 200.956, 2324.43, -1149.55, 1050.71, 832.322, -858.972, 69.5895, 199.926, 125000, 11, 766, 3, 32, 12, 1, 180, 61, 'Mark_Tobson', 'David_Bagrationi', 'None'),
(33, 1, 'Vepxo_Sardalashvili', 140.262, 1385.13, 1088.37, 180.238, 470.762, -1163.56, 67.2179, 195.339, 140.28, 1365.92, 1083.86, 473.43, -1171.66, 64.4344, 198.73, 200000, 13, 1123, 4, 33, 5, 0, 182, 62, 'None', 'Nika_Khukhua', 'Frezz_Nebieridze'),
(34, 0, 'The State', 2337.43, -1138.73, 1054.3, 90.5195, 1763.54, 63.2509, 36.6806, 332.055, 2324.43, -1149.55, 1050.71, 228.229, -1398.84, 51.2445, 54.7985, 1500000, 11, 1833, 3, 34, 12, 1, 184, 63, 'Aleks_Johnos', 'Takara_Cuka', 'None'),
(35, 1, 'Giorgi_Kevlishvili', 2337.43, -1138.73, 1054.3, 90.5195, 977.507, -771.718, 112.203, 359.358, 2324.43, -1149.55, 1050.71, 961.643, -760.209, 109.739, 97.3634, 125000, 11, 1019, 3, 35, 12, 0, 186, 64, 'Rick_Chimento', 'None', 'None'),
(36, 1, 'Frank_Kamikaze', 236.931, 1081.27, 1087.82, 88.6236, 1496.93, -687.893, 95.5633, 179.353, 234.144, 1063.72, 1084.21, 1515.59, -694.697, 94.4085, 89.8454, 250000, 15, 2070, 5, 36, 6, 0, 188, 65, 'None', 'None', 'None'),
(37, 1, 'Kaci_Xinkalshi', 236.931, 1081.27, 1087.82, 88.6236, 1298.54, -797.986, 84.1406, 183.251, 234.144, 1063.72, 1084.21, 1249.14, -804.685, 83.8007, 182.145, 250000, 15, 1795, 5, 37, 6, 1, 190, 66, 'Artioma_Sphinx', 'Nini_Winchester', 'Tonney_Moralez'),
(38, 1, 'Annie_Ito', 236.931, 1081.27, 1087.82, 88.6236, 251.484, -1220.18, 76.1024, 217.303, 234.144, 1063.72, 1084.21, 256.702, -1225.14, 74.0984, 218.851, 250000, 15, 2085, 5, 39, 6, 0, 192, 67, 'Gocha_Maisuradze', 'Niko_Chaladze', 'None'),
(39, 1, 'Nick_Beberi', 236.931, 1081.27, 1087.82, 88.6236, 253.189, -1270.01, 74.4307, 33.823, 234.144, 1063.72, 1084.21, 244.965, -1265.13, 68.6089, 129.399, 125000, 15, 2115, 5, 40, 6, 0, 194, 68, 'Andrex_Beberi', 'None', 'None'),
(40, 1, 'Giorgi_Qucnashvili', 236.931, 1081.27, 1087.82, 88.6236, 298.901, -1338.47, 53.4415, 34.7941, 234.144, 1063.72, 1084.21, 289.244, -1330.22, 53.1223, 34.8256, 250000, 15, 2055, 5, 41, 6, 0, 196, 69, 'Nika_Papiashvili', 'Kaxuna_Jatiashvili', 'None'),
(41, 1, 'Patex_Smith', 236.931, 1081.27, 1087.82, 88.6236, 254.433, -1367.2, 53.1094, 307.429, 234.144, 1063.72, 1084.21, 251.501, -1358.75, 52.7689, 307.438, 250000, 15, 690, 5, 42, 6, 0, 198, 70, 'None', 'Futkar_Pchiolkini', 'LERI_Smith'),
(42, 1, 'Leko_Mchedlishvili', -50.057, 1399.55, 1084.43, 359.223, 1107.57, -316.681, 74.7422, 174.153, -42.5811, 1405.47, 1084.43, 906.746, -1824.44, 12.2262, 265.637, 90000, 9, 1336, 2, 43, 8, 1, 200, 71, 'None', 'None', 'None'),
(43, 1, 'Luka_Veshagaa', -50.057, 1399.55, 1084.43, 359.223, 1544.75, -10.0935, 22.076, 172.736, -42.5811, 1405.47, 1084.43, 917.958, -1825.57, 12.1786, 263.721, 90000, 9, 765, 2, 44, 8, 1, 202, 72, 'Futkar_Pchiolkini', 'None', 'Nikusha_Var'),
(44, 1, 'Matte_Starovsky', -50.057, 1399.55, 1084.43, 359.223, 1575.36, 1.09236, 22.3199, 172.335, -42.5811, 1405.47, 1084.43, 929.277, -1826.83, 12.25, 263.664, 90000, 9, 379, 2, 45, 8, 1, 204, 73, 'None', 'None', 'Nugo_Mesxi'),
(45, 0, 'The State', -50.057, 1399.55, 1084.43, 359.223, 961.189, -1823.98, 13.3276, 164.824, -42.5811, 1405.47, 1084.43, 955.155, -1831.06, 12.2566, 257.072, 90000, 9, 243, 2, 46, 8, 1, 206, 74, 'None', 'Mkvleli_Mama', 'None'),
(46, 0, 'The State', -50.057, 1399.55, 1084.43, 359.223, 972.575, -1826.79, 13.3334, 164.639, -42.5811, 1405.47, 1084.43, 967.498, -1834, 12.2588, 255.569, 90000, 9, 9, 2, 47, 8, 1, 208, 75, 'Dato_Baladze', 'Colorone_Carlos', 'None'),
(47, 1, 'Babu_Henderson', -50.057, 1399.55, 1084.43, 359.223, 983.834, -1829.56, 13.3296, 165.019, -42.5567, 1405.47, 1084.43, 979.937, -1836.77, 12.077, 253.991, 90000, 9, 1026, 2, 48, 8, 1, 210, 76, 'Jino_Suprano', 'Gio_Navrozashvili', 'None'),
(48, 1, 'Sebastian_Winstonss', 2311.3, -1138.77, 1054.3, 269.856, 1440.01, -926.04, 39.6477, 170.182, 2324.47, -1149.55, 1050.71, 1452.7, -928.416, 36.9021, 175.145, 125000, 11, 1371, 3, 49, 12, 1, 212, 77, 'None', 'Sandro_Vinchenco', 'None'),
(49, 1, 'Ernestiko_Delacruz', 2311.3, -1138.77, 1054.3, 269.856, 1410.41, -920.759, 38.4219, 171.057, 2324.47, -1149.55, 1050.71, 1421.88, -924.049, 35.6302, 166.639, 125000, 11, 1514, 3, 50, 12, 1, 214, 78, 'Markoz_Rasala', 'Giorgi_Muzashvili', 'None'),
(50, 1, 'Noah_Powell', 2311.3, -1138.77, 1054.3, 269.856, 1377.8, -1753.05, 14.1406, 88.8779, 2324.47, -1149.55, 1050.71, 645.297, -1616.75, 14.7865, 181.575, 125000, 11, 999, 3, 51, 12, 1, 216, 79, 'None', 'Jemali_Abuladze', 'Aleksandre_Moyaa'),
(51, 1, 'Wupo_Shelby', 417.526, 2536.5, 10, 268.731, 657.228, -1652.6, 15.4062, 89.4161, 422.573, 2536.52, 10, 646.005, -1654.59, 14.6036, 185.825, 50000, 5, 430, 0, 52, 10, 1, 218, 80, 'Colt_Makarov', 'Alexander_Shelby', ''),
(52, 0, 'The State', 417.526, 2536.5, 10, 268.731, 692.983, -1602.77, 15.0469, 357.621, 422.573, 2536.52, 10, 686.567, -1594.09, 13.6814, 270.478, 50000, 5, 0, 0, 53, 10, 1, 220, 81, 'Tsartsidze_Saba', 'Lumix_Kashiwagi', 'None'),
(53, 0, 'The State', 417.526, 2536.5, 10, 268.731, 697.28, -1627.02, 3.74917, 271.4, 422.573, 2536.52, 10, 706.485, -1627.28, 3.01023, 177.824, 50000, 5, 0, 0, 54, 10, 1, 222, 82, 'None', 'Saba_Varsimashvili', 'None'),
(54, 0, 'The State', 417.526, 2536.5, 10, 268.731, 693.757, -1645.86, 4.09375, 269.082, 422.573, 2536.52, 10, 706.707, -1642.76, 3.00752, 180.865, 50000, 5, 0, 0, 55, 10, 1, 224, 83, 'None', 'None', 'None'),
(55, 1, 'Maria_Callaway', -47.8123, 1405.68, 1084.43, 357.823, 824.597, -1424.2, 14.4989, 358.637, -42.5567, 1405.47, 1084.43, 824.167, -1411.62, 13.0331, 271.089, 90000, 9, 822, 2, 56, 8, 1, 226, 84, 'Saba_Saladze', 'Giorgi_Shavshishvil', 'Katy_Sapoo'),
(56, 1, 'Gigi_Sefiashvil', -47.8123, 1405.68, 1084.43, 357.823, 852.349, -1423.27, 14.1365, 356.958, -42.5567, 1405.47, 1084.43, 844.667, -1419.79, 12.3707, 358.535, 90000, 9, 775, 2, 57, 8, 1, 228, 85, 'irakli_qardava', 'None', 'None'),
(57, 1, 'Xvicha_Goglasvilii', -47.8123, 1405.68, 1084.43, 357.823, 880.121, -1424.82, 14.4844, 359.46, -42.5567, 1405.47, 1084.43, 879.721, -1411.75, 12.6749, 271.506, 90000, 9, 1293, 2, 58, 8, 0, 230, 86, 'None', 'None', 'None'),
(58, 0, 'The State', -68.7928, 1364.25, 1080.21, 178.072, 900.215, -1447.43, 14.3705, 90.134, -68.8005, 1351.2, 1080.21, 904.86, -1455.22, 12.7586, 270.142, 70000, 7, 0, 1, 59, 6, 1, 232, 87, 'Giorgi_Bediaa', 'Alex_Desouza', 'Kevin_Autumn'),
(59, 0, 'The State', -47.8123, 1405.68, 1084.43, 357.823, 898.539, -1445.64, 14.3646, 357.203, -42.5567, 1405.47, 1084.43, 890.878, -1442.57, 12.894, 2.51558, 90000, 9, 0, 2, 60, 8, 1, 234, 88, 'Kalduna_Gruzinski', 'Leo_Tsintskaladze', 'Bero_Beberski'),
(60, 0, 'The State', -68.7928, 1364.25, 1080.21, 178.072, 1778.98, 102.758, 34.9326, 178.336, -68.8005, 1351.2, 1080.21, 890.572, -1478.01, 12.8041, 180.19, 1000000, 7, 0, 1, 61, 6, 1, 236, 89, 'Masato_Kawabata', 'None', 'None'),
(61, 0, 'The State', -47.8123, 1405.68, 1084.43, 357.823, 813.693, -1456.62, 14.2249, 85.4023, -42.5567, 1405.47, 1084.43, 807.916, -1463.84, 12.8553, 86.0119, 90000, 9, 1476, 2, 62, 8, 1, 238, 90, 'George_Sologa', 'None', 'None'),
(62, 1, 'Karuma_Goglasvilii', -47.8123, 1405.68, 1084.43, 357.823, 901.613, -1514.66, 14.3639, 177.526, -42.5567, 1405.47, 1084.43, 894.174, -1519.41, 12.7695, 183.692, 90000, 9, 1398, 2, 63, 8, 1, 240, 91, 'None', 'Sonika_Sonika', 'None'),
(63, 0, 'The State', -68.7928, 1364.25, 1080.21, 178.072, 903.398, -1512.91, 14.363, 263.317, -68.8005, 1351.2, 1080.21, 906.761, -1505.22, 12.9431, 270.194, 70000, 7, 0, 1, 64, 6, 1, 242, 92, 'Baduka_Esebua', 'Samuel_Grigorovi', 'John_Ramas'),
(64, 1, 'Tokka_Cosstello', 2311.3, -1138.77, 1054.3, 269.856, 1523.93, 27.529, 24.1494, 19.7273, 2324.47, -1149.55, 1050.71, 590.79, -1243.15, 17.5215, 20.7365, 125000, 11, 1209, 3, 65, 12, 1, 244, 93, 'None', 'Cj_Brown', 'Kevin_Kallashnikov'),
(65, 1, 'Xecu_Jigitoz', 2311.3, -1138.77, 1054.3, 269.856, 597.239, -1249.49, 18.3013, 14.4817, 2324.47, -1149.55, 1050.71, 595.595, -1241.13, 17.6248, 22.7275, 125000, 11, 1194, 3, 66, 12, 1, 246, 94, 'Gio_Gilmore', 'Al_Capone', 'None'),
(66, 1, 'Buba_Castello', 236.931, 1081.27, 1087.82, 88.6236, 952.536, -909.111, 45.7656, 181.753, 234.144, 1063.72, 1084.21, 953.807, -918.478, 44.467, 181.627, 250000, 15, 1404, 5, 67, 6, 1, 248, 95, 'None', 'None', 'Giggsy_Castello'),
(67, 1, 'Kvacho_Desperez', -68.7928, 1364.25, 1080.21, 178.072, 1242.26, -1100.05, 27.9766, 268.867, -68.8005, 1351.2, 1080.21, 1247, -1107.84, 25.0661, 271.195, 70000, 7, 287, 1, 68, 6, 1, 250, 96, 'Sani_Montana', 'None', 'None'),
(68, 0, 'The State', -68.7928, 1364.25, 1080.21, 178.072, 1846.05, 83.0987, 35.8884, 88.4526, -68.8005, 1351.2, 1080.21, 1277.8, -1098.9, 25.6156, 91.2119, 2000000, 7, 0, 1, 69, 6, 1, 252, 97, 'None', 'Van_Helsing', 'Kosta_Vatsadze'),
(69, 1, 'Freddy_Coloris', -68.7928, 1364.25, 1080.21, 178.072, 1241.95, -1075.9, 31.5547, 268.322, -68.8005, 1351.2, 1080.21, 1248.11, -1068.04, 28.697, 270.302, 70000, 7, 576, 1, 70, 6, 1, 254, 98, 'Gangster_Nikaa', 'None', 'Tiktakich_Dequarto'),
(70, 1, 'Andria_Merebashvili', -68.7928, 1364.25, 1080.21, 178.072, 1285.26, -1066.69, 31.6789, 89.3674, -68.8005, 1351.2, 1080.21, 1278.99, -1059.45, 29.1482, 88.4246, 70000, 7, 420, 1, 71, 6, 1, 256, 99, 'None', 'Dato_Gorgodze', 'Johan_Montana'),
(71, 1, 'Nika_Tsotseria', -68.7928, 1364.25, 1080.21, 178.072, 1564.6, 2565.43, 10.8265, 90.1443, -68.8005, 1351.2, 1080.21, 1177.7, -1067.41, 28.4991, 90.1435, 100000, 7, 633, 1, 72, 6, 1, 258, 100, 'Zuka_Machaidze', 'Trayone_Clowton', 'None'),
(72, 1, 'Zuka_Pocxve', -68.7928, 1364.25, 1080.21, 178.072, 1141.81, -1069.32, 31.7656, 269.618, -68.8005, 1351.2, 1080.21, 1147.02, -1061.35, 29.2742, 268.791, 70000, 7, 805, 1, 73, 6, 1, 260, 101, 'Patoie_Castellano', 'None', 'None'),
(73, 1, 'Andro_Kalichava', -68.7928, 1364.25, 1080.21, 178.072, 1183.48, -1099.65, 28.2578, 89.6191, -68.8005, 1351.2, 1080.21, 1176.3, -1108.22, 24.6527, 92.5675, 70000, 7, 1094, 1, 74, 6, 1, 262, 102, 'Benito_Musolini', 'None', 'None'),
(74, 1, 'Giorgi_Jongsuk', -68.7928, 1364.25, 1080.21, 178.072, 1142.12, -1093.53, 28.1875, 268.623, -68.8005, 1351.2, 1080.21, 1147.02, -1101.37, 25.257, 272.167, 70000, 7, 1029, 1, 75, 6, 0, 264, 103, 'None', 'Oto_Pxaladze', 'None'),
(75, 0, 'The State', -47.8123, 1405.68, 1084.43, 357.823, 893.673, -1635.7, 14.9297, 178.849, -42.5567, 1405.47, 1084.43, 892.426, -1657.7, 13.1183, 180.526, 90000, 9, 1377, 2, 76, 8, 1, 266, 104, 'Sasha_Belov', 'William_Smith', 'None'),
(76, 1, 'Vitto_Scaleta', -47.8123, 1405.68, 1084.43, 357.823, 865.267, -1633.85, 14.9297, 180.306, -42.5567, 1405.47, 1084.43, 870.112, -1658.07, 13.1184, 178.933, 90000, 9, 870, 2, 77, 8, 1, 268, 105, 'Jack_Johnson', 'None', 'None'),
(77, 1, 'Tonny_Lanski', 2311.3, -1138.77, 1054.3, 269.856, 980.574, -677.211, 121.976, 181.34, 2324.47, -1149.55, 1050.71, 792.209, -1761.81, 12.9791, 85.9081, 125000, 11, 1008, 3, 78, 12, 0, 270, 106, 'Tommas_Shellby', 'Vito_Korleone', 'None'),
(78, 0, 'The State', 417.526, 2536.5, 10, 268.731, 769.228, -1745.77, 13.0773, 90.1153, 422.573, 2536.52, 10, 762.172, -1747.84, 12.1983, 359.356, 50000, 5, 0, 0, 79, 10, 1, 272, 107, 'Maik_Scofild', 'None', 'None'),
(79, 1, 'Zura_Nikabadze', 417.526, 2536.5, 10, 268.731, 769.228, -1696.5, 5.15542, 90.1411, 422.573, 2536.52, 10, 761.963, -1694.53, 4.27873, 0.893022, 50000, 5, 485, 0, 80, 10, 1, 274, 108, 'Gega_Kallashnikov', 'None', 'None'),
(80, 1, 'Labbsky', 417.526, 2536.5, 10, 268.731, 2148.95, -1484.92, 26.624, 88.3934, 422.573, 2536.52, 10, 758.851, -1656.28, 4.15221, 2.81875, 50000, 5, 175, 0, 81, 10, 1, 276, 109, 'Ben_Azelart', 'Chester_Goldmeno', 'None'),
(81, 1, 'Trayy_Axuitelni', 417.526, 2536.5, 10, 268.731, 2149.85, -1433.7, 26.0703, 89.653, 422.573, 2536.52, 10, 758.393, -1605.26, 12.8522, 0.747012, 50000, 5, 710, 0, 82, 10, 1, 278, 110, 'Tommy_Milner', 'Gabriel_Mitaishvili', 'None'),
(82, 1, 'Saba_Loladze', -47.8123, 1405.68, 1084.43, 357.823, 841.194, -1471.35, 14.3129, 175.564, -42.5567, 1405.47, 1084.43, 848.643, -1476.84, 12.7711, 175.731, 90000, 9, 1494, 2, 83, 8, 1, 280, 111, 'None', 'None', 'Aloiani_Gugaa'),
(83, 0, 'The State', 2311.3, -1138.77, 1054.3, 269.856, 1692.59, 134.699, 33.0737, 9.51529, 2324.47, -1149.55, 1050.71, 1472.19, -1055.17, 23.3954, 1.82911, 1000000, 11, 11, 3, 84, 12, 1, 282, 112, 'None', 'None', 'Anri_Kallashnikov'),
(84, 1, 'Cigo_Pikanto', 2311.3, -1138.77, 1054.3, 269.856, 691.578, -1275.85, 13.5607, 279.483, 2324.47, -1149.55, 1050.71, 1462.85, -1043.74, 23.3961, 271.505, 125000, 11, 1217, 3, 85, 12, 0, 284, 113, 'Stiven_Kallasha', 'Dachi_Iriaulski', 'Nick_Kneeper'),
(85, 1, 'Aleko_Xuc', -47.8123, 1405.68, 1084.43, 357.823, 1333.44, -1864.38, 13.5469, 336.014, -42.5567, 1405.47, 1084.43, 1334.36, -1861.54, 13.1141, 246.822, 90000, 9, 738, 2, 86, 8, 1, 286, 114, 'Vaja_Vaja', 'Nelson_Mondela', 'Luka_Max'),
(86, 1, 'Domenzo_Kalashov', 417.526, 2536.5, 10, 268.731, 662.433, -1466.77, 14.8516, 268.145, 422.573, 2536.52, 10, 670.139, -1466.58, 14.4156, 178.69, 50000, 5, 585, 0, 87, 10, 1, 288, 115, 'Vala_Dequartoo', 'None', 'None'),
(87, 1, 'Temo_Browns', 417.526, 2536.5, 10, 268.731, 662.433, -1487.61, 14.8516, 268.211, 422.573, 2536.52, 10, 669.989, -1486.71, 14.4213, 182.293, 50000, 5, 570, 0, 88, 10, 0, 290, 116, 'None', 'None', 'Aleko_Darchidze'),
(88, 1, 'Green_Doom', 417.526, 2536.5, 10, 268.731, 662.432, -1513.91, 14.8516, 268.724, 422.573, 2536.52, 10, 669.617, -1514.72, 14.423, 182.39, 50000, 5, 713, 0, 89, 10, 1, 292, 117, 'Saba_Nasyidashvili', 'Screaminside_Olympi', 'None'),
(89, 1, 'Oxy_Inspire', 417.526, 2536.5, 10, 268.731, 662.432, -1534.78, 14.8516, 269.119, 422.573, 2536.52, 10, 670.174, -1533.34, 14.4085, 181.419, 50000, 5, 404, 0, 90, 10, 1, 294, 118, 'Gorge_Us', 'None', 'None'),
(90, 1, 'Gia_Maccoll', 2311.3, -1138.77, 1054.3, 269.856, 790.898, -1661.14, 13.4845, 176.487, 2324.47, -1149.55, 1050.71, 794.177, -1667.86, 13.0756, 88.0715, 125000, 11, 930, 3, 91, 12, 1, 296, 119, 'None', 'None', 'Akula_Senakski'),
(91, 1, 'Ana_Wright', 417.526, 2536.5, 10, 268.731, 794.865, -1692.1, 14.4633, 0.526373, 422.573, 2536.52, 10, 803.534, -1691.68, 13.1183, 178.272, 50000, 5, 20, 0, 92, 10, 1, 298, 120, 'Lukas_Costtelo', 'None', 'Georgi_Matador'),
(92, 1, 'Fake_Mad', 417.526, 2536.5, 10, 268.731, 2146.71, -1470.38, 26.0426, 269.225, 422.573, 2536.52, 10, 803.162, -1706.73, 13.1041, 178.676, 50000, 5, 345, 0, 93, 10, 0, 300, 121, 'Chiora', 'Gela_Maxaradze', 'None'),
(93, 1, 'Rico_Rodriguez', 2311.3, -1138.77, 1054.3, 269.856, 263.783, 2895.58, 10.5314, 269.02, 2324.47, -1149.55, 1050.71, 803.197, -1731.89, 13.1174, 180, 125000, 11, 1812, 3, 94, 12, 0, 302, 122, 'None', 'Kenn_Westbrook', 'Data_Qucniashvili'),
(94, 1, 'Aleksandre_Peradze', -68.7928, 1364.25, 1080.21, 178.072, 1377.71, -1797.99, 13.4955, 266.569, -68.8005, 1351.2, 1080.21, 1382.97, -1799.12, 13.1143, 181.576, 70000, 7, 344, 1, 95, 6, 0, 304, 123, 'None', 'Saul_Montana', 'Lucas_Wonders'),
(95, 0, 'The State', -68.7928, 1364.25, 1080.21, 178.072, -910.902, 2685.97, 42.3703, 267.381, -68.8005, 1351.2, 1080.21, 1382.81, -1788.98, 13.1175, 178.794, 70000, 7, 0, 1, 96, 6, 1, 306, 124, 'Leon_Galski', 'Gen_skarpion', 'None'),
(96, 0, 'The State', 417.526, 2536.5, 10, 268.731, 1034.89, -813.156, 101.852, 17.1023, 422.573, 2536.52, 10, 1027.22, -800.822, 101.408, 23.1366, 50000, 5, 0, 0, 97, 10, 1, 308, 125, 'None', 'None', 'Scarface_Unstoppabl'),
(97, 0, 'The State', 417.526, 2536.5, 10, 268.731, 352.419, -1197.92, 76.5156, 38.0261, 422.573, 2536.52, 10, 347.123, -1195.91, 76.0865, 40.7181, 50000, 5, 5, 0, 98, 10, 1, 310, 126, 'Algori_Batonishvili', 'None', 'None'),
(98, 0, 'The State', 417.526, 2536.5, 10, 268.731, 142.638, -1470.38, 25.2109, 317.257, 422.573, 2536.52, 10, 148.387, -1467.03, 24.9483, 49.1916, 50000, 5, 0, 0, 99, 10, 1, 312, 127, 'None', 'None', 'None'),
(99, 0, 'The State', 236.931, 1081.27, 1087.82, 88.6236, 290.931, -1872.78, 3.83322, 180.385, 234.144, 1063.72, 1084.21, 322.294, -1765.4, 4.2497, 178.947, 250000, 15, 2505, 5, 100, 6, 1, 314, 128, 'Patex_Corleone', 'None', 'None'),
(100, 0, 'The State', -69.803, 1366.01, 1080.21, 177.616, 317.442, -1755.77, 4.51695, 181.178, -68.8466, 1351.2, 1080.21, 0, 0, 0, 0, 70000, 7, 0, 1, 101, 6, 1, 316, 129, 'Suxo_Ganabski', 'Alexis_Noop', 'None'),
(101, 1, 'Giovanni', 236.931, 1081.27, 1087.82, 88.6236, 1695.19, 98.588, 32.8284, 179.158, 234.144, 1063.72, 1084.21, 0, 0, 0, 0, 2000000, 15, 1710, 5, 102, 6, 1, 318, 130, 'Red_Bull', 'Irakli_Yorshia', 'Eazy_Rolex');

-- --------------------------------------------------------

--
-- Table structure for table `ipaddress`
--

CREATE TABLE `ipaddress` (
  `IPAddress` varchar(127) CHARACTER SET cp1251 COLLATE cp1251_bin NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `ipban`
--

CREATE TABLE `ipban` (
  `Admin` varchar(128) CHARACTER SET cp1251 COLLATE cp1251_general_ci NOT NULL,
  `IP` varchar(128) CHARACTER SET cp1251 COLLATE cp1251_general_ci NOT NULL,
  `Days` int(11) NOT NULL,
  `Data` varchar(32) CHARACTER SET cp1251 COLLATE cp1251_general_ci NOT NULL,
  `Time` varchar(32) CHARACTER SET cp1251 COLLATE cp1251_general_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `kinkla`
--

CREATE TABLE `kinkla` (
  `IP` varchar(127) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `mansion`
--

CREATE TABLE `mansion` (
  `ID` int(11) NOT NULL,
  `Owned` int(11) NOT NULL,
  `Name` varchar(25) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `Type` int(11) NOT NULL,
  `Price` int(11) NOT NULL,
  `Balance` int(11) NOT NULL,
  `EntranceX` float NOT NULL,
  `EntranceY` float NOT NULL,
  `EntranceZ` float NOT NULL,
  `ExitX` float NOT NULL,
  `ExitY` float NOT NULL,
  `ExitZ` float NOT NULL,
  `ExitPosX` float NOT NULL,
  `ExitPosY` float NOT NULL,
  `ExitPosZ` float NOT NULL,
  `ExitPosC` float NOT NULL,
  `Car1` int(11) NOT NULL,
  `Car2` int(11) NOT NULL,
  `Car3` int(11) NOT NULL,
  `Car4` int(11) NOT NULL,
  `Car5` int(11) NOT NULL,
  `Car6` int(11) NOT NULL,
  `Car7` int(11) NOT NULL,
  `Car1PosX` float NOT NULL,
  `Car1PosY` float NOT NULL,
  `Car1PosZ` float NOT NULL,
  `Car1PosC` float NOT NULL,
  `Car2PosX` float NOT NULL,
  `Car2PosY` float NOT NULL,
  `Car2PosZ` float NOT NULL,
  `Car2PosC` float NOT NULL,
  `Car3PosX` float NOT NULL,
  `Car3PosY` float NOT NULL,
  `Car3PosZ` float NOT NULL,
  `Car3PosC` float NOT NULL,
  `Car4PosX` float NOT NULL,
  `Car4PosY` float NOT NULL,
  `Car4PosZ` float NOT NULL,
  `Car4PosC` float NOT NULL,
  `Car5PosX` float NOT NULL,
  `Car5PosY` float NOT NULL,
  `Car5PosZ` float NOT NULL,
  `Car5PosC` float NOT NULL,
  `Car6PosX` float NOT NULL,
  `Car6PosY` float NOT NULL,
  `Car6PosZ` float NOT NULL,
  `Car6PosC` float NOT NULL,
  `Car7PosX` float NOT NULL,
  `Car7PosY` float NOT NULL,
  `Car7PosZ` float NOT NULL,
  `Car7PosC` float NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `mtavari`
--

CREATE TABLE `mtavari` (
  `IP` varchar(127) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `promocode`
--

CREATE TABLE `promocode` (
  `PromoCodeID` int(11) NOT NULL,
  `PromoCodeName` varchar(32) CHARACTER SET cp1251 COLLATE cp1251_general_ci NOT NULL,
  `PromoCodeCash` int(11) NOT NULL,
  `PromoCodeLevel` int(11) NOT NULL,
  `PromoCodeUsed` int(11) NOT NULL,
  `PromoCodeMaxUsed` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `radars`
--

CREATE TABLE `radars` (
  `RadarID` int(11) NOT NULL,
  `RadarPosX` float NOT NULL,
  `RadarPosY` float NOT NULL,
  `RadarPosZ` float NOT NULL,
  `RadarPosC` float NOT NULL,
  `RadarSpeed` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `staff`
--

CREATE TABLE `staff` (
  `ID` int(11) NOT NULL,
  `Name` varchar(128) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `IPAddress` varchar(16) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `Developer` varchar(128) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `Data` varchar(13) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `Time` varchar(11) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `Online` int(11) NOT NULL,
  `Admin` int(11) NOT NULL,
  `Support` int(11) NOT NULL,
  `AnswerYes` int(11) NOT NULL,
  `AnswerNo` int(11) NOT NULL,
  `Mute` int(11) NOT NULL,
  `Kick` int(11) NOT NULL,
  `Warn` int(11) NOT NULL,
  `Ban` int(11) NOT NULL,
  `IPBan` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- --------------------------------------------------------

--
-- Table structure for table `testers`
--

CREATE TABLE `testers` (
  `ID` int(11) NOT NULL,
  `Name` varchar(128) NOT NULL,
  `Data` varchar(45) CHARACTER SET cp1251 COLLATE cp1251_bin NOT NULL,
  `CMD` varchar(45) CHARACTER SET cp1251 COLLATE cp1251_bin NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

--
-- Dumping data for table `testers`
--

INSERT INTO `testers` (`ID`, `Name`, `Data`, `CMD`) VALUES
(1, 'Keanu_Reeves', '24/3/2024', 'makesupport'),
(2, 'BAGRATA', '26/5/2024', 'makeleader'),
(3, 'Helados_Sawyer', '27/5/2024', 'setgang'),
(4, 'Cigo_Pikanto', '27/5/2024', 'setmafia');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `accounts`
--
ALTER TABLE `accounts`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `anticheat_settings`
--
ALTER TABLE `anticheat_settings`
  ADD UNIQUE KEY `ac_code` (`ac_code`);

--
-- Indexes for table `autosalon`
--
ALTER TABLE `autosalon`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `autosalonlimit`
--
ALTER TABLE `autosalonlimit`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `bizz`
--
ALTER TABLE `bizz`
  ADD PRIMARY KEY (`bID`);

--
-- Indexes for table `carkeys`
--
ALTER TABLE `carkeys`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `cars`
--
ALTER TABLE `cars`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `casino`
--
ALTER TABLE `casino`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `family`
--
ALTER TABLE `family`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `greenzone`
--
ALTER TABLE `greenzone`
  ADD PRIMARY KEY (`ZoneID`);

--
-- Indexes for table `house`
--
ALTER TABLE `house`
  ADD PRIMARY KEY (`HouseID`);

--
-- Indexes for table `mansion`
--
ALTER TABLE `mansion`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `promocode`
--
ALTER TABLE `promocode`
  ADD PRIMARY KEY (`PromoCodeID`);

--
-- Indexes for table `radars`
--
ALTER TABLE `radars`
  ADD PRIMARY KEY (`RadarID`);

--
-- Indexes for table `staff`
--
ALTER TABLE `staff`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `testers`
--
ALTER TABLE `testers`
  ADD PRIMARY KEY (`ID`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `accounts`
--
ALTER TABLE `accounts`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `autosalon`
--
ALTER TABLE `autosalon`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=33;

--
-- AUTO_INCREMENT for table `autosalonlimit`
--
ALTER TABLE `autosalonlimit`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- AUTO_INCREMENT for table `bizz`
--
ALTER TABLE `bizz`
  MODIFY `bID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=15;

--
-- AUTO_INCREMENT for table `carkeys`
--
ALTER TABLE `carkeys`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `cars`
--
ALTER TABLE `cars`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `casino`
--
ALTER TABLE `casino`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- AUTO_INCREMENT for table `family`
--
ALTER TABLE `family`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `greenzone`
--
ALTER TABLE `greenzone`
  MODIFY `ZoneID` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `house`
--
ALTER TABLE `house`
  MODIFY `HouseID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=102;

--
-- AUTO_INCREMENT for table `mansion`
--
ALTER TABLE `mansion`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `promocode`
--
ALTER TABLE `promocode`
  MODIFY `PromoCodeID` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `radars`
--
ALTER TABLE `radars`
  MODIFY `RadarID` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `staff`
--
ALTER TABLE `staff`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `testers`
--
ALTER TABLE `testers`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;

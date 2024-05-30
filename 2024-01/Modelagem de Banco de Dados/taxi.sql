-- MariaDB dump 10.19  Distrib 10.11.6-MariaDB, for debian-linux-gnu (x86_64)
--
-- Host: localhost    Database: taxi
-- ------------------------------------------------------
-- Server version	10.11.6-MariaDB-0+deb12u1

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `cliente`
--

DROP TABLE IF EXISTS `cliente`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `cliente` (
  `cliente_id` int(11) NOT NULL AUTO_INCREMENT,
  `nome` varchar(30) NOT NULL,
  `cpf` varchar(20) NOT NULL,
  PRIMARY KEY (`cliente_id`),
  UNIQUE KEY `cpf` (`cpf`)
) ENGINE=InnoDB AUTO_INCREMENT=1798 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `cliente`
--

LOCK TABLES `cliente` WRITE;
/*!40000 ALTER TABLE `cliente` DISABLE KEYS */;
INSERT INTO `cliente` VALUES
(1532,'Asdrubal','448.754.253-65'),
(1755,'Bento','259.345.123-01'),
(1780,'Antonio','984.554.917-72'),
(1781,'Quincas','546.373.762-02'),
(1794,'Borbas','231.191.577-11'),
(1795,'João da Silva','111.222.333.44'),
(1796,'Maria dos Santos','222.111.444-33'),
(1797,'Pedro Pereira','444.111.22-33');
/*!40000 ALTER TABLE `cliente` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `corrida`
--

DROP TABLE IF EXISTS `corrida`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `corrida` (
  `corrida_id` int(11) NOT NULL AUTO_INCREMENT,
  `data_corrida` date NOT NULL,
  `cliente_id` int(11) NOT NULL,
  `placa` varchar(7) NOT NULL,
  PRIMARY KEY (`corrida_id`),
  KEY `cliente_id` (`cliente_id`),
  KEY `taxista` (`placa`),
  CONSTRAINT `corrida_ibfk_1` FOREIGN KEY (`cliente_id`) REFERENCES `cliente` (`cliente_id`),
  CONSTRAINT `corrida_ibfk_2` FOREIGN KEY (`placa`) REFERENCES `taxi` (`placa`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=32 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `corrida`
--

LOCK TABLES `corrida` WRITE;
/*!40000 ALTER TABLE `corrida` DISABLE KEYS */;
INSERT INTO `corrida` VALUES
(30,'2021-05-27',1532,'DDI2211');
/*!40000 ALTER TABLE `corrida` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `taxi`
--

DROP TABLE IF EXISTS `taxi`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `taxi` (
  `placa` varchar(7) NOT NULL,
  `marca` varchar(30) DEFAULT NULL,
  `modelo` varchar(20) NOT NULL,
  `ano_fabricacao` int(11) DEFAULT 2020,
  PRIMARY KEY (`placa`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `taxi`
--

LOCK TABLES `taxi` WRITE;
/*!40000 ALTER TABLE `taxi` DISABLE KEYS */;
INSERT INTO `taxi` VALUES
('DDI2211','Honda','Fit',2020),
('DID1122','Honda','Civic',2020),
('DKL4598','Volkswagen','Gol',2019),
('JJM3692','Chevrolet','Corsa',1999);
/*!40000 ALTER TABLE `taxi` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2024-05-29 13:40:38

# Dijkstra_Algorithm
## What is Dijkstra algorithm?
Dijkstra is an algorithm for finding the the shortest path between nodes in a graph.This algorithm created back to 1956 by computer scientist Edsger W. Dijkstra.For more details Dijkstra’s algorithm is a pathfinding algorithm that generates every single route through the graph, and then selects the route that has the lowest overall cost.
This works by iteratively calculating a distance for each node in the graph, starting from the start node, and continuing until we reach the end node. In every iteration we have a “current node,” and we compute a new best score for every node that can be reached from it.

## Real life applications of Dijkstra's Algorithm

* Digital Mapping Services in Google Maps
* Social Networking Application
* Telephone Network
* IP routing to find Open shortest Path First
* Robotic Path etc..

## Example 

   <p align="center">
   <img width="690" height="430" src="https://github.com/TheodoreGisis/Dijkstra_Algorithm/blob/main/Graph/Graph.jpg" >
   </p>
   
   1) We initialize all distances to infinity 
  
  <p align="center">
   <img width="160" height="230" src="https://github.com/TheodoreGisis/Dijkstra_Algorithm/blob/main/Graph/Distances.jpg" >
   </p>
   
   2) We are making an array that hold the information,if the node is visited or no.We initialize all nodes as not visited  except from the source node,in our case 0.
   
   <p align="center">
   <img width="690" height="430" src="https://github.com/TheodoreGisis/Dijkstra_Algorithm/blob/main/Graph/Viseted_array.jpg" >
   </p>

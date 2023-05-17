// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "j2objc_JRE",
	products: [
	        .library(
	            name: "JREPackage",
	            targets: ["JRE"]),
	    ],
	targets: [
	    .binaryTarget(name: "JRE", url: "https://devassets.asmallworld.net/JRE.zip", checksum: "47fd11edaf77e5dea93d049cd3b1b76db598c42e8f6d21e9721071ee3f31bff4")
	]
)

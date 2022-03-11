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
	    .binaryTarget(name: "JRE", url: "https://devassets.asmallworld.net/JRE.zip", checksum: "6c0afa42546dfc62a6eb0ba6809a98faa974ffe0ab9eb01fdf7899890157c9fa")
	]
)

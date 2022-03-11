// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

// NOTE: this framework is only compiled for ios arm64, ios simulator arm64 and ios simulator x86_64
// NOTE: which is sufficient if you're developing an iOS app on an Intel or Apple Silicon Mac

import PackageDescription

let package = Package(
    name: "JRE",
	products: [
	        .library(
	            name: "JREPackage",
	            targets: ["JRE"]),
	    ],
	targets: [
	    .binaryTarget(name: "JRE", url: "https://devassets.asmallworld.net/JRE.zip", checksum: "6c0afa42546dfc62a6eb0ba6809a98faa974ffe0ab9eb01fdf7899890157c9fa")
	]
)

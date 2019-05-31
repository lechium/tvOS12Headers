/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGGraphNode.h>
#import <libobjc.A.dylib/PGGraphLocationNaming.h>
#import <libobjc.A.dylib/PGGraphLocationCoordinates.h>

@class NSString, PGGraphLocationNode;

@interface PGGraphAreaNode : PGGraphNode <PGGraphLocationNaming, PGGraphLocationCoordinates> {

	CLLocationCoordinate2D _centroidCoordinate;

}

@property (assign,nonatomic) CLLocationCoordinate2D centroidCoordinate;                  //@synthesize centroidCoordinate=_centroidCoordinate - In the implementation block
@property (readonly) BOOL isBlacklisted; 
@property (readonly) NSString * fullname; 
@property (readonly) PGGraphLocationNode * stateOrBiggerParentLocationNode; 
@property (readonly) NSString * shortenedName; 
-(CLLocationCoordinate2D)coordinate;
-(id)addressNodes;
-(NSString *)fullname;
-(NSString *)shortenedName;
-(BOOL)diameterIsLargerThanDiameter:(double)arg1 ;
-(PGGraphLocationNode *)stateOrBiggerParentLocationNode;
-(CLLocationCoordinate2D)centroidCoordinate;
-(void)setCentroidCoordinate:(CLLocationCoordinate2D)arg1 ;
-(BOOL)isBlacklisted;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGGraphLocationNode.h>

@interface PGGraphAddressNode : PGGraphLocationNode
-(CLLocationCoordinate2D)coordinate;
-(id)stateNode;
-(void)enumerateAreaNodesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isOcean;
-(id)districtNode;
-(id)cityNode;
-(id)countryNode;
-(id)areaNodes;
-(void)enumeratePersonHomeOrWorkNodesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isPersonHomeOrWorkAddress;
-(BOOL)locationIsImproved;
-(id)streetNode;
-(void)addressEnumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)UUID;
-(id)location;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, GEOComposedWaypoint;

@interface MNTraceCommuteDestinationRow : NSObject {

	unsigned long long _destinationID;
	NSString* _name;
	GEOComposedWaypoint* _waypoint;

}

@property (assign,nonatomic) unsigned long long destinationID;              //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) GEOComposedWaypoint * waypoint;                //@synthesize waypoint=_waypoint - In the implementation block
-(GEOComposedWaypoint *)waypoint;
-(void)setWaypoint:(GEOComposedWaypoint *)arg1 ;
-(unsigned long long)destinationID;
-(void)setDestinationID:(unsigned long long)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
@end


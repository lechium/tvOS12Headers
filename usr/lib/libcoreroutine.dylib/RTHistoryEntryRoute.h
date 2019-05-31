/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, RTMapItem;

@interface RTHistoryEntryRoute : NSObject {

	BOOL _navigationWasInterrupted;
	NSDate* _usageDate;
	RTMapItem* _originMapItem;
	RTMapItem* _destinationMapItem;

}

@property (nonatomic,readonly) NSDate * usageDate;                          //@synthesize usageDate=_usageDate - In the implementation block
@property (nonatomic,readonly) RTMapItem * originMapItem;                   //@synthesize originMapItem=_originMapItem - In the implementation block
@property (nonatomic,readonly) RTMapItem * destinationMapItem;              //@synthesize destinationMapItem=_destinationMapItem - In the implementation block
@property (nonatomic,readonly) BOOL navigationWasInterrupted;               //@synthesize navigationWasInterrupted=_navigationWasInterrupted - In the implementation block
-(RTMapItem *)originMapItem;
-(NSDate *)usageDate;
-(RTMapItem *)destinationMapItem;
-(id)initWithUsageDate:(id)arg1 originMapItem:(id)arg2 destinationMapItem:(id)arg3 navigationWasInterrupted:(BOOL)arg4 ;
-(BOOL)navigationWasInterrupted;
-(id)init;
-(id)description;
@end


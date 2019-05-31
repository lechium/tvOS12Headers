/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLFrequentLocationProtocol.h>

@protocol PLMomentProtocol;
@class NSDateInterval, NSSet, NSString;

@interface PLFrequentLocation : NSObject <PLFrequentLocationProtocol> {

	NSDateInterval* _dateInterval;
	id<PLMomentProtocol> _centroid;
	NSSet* _items;
	CLLocationCoordinate2D _coordinate;

}

@property (readonly) id<PLMomentProtocol> centroid;                  //@synthesize centroid=_centroid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (readonly) NSDateInterval * dateInterval;                  //@synthesize dateInterval=_dateInterval - In the implementation block
@property (readonly) NSSet * items;                                  //@synthesize items=_items - In the implementation block
-(CLLocationCoordinate2D)coordinate;
-(NSDateInterval *)dateInterval;
-(id)initWithDateInterval:(id)arg1 centroid:(id)arg2 items:(id)arg3 ;
-(NSString *)description;
-(NSSet *)items;
-(id<PLMomentProtocol>)centroid;
@end


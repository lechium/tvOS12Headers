/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOFlyoverRegionVersions;

@interface _GEOFlyoverRegionVersionMap : NSObject {

	GEOFlyoverRegionVersions* _versions;
	unordered_map<unsigned int, unsigned long, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long> > >* _regionToIndex;

}
-(GEOFlyoverRegion*)regionForID:(unsigned)arg1 ;
-(void)enumerateFlyoverRegions:(/*^block*/id)arg1 ;
-(id)initWithFlyoverRegions:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
@end

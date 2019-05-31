/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOMapFeatureLine : NSObject {

	SCD_Struct_GE30* _coordinates;
	unsigned long long _coordinateCount;
	double _length;
	BOOL _isFlipped;

}

@property (nonatomic,readonly) SCD_Struct_GE30* coordinates; 
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) double length; 
-(id)_containingTile;
-(SCD_Struct_GE42*)_tilePointsForSection:(unsigned long long)arg1 withCount:(out unsigned long long*)arg2 ;
-(unsigned long long)coordinateCount;
-(SCD_Struct_GE30*)coordinates;
-(double)length;
-(id)init;
-(void)dealloc;
@end


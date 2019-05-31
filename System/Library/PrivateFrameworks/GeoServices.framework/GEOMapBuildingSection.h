/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapBuildingSection <NSObject>
@property (nonatomic,readonly) SCD_Struct_GE30* coordinates; 
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) double baseHeight; 
@property (nonatomic,readonly) double height; 
@required
-(unsigned long long)coordinateCount;
-(SCD_Struct_GE30*)coordinates;
-(double)baseHeight;
-(double)height;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol GEOTransitShieldDataSource <NSObject>
@property (nonatomic,readonly) long long shieldType; 
@property (nonatomic,readonly) NSString * shieldText; 
@property (nonatomic,readonly) NSString * shieldColorString; 
@required
-(NSString *)shieldText;
-(long long)shieldType;
-(NSString *)shieldColorString;

@end

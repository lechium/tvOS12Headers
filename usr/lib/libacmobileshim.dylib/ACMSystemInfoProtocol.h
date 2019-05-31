/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ACMSystemInfoProtocol
@property (nonatomic,readonly) NSString * MACAddress; 
@property (nonatomic,readonly) NSString * IPAddress; 
@property (nonatomic,readonly) NSString * uniqueDeviceIdentifier; 
@property (nonatomic,readonly) NSString * deviceModel; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) BOOL isRunningOnModernMobileSystem; 
@property (nonatomic,readonly) BOOL isTouchIDAvailable; 
@property (nonatomic,readonly) BOOL isRetailDevice; 
@property (nonatomic,readonly) NSString * version; 
@property (nonatomic,readonly) BOOL isPreRelease; 
@required
-(NSString *)uniqueDeviceIdentifier;
-(NSString *)MACAddress;
-(BOOL)isTouchIDAvailable;
-(BOOL)isRetailDevice;
-(BOOL)isPreRelease;
-(BOOL)isRunningOnModernMobileSystem;
-(NSString *)deviceModel;
-(NSString *)IPAddress;
-(NSString *)version;
-(NSString *)systemVersion;

@end

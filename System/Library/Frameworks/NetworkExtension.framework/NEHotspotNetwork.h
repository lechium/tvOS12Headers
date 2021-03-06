/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSString;

@interface NEHotspotNetwork : NSObject {

	CNNetworkRef _network;

}

@property (assign) CNNetworkRef network;                                   //@synthesize network=_network - In the implementation block
@property (readonly) NSString * interfaceName; 
@property (readonly) NSString * SSID; 
@property (readonly) NSString * BSSID; 
@property (readonly) double signalStrength; 
@property (getter=isSecure,readonly) BOOL secure; 
@property (getter=didAutoJoin,readonly) BOOL autoJoined; 
@property (getter=didJustJoin,readonly) BOOL justJoined; 
@property (getter=isChosenHelper,readonly) BOOL chosenHelper; 
-(NSString *)interfaceName;
-(NSString *)BSSID;
-(BOOL)didAutoJoin;
-(BOOL)didJustJoin;
-(BOOL)isChosenHelper;
-(CNNetworkRef)network;
-(void)setNetwork:(CNNetworkRef)arg1 ;
-(double)signalStrength;
-(void)setPassword:(id)arg1 ;
-(NSString *)SSID;
-(id)initWithNetwork:(CNNetworkRef)arg1 ;
-(void)dealloc;
-(id)description;
-(BOOL)isSecure;
-(void)setConfidence:(long long)arg1 ;
@end


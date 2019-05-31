/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTCallCapabilities : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isWifiCallingAvailable;
	BOOL _isVoLTECallingAvailable;
	BOOL _isCSCallingAvailable;
	BOOL _isEmergencyCallingOnWifiAllowed;
	BOOL _isEmergencyCallingOnWifiAvailable;
	BOOL _isCarrierSupportsEmergencyCallOnWifiNoLimit;

}

@property (assign,nonatomic) BOOL isWifiCallingAvailable;                                   //@synthesize isWifiCallingAvailable=_isWifiCallingAvailable - In the implementation block
@property (assign,nonatomic) BOOL isVoLTECallingAvailable;                                  //@synthesize isVoLTECallingAvailable=_isVoLTECallingAvailable - In the implementation block
@property (assign,nonatomic) BOOL isCSCallingAvailable;                                     //@synthesize isCSCallingAvailable=_isCSCallingAvailable - In the implementation block
@property (assign,nonatomic) BOOL isEmergencyCallingOnWifiAllowed;                          //@synthesize isEmergencyCallingOnWifiAllowed=_isEmergencyCallingOnWifiAllowed - In the implementation block
@property (assign,nonatomic) BOOL isEmergencyCallingOnWifiAvailable;                        //@synthesize isEmergencyCallingOnWifiAvailable=_isEmergencyCallingOnWifiAvailable - In the implementation block
@property (assign,nonatomic) BOOL isCarrierSupportsEmergencyCallOnWifiNoLimit;              //@synthesize isCarrierSupportsEmergencyCallOnWifiNoLimit=_isCarrierSupportsEmergencyCallOnWifiNoLimit - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isWifiCallingAvailable;
-(BOOL)isVoLTECallingAvailable;
-(BOOL)isCSCallingAvailable;
-(BOOL)isEmergencyCallingOnWifiAllowed;
-(BOOL)isEmergencyCallingOnWifiAvailable;
-(BOOL)isCarrierSupportsEmergencyCallOnWifiNoLimit;
-(void)setIsWifiCallingAvailable:(BOOL)arg1 ;
-(void)setIsVoLTECallingAvailable:(BOOL)arg1 ;
-(void)setIsCSCallingAvailable:(BOOL)arg1 ;
-(void)setIsEmergencyCallingOnWifiAllowed:(BOOL)arg1 ;
-(void)setIsEmergencyCallingOnWifiAvailable:(BOOL)arg1 ;
-(void)setIsCarrierSupportsEmergencyCallOnWifiNoLimit:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

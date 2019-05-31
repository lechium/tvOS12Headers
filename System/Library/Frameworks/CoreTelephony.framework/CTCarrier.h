/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CTCarrier : NSObject {

	NSString* _carrierName;
	NSString* _mobileCountryCode;
	NSString* _mobileNetworkCode;
	NSString* _isoCountryCode;
	BOOL _allowsVOIP;

}

@property (nonatomic,retain) NSString * carrierName;                    //@synthesize carrierName=_carrierName - In the implementation block
@property (nonatomic,retain) NSString * mobileCountryCode;              //@synthesize mobileCountryCode=_mobileCountryCode - In the implementation block
@property (nonatomic,retain) NSString * mobileNetworkCode;              //@synthesize mobileNetworkCode=_mobileNetworkCode - In the implementation block
@property (nonatomic,retain) NSString * isoCountryCode;                 //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (assign,nonatomic) BOOL allowsVOIP;                           //@synthesize allowsVOIP=_allowsVOIP - In the implementation block
-(BOOL)allowsVOIP;
-(NSString *)mobileNetworkCode;
-(NSString *)mobileCountryCode;
-(void)setMobileCountryCode:(NSString *)arg1 ;
-(void)setMobileNetworkCode:(NSString *)arg1 ;
-(void)setAllowsVOIP:(BOOL)arg1 ;
-(NSString *)carrierName;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(void)setCarrierName:(NSString *)arg1 ;
-(NSString *)isoCountryCode;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
@end


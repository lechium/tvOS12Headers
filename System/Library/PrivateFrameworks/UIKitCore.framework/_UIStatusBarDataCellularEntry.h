/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarDataNetworkEntry.h>

@class NSString;

@interface _UIStatusBarDataCellularEntry : _UIStatusBarDataNetworkEntry {

	BOOL _callForwardingEnabled;
	BOOL _showsEmergencyOnlyWhenDisconnected;
	long long _type;
	NSString* _string;
	NSString* _crossfadeString;
	NSString* _badgeString;

}

@property (assign,nonatomic) long long type;                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * string;                                      //@synthesize string=_string - In the implementation block
@property (nonatomic,copy) NSString * crossfadeString;                             //@synthesize crossfadeString=_crossfadeString - In the implementation block
@property (nonatomic,copy) NSString * badgeString;                                 //@synthesize badgeString=_badgeString - In the implementation block
@property (assign,nonatomic) BOOL callForwardingEnabled;                           //@synthesize callForwardingEnabled=_callForwardingEnabled - In the implementation block
@property (assign,nonatomic) BOOL showsEmergencyOnlyWhenDisconnected;              //@synthesize showsEmergencyOnlyWhenDisconnected=_showsEmergencyOnlyWhenDisconnected - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)string;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(NSString *)crossfadeString;
-(BOOL)showsEmergencyOnlyWhenDisconnected;
-(BOOL)callForwardingEnabled;
-(NSString *)badgeString;
-(id)_ui_descriptionBuilder;
-(void)setCrossfadeString:(NSString *)arg1 ;
-(void)setBadgeString:(NSString *)arg1 ;
-(void)setCallForwardingEnabled:(BOOL)arg1 ;
-(void)setShowsEmergencyOnlyWhenDisconnected:(BOOL)arg1 ;
@end

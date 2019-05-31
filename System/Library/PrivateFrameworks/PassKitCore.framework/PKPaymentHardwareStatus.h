/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PKPaymentHardwareStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasSecureElement;
	BOOL _hasRemoteDevices;
	BOOL _inFailForward;
	BOOL _canMakeRemotePayments;

}

@property (assign,nonatomic) BOOL hasSecureElement;                                          //@synthesize hasSecureElement=_hasSecureElement - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteDevices;                                          //@synthesize hasRemoteDevices=_hasRemoteDevices - In the implementation block
@property (assign,getter=isInFailForward,nonatomic) BOOL inFailForward;                      //@synthesize inFailForward=_inFailForward - In the implementation block
@property (assign,nonatomic) BOOL canMakeRemotePayments;                                     //@synthesize canMakeRemotePayments=_canMakeRemotePayments - In the implementation block
@property (getter=_isDemoModeActive,nonatomic,readonly) BOOL _isDemoModeActive; 
@property (nonatomic,readonly) BOOL canMakePayments; 
@property (nonatomic,readonly) BOOL canMakeLocalPayments; 
+(BOOL)supportsSecureCoding;
-(BOOL)isInFailForward;
-(BOOL)canMakePayments;
-(BOOL)hasRemoteDevices;
-(BOOL)canMakeLocalPayments;
-(BOOL)canMakeRemotePayments;
-(BOOL)_isDemoModeActive;
-(BOOL)hasSecureElement;
-(void)setHasSecureElement:(BOOL)arg1 ;
-(void)setHasRemoteDevices:(BOOL)arg1 ;
-(void)setInFailForward:(BOOL)arg1 ;
-(void)setCanMakeRemotePayments:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


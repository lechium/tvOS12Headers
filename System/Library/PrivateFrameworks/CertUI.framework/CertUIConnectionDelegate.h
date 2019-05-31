/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CertUI/CertUI-Structs.h>
@class CertUITrustManager, NSString;

@interface CertUIConnectionDelegate : NSObject {

	CertUITrustManager* _trustManager;
	id _forwardingDelegate;
	NSString* _connectionDisplayName;
	SCD_Struct_Ce1 _delegateRespondsTo;

}

@property (assign,nonatomic,__weak) id forwardingDelegate;                //@synthesize forwardingDelegate=_forwardingDelegate - In the implementation block
@property (nonatomic,copy) NSString * connectionDisplayName;              //@synthesize connectionDisplayName=_connectionDisplayName - In the implementation block
+(id)defaultServiceForProtocol:(id)arg1 ;
-(BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)_continueConnectionWithResponse:(int)arg1 challenge:(id)arg2 service:(id)arg3 ;
-(void)setForwardingDelegate:(id)arg1 ;
-(id)forwardingDelegate;
-(NSString *)connectionDisplayName;
-(void)setConnectionDisplayName:(NSString *)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
@end


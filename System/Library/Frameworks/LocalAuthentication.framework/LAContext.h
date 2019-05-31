/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LAPrearmContextXPC;
#import <LocalAuthentication/LocalAuthentication-Structs.h>
@class LAClient, NSNumber, NSData, NSString;

@interface LAContext : NSObject {

	LAClient* _client;
	id<LAPrearmContextXPC> _prearmContext;
	BOOL _cancelButtonVisible;
	BOOL _fallbackButtonVisible;
	NSNumber* _maxBiometryFailures;
	NSData* _evaluatedPolicyDomainState;
	double _touchIDAuthenticationAllowableReuseDuration;
	NSString* _localizedReason;
	NSData* _externalizedContext;
	NSNumber* _touchIDAuthenticationRetryLimit;

}

@property (nonatomic,retain) NSData * externalizedContext;                                           //@synthesize externalizedContext=_externalizedContext - In the implementation block
@property (assign,getter=isCancelButtonVisible,nonatomic) BOOL cancelButtonVisible;                  //@synthesize cancelButtonVisible=_cancelButtonVisible - In the implementation block
@property (assign,getter=isFallbackButtonVisible,nonatomic) BOOL fallbackButtonVisible;              //@synthesize fallbackButtonVisible=_fallbackButtonVisible - In the implementation block
@property (nonatomic,retain) NSData * evaluatedPolicyDomainState;                                    //@synthesize evaluatedPolicyDomainState=_evaluatedPolicyDomainState - In the implementation block
@property (nonatomic,retain) NSNumber * touchIDAuthenticationRetryLimit;                             //@synthesize touchIDAuthenticationRetryLimit=_touchIDAuthenticationRetryLimit - In the implementation block
@property (assign,nonatomic,__weak) id<LAUIDelegate> uiDelegate; 
@property (nonatomic,copy) NSString * localizedFallbackTitle; 
@property (nonatomic,copy) NSString * localizedCancelTitle; 
@property (nonatomic,retain) NSNumber * maxBiometryFailures;                                         //@synthesize maxBiometryFailures=_maxBiometryFailures - In the implementation block
@property (assign,nonatomic) double touchIDAuthenticationAllowableReuseDuration;                     //@synthesize touchIDAuthenticationAllowableReuseDuration=_touchIDAuthenticationAllowableReuseDuration - In the implementation block
@property (nonatomic,copy) NSString * localizedReason;                                               //@synthesize localizedReason=_localizedReason - In the implementation block
@property (assign,nonatomic) BOOL interactionNotAllowed; 
+(id)currentContext;
-(BOOL)canEvaluatePolicy:(long long)arg1 error:(id*)arg2 ;
-(void)evaluatePolicy:(long long)arg1 localizedReason:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)retryProcessedEvent:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)resetProcessedEvent:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)setCredential:(id)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)setCredential:(id)arg1 type:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)setShowingCoachingHint:(BOOL)arg1 event:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(id)initWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2 ;
-(id)_publicErrorFromInternalError:(id)arg1 options:(id)arg2 ;
-(id)evaluatePolicy:(long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)_evaluationMechanismsFromReturnedError:(id)arg1 error:(id*)arg2 ;
-(id)evaluateAccessControl:(SecAccessControlRef)arg1 operation:(long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)evaluateAccessControl:(SecAccessControlRef)arg1 operation:(long long)arg2 options:(id)arg3 reply:(/*^block*/id)arg4 ;
-(BOOL)setCredential:(id)arg1 type:(long long)arg2 error:(id*)arg3 ;
-(id)_serverPropertyValueForOption:(long long)arg1 ;
-(void)_setServerPropertyForOption:(long long)arg1 value:(id)arg2 ;
-(id)optionNotInteractive;
-(void)setOptionNotInteractive:(id)arg1 ;
-(id)initWithUIDelegate:(id)arg1 ;
-(id)_hashWithBundleIdentifier:(id)arg1 ;
-(id)evaluationMechanismsForPolicy:(long long)arg1 error:(id*)arg2 ;
-(id)evaluationMechanismsForAccessControl:(SecAccessControlRef)arg1 operation:(long long)arg2 error:(id*)arg3 ;
-(void)enterPassword:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)evaluateAccessControl:(SecAccessControlRef)arg1 operation:(long long)arg2 localizedReason:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)prearmTouchIDWithReply:(/*^block*/id)arg1 ;
-(NSString *)localizedCancelTitle;
-(void)setLocalizedCancelTitle:(NSString *)arg1 ;
-(void)withCurrentContextExecute:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)optionTimeout;
-(void)setOptionTimeout:(id)arg1 ;
-(id)optionCallerName;
-(void)setOptionCallerName:(id)arg1 ;
-(id)optionCallerPID;
-(void)setOptionCallerPID:(id)arg1 ;
-(BOOL)interactionNotAllowed;
-(void)setInteractionNotAllowed:(BOOL)arg1 ;
-(NSNumber *)maxBiometryFailures;
-(void)setMaxBiometryFailures:(NSNumber *)arg1 ;
-(NSData *)evaluatedPolicyDomainState;
-(void)setEvaluatedPolicyDomainState:(NSData *)arg1 ;
-(double)touchIDAuthenticationAllowableReuseDuration;
-(void)setTouchIDAuthenticationAllowableReuseDuration:(double)arg1 ;
-(BOOL)isCancelButtonVisible;
-(void)setCancelButtonVisible:(BOOL)arg1 ;
-(BOOL)isFallbackButtonVisible;
-(void)setFallbackButtonVisible:(BOOL)arg1 ;
-(NSNumber *)touchIDAuthenticationRetryLimit;
-(void)setTouchIDAuthenticationRetryLimit:(NSNumber *)arg1 ;
-(NSData *)externalizedContext;
-(void)setExternalizedContext:(NSData *)arg1 ;
-(void)setUiDelegate:(id<LAUIDelegate>)arg1 ;
-(id<LAUIDelegate>)uiDelegate;
-(id)initWithExternalizedContext:(id)arg1 ;
-(BOOL)setCredential:(id)arg1 type:(long long)arg2 ;
-(void)resetWithReply:(/*^block*/id)arg1 ;
-(void)evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)isCredentialSet:(long long)arg1 ;
-(void)setLocalizedReason:(NSString *)arg1 ;
-(void)setLocalizedFallbackTitle:(NSString *)arg1 ;
-(NSString *)localizedFallbackTitle;
-(NSString *)localizedReason;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)invalidate;
@end


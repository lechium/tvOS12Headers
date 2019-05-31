/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class MFAccount, MFActivityMonitor, MFMonitoredInvocation, MFError, NSArray;

@interface MFAccountValidator : NSObject {

	MFAccount* _account;
	MFActivityMonitor* _accountValidationActivity;
	MFMonitoredInvocation* _validationInvocation;
	/*^block*/id _completionBlock;
	struct {
		unsigned useSSL : 1;
		unsigned incomingServerSupportsSSL : 1;
		unsigned smtpServerSupportsSSL : 1;
		unsigned canceled : 1;
		unsigned performsValidationInBackground : 1;
		unsigned unused : 27;
	}  _flags;
	MFError* _incomingServerValidationError;
	MFError* _smtpServerValidationError;
	NSArray* _incomingServerAuthSchemes;
	NSArray* _smtpServerAuthSchemes;
	id _delegate;

}

@property (nonatomic,readonly) BOOL performsValidationInBackground; 
@property (nonatomic,readonly) MFMonitoredInvocation * validationInvocation; 
@property (assign,nonatomic) id delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL accountIsValid; 
@property (nonatomic,readonly) BOOL accountSupportsSSL; 
@property (nonatomic,readonly) MFError * error; 
@property (nonatomic,readonly) MFAccount * account; 
-(id)initWithPerformsValidationInBackground:(BOOL)arg1 ;
-(void)validateAccount:(id)arg1 useSSL:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_validateAccount:(id)arg1 withFallbacks:(BOOL)arg2 ;
-(void)validateAccountWithoutFallbacks:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_backgroundValidateAccountFinished:(id)arg1 authSchemes:(id)arg2 ;
-(void)_validateAccount:(id)arg1 ;
-(void)_validateAccountWithoutFallbacks:(id)arg1 ;
-(BOOL)performsValidationInBackground;
-(BOOL)_outgoingServerValid;
-(BOOL)_incomingServerValid;
-(void)validateAccount:(id)arg1 useSSL:(BOOL)arg2 ;
-(void)validateAccountWithoutFallbacks:(id)arg1 ;
-(void)cancelValidation;
-(id)_ispAccountInfo;
-(BOOL)accountValidationCanceled;
-(MFMonitoredInvocation *)validationInvocation;
-(BOOL)accountIsValid;
-(BOOL)accountSupportsSSL;
-(MFAccount *)account;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)stop;
-(MFError *)error;
@end


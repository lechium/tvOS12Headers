/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLConnectionInternal.h>
#import <libobjc.A.dylib/NSURLConnectionRequired.h>

@class NSURLAuthenticationChallenge, NSString;

@interface NSURLConnectionInternalConnection : NSURLConnectionInternal <NSURLConnectionRequired> {

	int _cfConnLock;
	CFURLConnectionRef _cfConn;
	CFURLAuthChallengeRef _currCFChallenge;
	NSURLAuthenticationChallenge* _currNSChallenge;
	CFStringRef _fileName;
	BOOL _shouldSkipCancelOnRelease;
	long long _totalBytes;
	long long _expectedTotalBytes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_reportTimingDataToAWD;
-(void)_setDelegateQueue:(id)arg1 ;
-(void)_suspendLoading;
-(void)_resumeLoading;
-(void)_setShouldSkipCancelOnRelease:(BOOL)arg1 ;
-(void)invokeForDelegate:(/*^block*/id)arg1 ;
-(void)sendCFChallenge:(CFURLAuthChallengeRef)arg1 toSelector:(SEL)arg2 ;
-(CFURLConnectionRef)_retainCFURLConnection;
-(CFURLConnectionRef)_atomic_CFURLConnection;
-(void)cleanupChallenges;
-(CFURLConnectionRef)_CFURLConnection;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1 ;
-(void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)initWithInfo:(const InternalInit*)arg1 ;
-(id)_timingData;
-(void)dealloc;
-(void)cancel;
-(void)_invalidate;
-(void)start;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
@end


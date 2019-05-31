/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSAuthenticationContext, NSArray, NSString;

@interface SSRedeemCodesRequest : SSRequest <SSXPCCoding> {

	SSAuthenticationContext* _authenticationContext;
	NSArray* _redeemCodes;
	BOOL _headless;
	BOOL _cameraRecognized;
	NSString* _logCorrelationKey;

}

@property (readonly) NSArray * redeemCodes; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (assign) BOOL headless;                                              //@synthesize headless=_headless - In the implementation block
@property (assign) BOOL cameraRecognized;                                      //@synthesize cameraRecognized=_cameraRecognized - In the implementation block
@property (nonatomic,retain) NSString * logCorrelationKey;                     //@synthesize logCorrelationKey=_logCorrelationKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(SSAuthenticationContext *)authenticationContext;
-(NSString *)logCorrelationKey;
-(void)setLogCorrelationKey:(NSString *)arg1 ;
-(NSArray *)redeemCodes;
-(void)startWithRedeemResponseBlock:(/*^block*/id)arg1 ;
-(id)initWithRedeemCodes:(id)arg1 ;
-(BOOL)headless;
-(void)setHeadless:(BOOL)arg1 ;
-(BOOL)cameraRecognized;
-(void)setCameraRecognized:(BOOL)arg1 ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

